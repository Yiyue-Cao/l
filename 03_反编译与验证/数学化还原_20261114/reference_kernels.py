"""Readable reconstruction from libstrategy_comm5.so, SHA256 a778c872….

This is a set of decision kernels, not a replacement backtest engine/plugin.
Addresses refer to the original ELF virtual addresses (before load relocation).
Floating-point and enum edge cases are documented in the accompanying report.
"""
from dataclasses import dataclass
from enum import IntEnum
import math
from collections import deque, Counter


class Action(IntEnum):
    OPEN_LONG = 0
    CLOSE_LONG = 1
    OPEN_SHORT = 2
    CLOSE_SHORT = 3
    NONE = 4


def sse_min(a, b):
    """MINSD returns its second operand on unordered/equal comparison."""
    return a if a < b else b


def sse_max(a, b):
    return a if a > b else b


def signal_mode(name):
    """0x3b000: PV2 -> 1, PV4 -> 3; all other spellings -> 0."""
    return {"PV2": 1, "PV4": 3}.get(name, 0)


def trigger_mode(name):
    """0x3b040: case-sensitive, unknown values fall back to point trigger."""
    return {"WindowsMeanTrigger": 1, "WindowsStdTrigger": 2,
            "WindowsQuantileTrigger": 3, "WindowsSharpeTrigger": 4,
            "WindowsRsiTrigger": 5}.get(name, 0)


EFFECTIVE_FIELDS = ['long_open_threshold', 'long_close_threshold',
    'short_open_threshold', 'short_close_threshold', 'max_single_net_vol',
    'max_single_net_amt', 'max_single_add_vol', 'max_single_add_amt',
    'taker_mult_max', 'taker_cover_k', 'taker_skip_half_spread_bp',
    'taker_rate_baseline', 'max_taker_rate']


def effective_params(global_params, phase_params):
    """0x3b150. Phase None fields inherit globals, including low_action.

    Ghidra incorrectly deletes the Option<String> fallback as unreachable;
    the actual JNO branch and native function probes confirm inheritance.
    """
    result = {k: global_params[k] if phase_params.get(k) is None else phase_params[k]
              for k in EFFECTIVE_FIELDS + ['high_taker_half_spread', 'low_action']}
    result['low_action_code'] = {'skip': 1, 'maker': 2}.get(result['low_action'], 0)
    return result


def transform_signal(primary_score, secondary_score, mode_name, pv1_alpha=1., k1=1.):
    """Recovered on_signal dispatch, finite inputs and positive k1.

    primary/secondary refer to event offsets +0x70/+0x78; semantic names
    require the external producer schema. This wrapper is statically reviewed.
    """
    mode = signal_mode(mode_name)
    if mode == 1: return secondary_score
    if mode == 3: return math.copysign(abs(primary_score)**(1./k1), primary_score)
    return primary_score * pv1_alpha


def classify(score, thresholds):
    """Threshold order: long_open, long_close, short_open, short_close.

    The branch order is part of the recovered behavior; do not reorder tests.
    Defined here for finite scores/thresholds. Point-trigger arithmetic below
    also reproduces the machine's NaN-to-zero clipping before these tests.
    """
    lo, lc, so, sc = thresholds
    if score >= lo:
        return Action.OPEN_LONG
    if score >= sc:
        return Action.CLOSE_SHORT
    if score <= so:
        return Action.OPEN_SHORT
    if score <= lc:
        return Action.CLOSE_LONG
    return Action.NONE


def point_trigger(score, thresholds, cost):
    adjusted = sse_max(score - cost, 0.0) if score > 0 else sse_min(cost + score, 0.0)
    return classify(adjusted, thresholds), 1.0


def point_pv1(score, thresholds, cost_alpha, spread_bp):
    """0x82b40. Caller has already multiplied the raw score by pv1_alpha."""
    return point_trigger(score, thresholds, abs(spread_bp) * cost_alpha)


def point_pv4(score, thresholds, cost_alpha, fee_bp, spread_bp):
    """0x82bd0."""
    return point_trigger(score, thresholds, (abs(spread_bp) + fee_bp) * cost_alpha)


def dynamic_threshold(holding_secs, start_secs, max_secs, delta_score, thresholds):
    """0x83f00: relax all four thresholds with position holding time."""
    if start_secs < 0 or max_secs < 0 or holding_secs < start_secs or abs(delta_score) <= 1e-9:
        return tuple(thresholds)
    # For finite inputs this is exactly the instruction order in the binary.
    fraction = sse_min((holding_secs - start_secs) / sse_max(max_secs - start_secs, 1e-6), 1.0)
    delta = abs(delta_score * fraction)
    lo, lc, so, sc = thresholds
    return lo - delta, delta + lc, delta + so, sc - delta


@dataclass(frozen=True)
class PhaseThresholds:
    enter_phase2: float
    exit_phase2: float
    enter_phase3: float
    exit_phase3: float
    min_trades_for_upgrade: float
    invert_phase: bool = False


def next_phase(phase, pnl, trade_count, p):
    """0x3b520: phase codes 0/1/2 correspond to P1/P2/P3.

    Only one phase step per call. Tests below match finite input comparisons.
    """
    enough = trade_count >= p.min_trades_for_upgrade
    if not p.invert_phase:
        if phase == 0:
            return int(enough and pnl >= p.enter_phase2)
        if phase == 1:
            if enough and pnl >= p.enter_phase3:
                return 2
            return int(pnl >= p.exit_phase2)
        return 1 if pnl < p.exit_phase3 else 2
    if phase == 0:
        return int(enough and pnl <= p.exit_phase2)
    if phase == 1:
        if enough and pnl <= p.exit_phase3:
            return 2
        return int(pnl <= p.enter_phase2)
    return 1 if pnl > p.enter_phase3 else 2


def effective_amounts(net_amt, other_amt, xs_mult, phase, global_net_amt, phase2_mult, phase3_mult):
    """0x3b4a0: returns (net amount limit, other amount limit).

    'other' is supplied by caller (add/close limit). Negative unlimited limits
    survive both phase scaling and XS scaling, including xs_mult == 0.
    """
    mult = phase2_mult if phase == 1 else phase3_mult if phase == 2 else 0.0
    if mult > 0:
        net_amt = global_net_amt
        if not net_amt < 0:
            net_amt *= mult
    return (net_amt if net_amt < 0 else xs_mult * net_amt,
            other_amt if other_amt < 0 else xs_mult * other_amt)


def high_taker_rate(score, threshold, half_spread_bp, a, b,
                    mult_max, cover_k, skip_half_spread_bp, skip_return):
    """0x3c3c0. Main callback supplies a=ask1 and b=bid1 for both sides."""
    total = a + b
    if total <= 0:
        return 0.0
    if skip_half_spread_bp > 0 and half_spread_bp > skip_half_spread_bp:
        return skip_return
    baseline = sse_max((a - b) / total, 0.0)
    if half_spread_bp <= 0 or mult_max <= 1 or abs(threshold) < 1e-9:
        return baseline
    excess = sse_max(abs(score) / abs(threshold) - 1.0, 0.0)
    multiplier = (mult_max - 1.0) * math.tanh(excess * 0.5) + 1.0
    cover = ((abs(score) - abs(threshold)) * cover_k) / half_spread_bp
    cap = cover if math.isnan(multiplier) else min(cover, multiplier)
    return baseline * sse_max(cap, 0.0)


def taker_fillable_cum(levels, buy, limit_price):
    """0x3c500: levels = opposite-side (price, volume), up to five.

    The first level is counted whenever its price is positive, WITHOUT a
    limit-price test. Higher levels stop at the first nonpositive/ineligible
    price. This helper is not a standalone matching engine.
    """
    if not levels or levels[0][0] <= 0:
        return 0.0
    total = 0.0 + levels[0][1]
    for price, volume in levels[1:5]:
        if price <= 0 or not (limit_price >= price if buy else price >= limit_price):
            break
        total += volume
    return total


def xs_inst_of(code):
    """0x3b390 / 0x3c600: strip ASCII digit suffix, then underscore suffix."""
    return code.rstrip("0123456789").rstrip("_")


class RollingStats:
    """0x823c0: time window retains observations exactly on its left boundary.

    Mirrors the original incremental arithmetic order. std_cache is NOT
    recomputed by update(); the Sharpe trigger recomputes it separately.
    """
    def __init__(self, window_seconds):
        self.window = window_seconds
        self.queue = deque()
        self.total = self.squares = self.positive = self.negative = self.mean = 0.0
        self.std_cache = 0.0

    def update(self, now, value):
        self.queue.append((now,value))
        self.total += value
        self.mean = self.total / len(self.queue)
        self.squares += value * value
        if value <= 0: self.negative += value
        else: self.positive += value
        while self.queue and now - self.queue[0][0] > self.window:
            _,old=self.queue.popleft()
            self.total -= old
            self.mean = self.total / len(self.queue) if self.queue else 0.0
            self.squares -= old * old
            if old <= 0: self.negative -= old
            else: self.positive -= old

    def action(self, mode, thresholds, quantile=.9):
        if mode == 'mean': value = self.mean
        elif mode == 'std': value = self.std_cache
        elif mode == 'sharpe':
            self.std_cache = math.sqrt(max(self.squares/max(len(self.queue),1)-self.mean*self.mean,0.0))
            value = self.mean/self.std_cache if abs(self.std_cache)>1e-6 else 0.0
        elif mode == 'rsi':
            value = 100.-100./(self.positive/abs(self.negative)+1.) if abs(self.negative)>1e-6 else 50.
        elif mode == 'quantile':
            if not 0 <= quantile <= 1: raise ValueError('quantile outside [0,1]')
            if not self.queue: return Action.NONE
            values=sorted(v for _,v in self.queue)
            hi=classify(values[math.floor(quantile*len(values))],thresholds)
            lo=classify(values[math.floor((1.-quantile)*len(values))],thresholds)
            if hi != Action.NONE and lo == Action.NONE and hi in (Action.OPEN_LONG,Action.CLOSE_SHORT): return hi
            if hi == Action.NONE and lo != Action.NONE and lo in (Action.OPEN_SHORT,Action.CLOSE_LONG): return lo
            return Action.NONE
        else: raise ValueError(mode)
        return classify(value,thresholds)


def vote_candidates(actions, vote_rate):
    """0x839a0 uses a randomized HashMap for ties. Return admissible outcomes.

    Strict > vote_rate, rather than >=. NONE votes are included in the counts.
    This intentionally exposes a tie instead of inventing a deterministic rule.
    """
    if not actions: return {Action.NONE},0.0
    counts=Counter(actions);most=max(counts.values());rate=most/len(actions)
    if not rate>vote_rate:return {Action.NONE},0.0
    return {a for a,n in counts.items() if n==most},rate


def round_away(x):
    """C/Rust round, ties away from zero, unlike Python's bankers' round."""
    return math.copysign(math.floor(abs(x)+.5),x)


class VolSpreadRatio:
    """0x81770, time and both windows are in milliseconds."""
    def __init__(self, market_volatility_ms, rolling_windows_ms):
        self.window = market_volatility_ms
        self.mids = deque()
        self.returns = RollingStats(rolling_windows_ms)
        self.spreads = RollingStats(rolling_windows_ms)

    def update(self, now, bid, ask):
        mid = .5*(bid+ask)
        spread = round_away(((ask-bid)/(bid+ask))*100000.)/10.
        self.mids.append((now,mid))
        while self.mids and now-self.mids[0][0]>self.window:
            self.mids.popleft()
        self.spreads.update(now,spread)
        if len(self.mids)<2 or now-self.mids[0][0]<self.window*.5 or self.mids[0][1]<=0:
            return None
        r=round_away((self.mids[-1][1]/self.mids[0][1]-1.)*100000.)/10.
        self.returns.update(now,r)
        s=self.returns
        std=math.sqrt(max(s.squares/max(len(s.queue),1)-s.mean*s.mean,0.))
        s.std_cache=std
        if len(s.queue)>1 and self.spreads.mean>0:
            return std/self.spreads.mean
        return None


def maker_price(bid, ask, tick, ticks_inside, buy):
    """Unrounded target before SDK round_with_step_f64, on_signal."""
    return min(bid+ticks_inside*tick,ask-tick) if buy else max(ask-ticks_inside*tick,bid+tick)


def cancel_candidates(orders, buy, target, price_range, already_cancelled=()):
    """0x3b5f0, orders: dictionaries with id/buy/price; SDK success assumed.

    Two passes: cancel every opposite-side order, then stale same-side orders.
    Equality at the range boundary is retained. Returns requested IDs only.
    """
    seen=set(already_cancelled);result=[]
    for opposite in [True,False]:
        for o in orders:
            if o['id'] in seen or ((o['buy']!=buy)!=opposite):continue
            if opposite or (o['price'] < target-price_range if buy else o['price'] > target+price_range):
                seen.add(o['id']);result.append(o['id'])
    return result
