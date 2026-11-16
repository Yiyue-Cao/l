#!/usr/bin/bash

#SBATCH -p g9755,q9755,mem1t,no_data,commoncpu,new_conf,commongpu,gpu1t,gpu640g,quantgpu
#SBATCH --time=120:00:00
#SBATCH --chdir /cache/hpc_user_liyueting
#SBATCH --threads-per-core=1
#SBATCH -o ./log/%x_%A_sub-%a.out
#SBATCH -e ./log/%x_%A_sub-%a.err
#SBATCH --mem 100G
#SBATCH --cpus-per-task 110
#SBATCH --mail-type=ALL
#SBATCH --mail-user=FT_USER_LYT
# array 在提交时动态传入。

ts()       { date '+%Y-%m-%d %H:%M:%S'; }
log_info() {
    local msg="[$(ts)] [INFO] $*"
    echo "${msg}"
    if [ -n "${job_trace_log:-}" ]; then echo "${msg}" >> "${job_trace_log}"; fi
}
log_warn() {
    local msg="[$(ts)] [WARN] $*"
    echo "${msg}"
    if [ -n "${job_trace_log:-}" ]; then echo "${msg}" >> "${job_trace_log}"; fi
}
log_err() {
    local msg="[$(ts)] [ERROR] $*"
    echo "${msg}" >&2
    if [ -n "${job_trace_log:-}" ]; then echo "${msg}" >> "${job_trace_log}"; fi
}

on_error() {
    local line_no="$1"; local cmd="$2"; local exit_code="$3"
    log_err "failed at line ${line_no}, exit_code=${exit_code}, cmd=${cmd}"
}
trap 'on_error "${LINENO}" "${BASH_COMMAND}" "$?"' ERR

mkdir -p ./log
log_info "sbatch script started: job=${SLURM_JOB_ID:-unknown}, array=${SLURM_ARRAY_TASK_ID:-unknown}, host=$(hostname)"

# ── Hadoop 环境 ──────────────────────────────────────────────────────────────
export HADOOP_USER_NAME=zli
export LD_LIBRARY_PATH="${LD_LIBRARY_PATH:-}:/usr/local/lib"
export JAVA_HOME=/usr/lib/jvm/java-11-openjdk-amd64/
export HADOOP_HOME=/opt/hadoop
export LD_LIBRARY_PATH=${JAVA_HOME}/lib/server:$HADOOP_HOME/lib/native/:${LD_LIBRARY_PATH}
export CLASSPATH="${CLASSPATH:-}:`$HADOOP_HOME/bin/hadoop classpath --glob`"

# ── 路径配置 ─────────────────────────────────────────────────────────────────
hdfs_path=/user/zli/lyt_d/slurm/slurm_task
slurm_task_name=${_TASK:-${SLURM_JOB_NAME}}
pj_name=future_backtest_sweep
runner_bin_name=future_backtest_runner
framework_dylib_name=libfuture_backtest.so
hdfs_job_log_root=/user/zli/lyt_d/slurm/job_logs

# ── 工作目录（每个 SLURM job + array 子任务独立）────────────────────────────────
base_dir="$(pwd)"
workdir="${base_dir}/lyt_d/${SLURM_JOB_ID}_${SLURM_ARRAY_TASK_ID}/${pj_name}"
task_dir="${workdir}/${slurm_task_name}"
rm -rf "${workdir}"
mkdir -p "${task_dir}"

# ── 日志目录 ─────────────────────────────────────────────────────────────────
job_local_log_dir="${task_dir}/logs"
job_hdfs_log_dir="${hdfs_job_log_root}/${slurm_task_name}/${SLURM_JOB_ID}_${SLURM_ARRAY_TASK_ID}"
job_trace_log="${job_local_log_dir}/run_trace.log"
job_status_file="${job_local_log_dir}/status.json"
cfg_start_date="unknown"
cfg_end_date="unknown"
sweep_kind="unknown"
sweep_strategy="unknown"
sweep_collect_full_configs="false"
sweep_skip_hdfs_precheck="false"
cfg_sha256="unknown"
task_manifest_sha256="unknown"

collect_sweep_sidecars() {
    local sweep_local_root="${task_dir}/sweep_output_local"
    local sidecar_dir="${job_local_log_dir}/sidecars"
    if [ ! -d "${sweep_local_root}" ]; then
        log_warn "no local sweep artifacts to collect: ${sweep_local_root}"
        return 0
    fi

    mkdir -p "${sidecar_dir}"
    local sidecar_python
    sidecar_python="$(command -v python3 || true)"
    if [ -z "${sidecar_python}" ]; then
        log_warn "python3 unavailable; cannot collect grouped sweep sidecars"
        return 0
    fi

    # 一个 combo/day 可能有多张配置（例如 Comm5 的 config_comm5_DATE 与
    # config_mock_DATE）。旧逻辑把 mock/comm5 当成日期，导致 DONE 全被误报 false。
    # 这里按文件名末尾的 8 位日期聚合，输出一行 combo/day，并对该日全部 config
    # 做确定性的组合 SHA256。
    "${sidecar_python}" - "${sweep_local_root}" "${sidecar_dir}" "${sweep_hdfs_output_root%/}" <<'PY'
import gzip
import hashlib
import json
import re
import sys
from pathlib import Path

root = Path(sys.argv[1])
sidecar = Path(sys.argv[2])
hdfs_root = sys.argv[3]
date_re = re.compile(r"(?:^|_)(\d{8})\.toml$")
groups = {}

for cfg in sorted(root.rglob("config_*.toml")):
    match = date_re.search(cfg.name)
    if not match:
        continue
    combo_dir = cfg.parent
    key = (combo_dir.relative_to(root).as_posix(), match.group(1))
    groups.setdefault(key, []).append(cfg)

# 即使某个 driver 清掉了 config，只要 DONE 还在，也不能从审计里消失。
for done in sorted(root.rglob("DONE_[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]")):
    key = (done.parent.relative_to(root).as_posix(), done.name[-8:])
    groups.setdefault(key, [])

manifest_lines = []
fingerprint_lines = [
    "combo_rel\tdate\tconfig_sha256\tconfig_bytes\tstdout_bytes\tstderr_bytes\tdone\thdfs_combo_path"
]
telemetry = []
sos5_phase_telemetry = []
failed_stderr = []

for (combo_rel, day), configs in sorted(groups.items()):
    combo_dir = root / combo_rel
    digest = hashlib.sha256()
    config_bytes = 0
    config_names = []
    for cfg in sorted(configs, key=lambda item: item.name):
        data = cfg.read_bytes()
        digest.update(cfg.name.encode("utf-8") + b"\0")
        digest.update(hashlib.sha256(data).digest())
        config_bytes += len(data)
        config_names.append(cfg.name)
    config_sha = digest.hexdigest()
    stdout_file = combo_dir / f"stdout_{day}.log"
    stderr_file = combo_dir / f"stderr_{day}.log"
    done = (combo_dir / f"DONE_{day}").is_file()
    stdout_bytes = stdout_file.stat().st_size if stdout_file.is_file() else 0
    stderr_bytes = stderr_file.stat().st_size if stderr_file.is_file() else 0
    hdfs_combo = f"{hdfs_root}/{combo_rel}"
    record = {
        "combo_rel": combo_rel,
        "date": day,
        "done": done,
        "config_sha256": config_sha,
        "config_bytes": config_bytes,
        "config_files": config_names,
        "stdout_bytes": stdout_bytes,
        "stderr_bytes": stderr_bytes,
        "hdfs_combo_path": hdfs_combo,
    }
    manifest_lines.append(json.dumps(record, ensure_ascii=False, sort_keys=True))
    fingerprint_lines.append(
        f"{combo_rel}\t{day}\t{config_sha}\t{config_bytes}\t{stdout_bytes}\t"
        f"{stderr_bytes}\t{str(done).lower()}\t{hdfs_combo}"
    )

    if stderr_file.is_file():
        lines = stderr_file.read_text(encoding="utf-8", errors="replace").splitlines()
        telemetry.extend(
            f"{combo_rel}/stderr_{day}.log\t{line}"
            for line in lines if "[SM31_TELEMETRY]" in line
        )
        sos5_phase_telemetry.extend(
            f"{combo_rel}/stderr_{day}.log\t{line}"
            for line in lines if "[SOS5_PHASE]" in line
        )
        if not done:
            failed_stderr.append(f"===== {combo_rel}/stderr_{day}.log =====")
            failed_stderr.extend(lines[-200:])

def write_gzip(name, lines):
    with gzip.open(sidecar / name, "wt", encoding="utf-8") as handle:
        if lines:
            handle.write("\n".join(lines) + "\n")

write_gzip("combo_manifest.jsonl.gz", manifest_lines)
write_gzip("config_fingerprints.tsv.gz", fingerprint_lines)
if telemetry:
    write_gzip("sm31_telemetry.log.gz", telemetry)
if sos5_phase_telemetry:
    write_gzip("sos5_phase_trace.log.gz", sos5_phase_telemetry)
if failed_stderr:
    write_gzip("failed_runner_stderr.log.gz", failed_stderr)
PY

    # config-matrix driver 额外给出精确 cell 级完成/缺源/失败清单。
    # 它们很小，直接压缩进本 job 的 sidecar，避免依赖已清理的计算节点 workdir。
    local audit_file
    for audit_file in completed_tasks.tsv skipped_tasks.tsv failed_tasks.tsv; do
        if [ -f "${sweep_local_root}/_audit/${audit_file}" ]; then
            gzip -c "${sweep_local_root}/_audit/${audit_file}" \
                > "${sidecar_dir}/${audit_file}.gz"
        fi
    done
    # Meta portfolio matrix 的审计清单直接位于 work root。
    for audit_file in completed_tasks.tsv missing_tasks.tsv; do
        if [ -f "${sweep_local_root}/${audit_file}" ]; then
            gzip -c "${sweep_local_root}/${audit_file}" \
                > "${sidecar_dir}/${audit_file}.gz"
        fi
    done

    if [ "${sweep_collect_full_configs:-false}" = "true" ]; then
        (
            cd "${sweep_local_root}" || exit 1
            find . -type f \( -name 'config_*.toml' -o -name 'DONE_*' \) -print0 \
                | sort -z \
                | tar --null -T - -czf "${sidecar_dir}/config_snapshots.tar.gz"
        ) || log_warn "failed to archive full config snapshots"
    fi
    log_info "sidecars collected: $(find "${sidecar_dir}" -maxdepth 1 -type f | wc -l) files, full_configs=${sweep_collect_full_configs:-false}"
}

on_exit() {
    local exit_code="$1"
    set +e
    mkdir -p "${job_local_log_dir}" 2>/dev/null || true
    if [ "${exit_code}" -eq 0 ]; then
        log_info "job finished successfully, exit_code=${exit_code}"
    else
        log_err "job finished with failure, exit_code=${exit_code}"
    fi

    log_info "start exit handler: workdir=${workdir}"

    collect_sweep_sidecars || log_warn "sidecar collection failed"

    local _st
    [ "${exit_code}" -eq 0 ] && _st="SUCCESS" || _st="FAILED"
    {
        printf '{\n'
        printf '  "job_id": "%s",\n'        "${SLURM_JOB_ID:-unknown}"
        printf '  "array_id": "%s",\n'      "${SLURM_ARRAY_TASK_ID:-unknown}"
        printf '  "task_name": "%s",\n'     "${slurm_task_name:-unknown}"
        printf '  "exit_code": %d,\n'       "${exit_code}"
        printf '  "status": "%s",\n'        "${_st}"
        printf '  "sweep_kind": "%s",\n'    "${sweep_kind:-unknown}"
        printf '  "sweep_strategy": "%s",\n' "${sweep_strategy:-unknown}"
        printf '  "start_date": "%s",\n'    "${cfg_start_date:-unknown}"
        printf '  "end_date": "%s",\n'      "${cfg_end_date:-unknown}"
        printf '  "pipeline_sha256": "%s",\n' "${cfg_sha256:-unknown}"
        printf '  "task_manifest_sha256": "%s",\n' "${task_manifest_sha256:-unknown}"
        printf '  "host": "%s",\n'          "$(hostname)"
        printf '  "finish_time": "%s",\n'   "$(date '+%Y-%m-%d %H:%M:%S')"
        printf '  "hdfs_output_root": "%s",\n' "${sweep_hdfs_output_root:-}"
        printf '  "sidecars_hdfs_dir": "%s/sidecars",\n' "${job_hdfs_log_dir:-}"
        printf '  "full_config_snapshots": %s,\n' "${sweep_collect_full_configs:-false}"
        printf '  "skip_hdfs_precheck": %s\n' "${sweep_skip_hdfs_precheck:-false}"
        printf '}\n'
    } > "${job_status_file}" 2>/dev/null || true
    log_info "status.json: status=${_st}, kind=${sweep_kind}, strategy=${sweep_strategy}, dates=${cfg_start_date}~${cfg_end_date}"

    log_info "uploading logs to HDFS: ${job_hdfs_log_dir}"
    /opt/hadoop/bin/hadoop fs -mkdir -p "${job_hdfs_log_dir}"
    if [ -d "${job_local_log_dir}" ]; then
        files=()
        [ -f "${job_trace_log}" ]   && files+=("${job_trace_log}")
        [ -f "${job_status_file}" ] && files+=("${job_status_file}")
        for f in "${job_local_log_dir}"/stdout.log "${job_local_log_dir}"/stderr.log; do
            [ -f "${f}" ] && files+=("${f}")
        done
    if [ -d "${job_local_log_dir}/sidecars" ]; then
            /opt/hadoop/bin/hadoop fs -mkdir -p "${job_hdfs_log_dir}/sidecars"
            sidecar_files=()
            while IFS= read -r -d '' f; do sidecar_files+=("${f}"); done \
                < <(find "${job_local_log_dir}/sidecars" -maxdepth 1 -type f -print0)
            if [ ${#sidecar_files[@]} -gt 0 ]; then
                /opt/hadoop/bin/hadoop fs -put -f "${sidecar_files[@]}" "${job_hdfs_log_dir}/sidecars/"
                log_info "uploaded ${#sidecar_files[@]} sidecar files -> ${job_hdfs_log_dir}/sidecars/"
            fi
        fi
        if [ ${#files[@]} -gt 0 ]; then
            /opt/hadoop/bin/hadoop fs -put -f "${files[@]}" "${job_hdfs_log_dir}/"
            log_info "uploaded ${#files[@]} log files -> ${job_hdfs_log_dir}"
        fi
    fi

    if [[ -n "${workdir:-}" && -n "${base_dir:-}" && "${workdir}" == "${base_dir}/lyt_d/"* ]]; then
        rm -rf "${workdir}"
        log_info "cleanup done: ${workdir}"
    else
        log_err "cleanup skipped (unsafe path): workdir=${workdir}"
    fi
}
trap 'on_exit "$?"' EXIT

mkdir -p "${job_local_log_dir}"
touch "${job_trace_log}"
log_info "local log dir=${job_local_log_dir}"
log_info "hdfs log dir=${job_hdfs_log_dir}"
log_info "runtime paths: base_dir=${base_dir}, workdir=${workdir}, task_dir=${task_dir}"

# ── 1) 从 HDFS 下载整个 task 目录（run.sbatch + 所有二进制 + dylib） ──────────
# 由 run_one_task.py 上传整个 ${hdfs_path}/${slurm_task_name}/ 的内容到 HDFS
# 这里直接拉下来，不硬编码文件名（sweep kinds 之间文件清单不同）。
log_info "downloading task artifacts from HDFS: ${hdfs_path}/${slurm_task_name}/"
/opt/hadoop/bin/hadoop fs -get -f "${hdfs_path}/${slurm_task_name}/"* "${task_dir}/" 2>&1 | tail -20 || {
    log_err "failed to download task artifacts"
    exit 1
}
log_info "task_dir contents:"
ls -lah "${task_dir}/" | head -30
if [ -f "${task_dir}/RUN_MANIFEST.json" ]; then
    task_manifest_sha256="$(sha256sum "${task_dir}/RUN_MANIFEST.json" | awk '{print $1}')"
    log_info "task manifest sha256=${task_manifest_sha256}"
fi

# ── 2) 从 HDFS 下载加密 config（configenc），解密还原 config/ 目录 ────────────
log_info "downloading configenc from HDFS: ${hdfs_path}/${slurm_task_name}/configenc"
/opt/hadoop/bin/hadoop fs -get -f "${hdfs_path}/${slurm_task_name}/configenc" "${task_dir}/configenc"

log_info "decrypting configenc -> ${task_dir}/config/"
openssl enc -d -aes-256-cbc -pbkdf2 -in "${task_dir}/configenc" -pass env:CP \
    | tar xzf - -C "${task_dir}/"
log_info "config/ decrypted, files:"
ls -lah "${task_dir}/config/" || true

# ── 3) 选择子任务 config（日期切片）──────────────────────────────────────────
# 配置布局：每个策略一个子目录，pipeline 编号从 0 开始独立编。
#   config/${FB_STRATEGY}/pipeline_${SLURM_ARRAY_TASK_ID}.toml
# 提交端用 env `FB_STRATEGY=comm2`（或 sos5/tm5/sm1/...）选择策略。
# `--run` 的不可变 staging 使用根路径；显式 FB_STRATEGY 使用 namespaced 路径。
# 一旦设置 FB_STRATEGY，目录名拼错必须立即失败，绝不回退到别的实验配置。
cfg_idx=${SLURM_ARRAY_TASK_ID}
fb_strat="${FB_STRATEGY:-}"
if [ -n "${fb_strat}" ]; then
    if [ ! -d "${task_dir}/config/${fb_strat}" ]; then
        log_err "FB_STRATEGY='${fb_strat}' does not exist: ${task_dir}/config/${fb_strat}"
        exit 1
    fi
    cfg_file="${task_dir}/config/${fb_strat}/pipeline_${cfg_idx}.toml"
else
    cfg_file="${task_dir}/config/pipeline_${cfg_idx}.toml"
fi
log_info "FB_STRATEGY=${fb_strat:-<unset>}, cfg_file=${cfg_file}"
if [ ! -f "${cfg_file}" ]; then
    log_err "missing per-task config: ${cfg_file}"
    log_info "listing config dir:"
    ls -lah "${task_dir}/config/" || true
    if [ -n "${fb_strat}" ]; then
        log_info "listing strategy dir:"
        ls -lah "${task_dir}/config/${fb_strat}/" 2>/dev/null || true
    fi
    exit 1
fi
cfg_sha256="$(sha256sum "${cfg_file}" | awk '{print $1}')"
log_info "pipeline sha256=${cfg_sha256}"

# ── 4) 激活 python 环境（parse pipeline.toml with tomllib）───────────────────
# run_one_task.py 通过 --auto-upload-python-env 传 py311 包；
# sweep task 本身不需要 python 跑逻辑，但要用 tomllib 解析 pipeline。
# 容错：如果 py311 未加载，用系统 python3（≥3.11 的有 tomllib）。
export PATH="${PATH:-}"
if [ -n "${USE_PACKED_PY_ENV:-}" ] && [ -f "${task_dir}/py311/bin/python3" ]; then
    PY="${task_dir}/py311/bin/python3"
else
    PY=$(command -v python3 || true)
fi
if [ -z "${PY}" ]; then
    log_err "no python3 available to parse pipeline.toml"
    exit 1
fi
log_info "python3=${PY} ($(${PY} --version 2>&1))"

# 用一个 here-doc 一次性把所有 sweep 字段 dump 成 shell 可以 eval 的赋值。
# 不用 tomllib（节点 Python 可能 <3.11）；pipeline.toml 是我们自己维护的平坦格式，
# 一个 [sweep] 表 + 少量顶层字段，用 regex 即可稳定解析。
parse_out=$("${PY}" <<PY
import re, shlex, sys

path = "${cfg_file}"
with open(path, "r", encoding="utf-8") as f:
    text = f.read()

# 去注释（# 开头到行尾；不在字符串内的简单处理：我们的 pipeline.toml 不会在字符串里放 #）
def strip_comment(line):
    in_str = False
    out = []
    for ch in line:
        if ch == '"':
            in_str = not in_str
            out.append(ch)
        elif ch == '#' and not in_str:
            break
        else:
            out.append(ch)
    return "".join(out)

current_table = ""
fields = {}
for raw in text.splitlines():
    line = strip_comment(raw).strip()
    if not line:
        continue
    m = re.match(r'^\[([^\]]+)\]$', line)
    if m:
        current_table = m.group(1).strip()
        continue
    m = re.match(r'^([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(.+?)\s*$', line)
    if not m:
        continue
    key, val = m.group(1), m.group(2)
    # 去字符串两端引号
    mm = re.match(r'^"(.*)"$', val)
    if mm:
        val = mm.group(1)
    full_key = f"{current_table}.{key}" if current_table else key
    fields[full_key] = val

def g(k, default=""):
    return fields.get(k, default)

out = {
    "cfg_start_date":            g("start_date"),
    "cfg_end_date":              g("end_date"),
    "cfg_days":                  g("days", ""),
    "sweep_kind":                g("sweep.kind"),
    "sweep_strategy":            g("sweep.strategy"),
    "sweep_base_config":         g("sweep.base_config"),
    "sweep_base_config_dir":     g("sweep.base_config_dir"),
    "sweep_dylib":               g("sweep.dylib"),
    "sweep_jobs":                g("sweep.jobs", "4"),
    "sweep_hdfs_output_root":    g("sweep.hdfs_output_root"),
    "sweep_watcher":             g("sweep.watcher"),
    "sweep_watcher_base_config": g("sweep.watcher_base_config"),
    "sweep_watcher_base_config_dir": g("sweep.watcher_base_config_dir"),
    "sweep_watcher_dylib":       g("sweep.watcher_dylib"),
    "sweep_enable_phases":       g("sweep.enable_phases", "true"),
    "sweep_binary":              g("sweep.binary", ""),
    "sweep_enable_xs":           g("sweep.enable_xs", "false"),
    "sweep_xs_pnl_base":         g("sweep.xs_pnl_base", ""),
    "sweep_sigs":                g("sweep.sigs", ""),
    "sweep_ewma_recipes":        g("sweep.ewma_recipes", "20:3"),
    "sweep_phase_threshold_recipes": g("sweep.phase_threshold_recipes", "fixed"),
    "sweep_init_cash_values_cny": g("sweep.init_cash_values_cny", "40000000"),
    "sweep_phase_high_multipliers": g(
        "sweep.phase_high_multipliers",
        g("sweep.phase_high_multiplier", "2"),
    ),
    "sweep_phase_default_reference_notional": g("sweep.phase_default_reference_notional", "5000000"),
    "sweep_phase_mid_jump_reject_rate": g("sweep.phase_mid_jump_reject_rate", "0.11"),
    "sweep_phase_max_spread_bp": g("sweep.phase_max_spread_bp", "100"),
    "sweep_phase_trace":         g("sweep.phase_trace", "false"),
    "sweep_signal_variant_suffix": g("sweep.signal_variant_suffix", ""),
    "sweep_sweep_configs":        g("sweep.sweep_configs", ""),
    "sweep_cases":               g("sweep.cases", ""),
    "sweep_allocation_solution": g("sweep.allocation_solution", ""),
    "sweep_config_root":         g("sweep.config_root", ""),
    "sweep_sos5_dylib":          g("sweep.sos5_dylib", ""),
    "sweep_sm1_dylib":           g("sweep.sm1_dylib", ""),
    "sweep_tm5_dylib":           g("sweep.tm5_dylib", ""),
    "sweep_case_shards":         g("sweep.case_shards", "1"),
    "sweep_case_shard_index":    g("sweep.case_shard_index", "0"),
    "sweep_collect_full_configs": g("sweep.collect_full_configs", "false"),
    "sweep_skip_hdfs_precheck":  g("sweep.skip_hdfs_precheck", "false"),
}
for k, v in out.items():
    print(f"{k}={shlex.quote(str(v))}")
PY
)
if [ -z "${parse_out}" ]; then
    log_err "failed to parse ${cfg_file}"
    exit 1
fi
eval "${parse_out}"

log_info "parsed sweep config: kind=${sweep_kind}, strategy=${sweep_strategy}"
log_info "  base_config=${sweep_base_config}, dylib=${sweep_dylib}, jobs=${sweep_jobs}"
log_info "  hdfs_output_root=${sweep_hdfs_output_root}"
log_info "  date range = ${cfg_start_date} ~ ${cfg_end_date}"
log_info "  ewma_recipes=${sweep_ewma_recipes}"
log_info "  phase_recipes=${sweep_phase_threshold_recipes}, init_cash_values_cny=${sweep_init_cash_values_cny}, high_multipliers=${sweep_phase_high_multipliers}"
log_info "  signal_variant_suffix=${sweep_signal_variant_suffix:-<none>}"
log_info "  sweep_configs=${sweep_sweep_configs:-<none>}"
log_info "  case_shard=${sweep_case_shard_index:-0}/${sweep_case_shards:-1}"
log_info "  skip_hdfs_precheck=${sweep_skip_hdfs_precheck}"

case "${sweep_skip_hdfs_precheck}" in
    true|false) ;;
    *) log_err "sweep.skip_hdfs_precheck must be true or false, got '${sweep_skip_hdfs_precheck}'"; exit 1 ;;
esac
# 必填字段校验
# multi/config_matrix/meta_portfolio_matrix 模式不需要 sweep_strategy / sweep_base_config / sweep_dylib，
# driver 自己解析 pipeline 和随 run 加密上传的精确资产。
if [ "${sweep_kind}" = "meta_portfolio_matrix" ]; then
    required_vars="sweep_kind sweep_hdfs_output_root cfg_start_date cfg_end_date sweep_cases sweep_allocation_solution sweep_config_root sweep_sos5_dylib sweep_sm1_dylib sweep_tm5_dylib"
elif [ "${sweep_kind}" = "sos5_phase" ]; then
    required_vars="sweep_kind sweep_strategy sweep_base_config_dir sweep_dylib sweep_hdfs_output_root cfg_start_date cfg_end_date sweep_watcher sweep_watcher_base_config_dir sweep_watcher_dylib sweep_sigs sweep_phase_threshold_recipes sweep_init_cash_values_cny"
elif [ "${sweep_kind}" = "multi" ] || [ "${sweep_kind}" = "config_matrix" ]; then
    required_vars="sweep_kind sweep_hdfs_output_root cfg_start_date cfg_end_date"
else
    required_vars="sweep_kind sweep_strategy sweep_base_config sweep_dylib sweep_hdfs_output_root cfg_start_date cfg_end_date"
fi
for var in $required_vars; do
    if [ -z "${!var}" ]; then
        log_err "pipeline.toml missing required field: ${var}"
        exit 1
    fi
done

case "${sweep_kind}" in
    comm|comm3|comm_maker1|comm4|sos|sos5_phase|takermaker|signalmaker|lowfrequency|multi|fillprob|config_matrix|meta_portfolio_matrix) ;;
    *) log_err "unknown sweep.kind='${sweep_kind}'. Must be comm|comm3|comm_maker1|comm4|sos|sos5_phase|takermaker|signalmaker|lowfrequency|multi|fillprob|config_matrix|meta_portfolio_matrix."; exit 1 ;;
esac

# ── 5) 准备运行环境 ──────────────────────────────────────────────────────────
# kind → driver binary 映射(大部分 kind 跟 binary 同名;multi 例外因 binary 是 run_multistrategy)
case "${sweep_kind}" in
    multi) sweep_bin_name="run_multistrategy" ;;
    config_matrix) sweep_bin_name="run_config_matrix" ;;
    meta_portfolio_matrix) sweep_bin_name="run_meta_portfolio_matrix" ;;
    *)     sweep_bin_name="run_${sweep_kind}" ;;
esac
# binary 覆盖:每臂独立 binary(避免共享 run_comm4 撞车),向后兼容(空 → run_${kind})
if [ -n "${sweep_binary:-}" ]; then sweep_bin_name="${sweep_binary}"; fi
sweep_bin="./${sweep_bin_name}"
if [ ! -x "${task_dir}/${sweep_bin_name}" ]; then
    chmod +x "${task_dir}/${sweep_bin_name}" 2>/dev/null || true
fi
if [ ! -f "${task_dir}/${sweep_bin_name}" ]; then
    log_err "sweep binary missing: ${task_dir}/${sweep_bin_name}"
    log_err "did you copy target/release/${sweep_bin_name} into the task dir before submit?"
    exit 1
fi
if [ "${sweep_kind}" = "meta_portfolio_matrix" ]; then
    runner_bin_name="future_backtest_meta_runner"
fi
chmod +x "${task_dir}/${runner_bin_name}" 2>/dev/null || true
if [ ! -f "${task_dir}/${runner_bin_name}" ]; then
    log_err "runner binary missing: ${task_dir}/${runner_bin_name}"
    exit 1
fi

# 所有 .so 要能被 runner 子进程找到
export LD_LIBRARY_PATH="${task_dir}:${JAVA_HOME}/lib/server:${HADOOP_HOME}/lib/native:${LD_LIBRARY_PATH:-}"
log_info "LD_LIBRARY_PATH=${LD_LIBRARY_PATH}"

# sweep 模式不用 FB_* env vars — sweep driver 自己 per-combo 覆盖 TOML
unset FB_START_DAY FB_END_DAY FB_OUTPUT_DIR FB_HDFS_OUTPUT_DIR FB_USE_HDFS_OUTPUT FB_USE_HDFS_DATA

# ── 6) 运行 sweep driver ────────────────────────────────────────────────────
cd "${task_dir}"

days_arg="${cfg_days:-${cfg_start_date}-${cfg_end_date}}"

if [ "${sweep_kind}" = "meta_portfolio_matrix" ]; then
    for required_file in "${sweep_cases}" "${sweep_allocation_solution}" "${sweep_config_root}" "${sweep_sos5_dylib}" "${sweep_sm1_dylib}" "${sweep_tm5_dylib}"; do
        if [ ! -e "${required_file}" ]; then
            log_err "Meta portfolio input missing: ${required_file}"
            exit 1
        fi
    done
    cmd=("${sweep_bin}"
         --cases       "${sweep_cases}"
         --allocation-solution "${sweep_allocation_solution}"
         --days        "${days_arg}"
         --config-root "${sweep_config_root}"
         --work-root   "./sweep_output_local"
         --output-root "${sweep_hdfs_output_root}"
         --runner      "./${runner_bin_name}"
         --sos5-dylib  "./${sweep_sos5_dylib}"
         --sm1-dylib   "./${sweep_sm1_dylib}"
         --tm5-dylib   "./${sweep_tm5_dylib}"
         --jobs        "${sweep_jobs}"
         --case-shards "${sweep_case_shards}"
         --case-shard-index "${sweep_case_shard_index}"
         --hdfs-output)
elif [ "${sweep_kind}" = "multi" ] || [ "${sweep_kind}" = "config_matrix" ]; then
    # multi/config-matrix sweep:driver 自己读取完整 pipeline.toml。
    cmd=("${sweep_bin}"
         --pipeline    "${cfg_file}"
         --runner      "./${runner_bin_name}"
         --days        "${days_arg}"
         --output      "./sweep_output_local"
         --jobs        "${sweep_jobs}"
         --use-hdfs
         --hdfs-output-root "${sweep_hdfs_output_root}")

elif [ "${sweep_kind}" = "sos5_phase" ]; then
    for required_dir in "${sweep_base_config_dir}" "${sweep_watcher_base_config_dir}"; do
        if [ ! -d "${required_dir}" ]; then
            log_err "SoS5 phase config directory missing: ${required_dir}"
            exit 1
        fi
    done
    for required_file in "${sweep_dylib}" "${sweep_watcher_dylib}"; do
        if [ ! -f "${required_file}" ]; then
            log_err "SoS5 phase dylib missing: ${required_file}"
            exit 1
        fi
    done
    case "${sweep_phase_trace}" in
        true|false) ;;
        *) log_err "sweep.phase_trace must be true or false, got '${sweep_phase_trace}'"; exit 1 ;;
    esac
    cmd=("${sweep_bin}"
         --base-config-dir "${sweep_base_config_dir}"
         --watcher-base-config-dir "${sweep_watcher_base_config_dir}"
         --runner      "./${runner_bin_name}"
         --dylib       "./${sweep_dylib}"
         --watcher-dylib "./${sweep_watcher_dylib}"
         --strategy    "${sweep_strategy}"
         --watcher     "${sweep_watcher}"
         --signals     "${sweep_sigs}"
         --days        "${days_arg}"
         --phase-threshold-recipes "${sweep_phase_threshold_recipes}"
         --init-cash-values-cny "${sweep_init_cash_values_cny}"
         --phase-high-multipliers "${sweep_phase_high_multipliers}"
         --phase-default-reference-notional "${sweep_phase_default_reference_notional}"
         --phase-mid-jump-reject-rate "${sweep_phase_mid_jump_reject_rate}"
         --phase-max-spread-bp "${sweep_phase_max_spread_bp}"
         --output      "./sweep_output_local"
         --jobs        "${sweep_jobs}"
         --use-hdfs
         --hdfs-output-root "${sweep_hdfs_output_root}")
    if [ "${sweep_phase_trace}" = "true" ]; then
        cmd+=(--phase-trace)
    fi

elif [ "${sweep_kind}" = "fillprob" ]; then
    # fillprob sweep: cell matrix(side × dist × rank)硬编码在 Rust 源里,不传 --strategy
    cmd=("${sweep_bin}"
         --base-config "${sweep_base_config}"
         --runner      "./${runner_bin_name}"
         --dylib       "./${sweep_dylib}"
         --days        "${days_arg}"
         --output      "./sweep_output_local"
         --jobs        "${sweep_jobs}"
         --use-hdfs
         --hdfs-output-root "${sweep_hdfs_output_root}")
else
    cmd=("${sweep_bin}"
         --base-config "${sweep_base_config}"
         --runner      "./${runner_bin_name}"
         --dylib       "./${sweep_dylib}"
         --strategy    "${sweep_strategy}"
         --days        "${days_arg}"
         --output      "./sweep_output_local"
         --jobs        "${sweep_jobs}"
         --use-hdfs
         --hdfs-output-root "${sweep_hdfs_output_root}")

    # Generic sweep drivers accept encrypted run-local grid overlays. Keep the
    # canonical strategy configs unchanged; later overlays override earlier
    # driver-only sweep fields.
    if [ -n "${sweep_sweep_configs:-}" ]; then
        case "${sweep_bin_name}" in
            run_takermaker|run_signalmaker|run_sm3_1|run_sos) ;;
            *) log_err "sweep.sweep_configs is unsupported for ${sweep_bin_name}"; exit 1 ;;
        esac
        IFS=',' read -r -a sweep_config_items <<< "${sweep_sweep_configs}"
        for sweep_config in "${sweep_config_items[@]}"; do
            if [ -z "${sweep_config}" ]; then
                log_err "sweep.sweep_configs contains an empty path"
                exit 1
            fi
            case "${sweep_config}" in
                /*) sweep_config_check="${sweep_config}" ;;
                *)  sweep_config_check="${task_dir}/${sweep_config}" ;;
            esac
            if [ ! -f "${sweep_config_check}" ]; then
                log_err "sweep config missing: ${sweep_config_check}"
                exit 1
            fi
            cmd+=(--sweep-config "${sweep_config}")
        done
    fi

    # SoS / comm4 kind 追加 watcher 三个参数
    if [ "${sweep_kind}" = "sos" ] || [ "${sweep_kind}" = "comm4" ]; then
        if [ -z "${sweep_watcher}" ] || [ -z "${sweep_watcher_base_config}" ] || [ -z "${sweep_watcher_dylib}" ]; then
            log_err "sweep.kind='${sweep_kind}' requires watcher / watcher_base_config / watcher_dylib in pipeline.toml"
            exit 1
        fi
        if [ ! -f "${task_dir}/${sweep_watcher_dylib}" ]; then
            log_err "watcher dylib missing: ${task_dir}/${sweep_watcher_dylib}"
            exit 1
        fi
        cmd+=(--watcher             "${sweep_watcher}"
              --watcher-base-config "${sweep_watcher_base_config}"
              --watcher-dylib       "./${sweep_watcher_dylib}")
    fi
    # comm4: phase 开关(--enable-phases {true|false})
    if [ "${sweep_kind}" = "comm4" ]; then
        cmd+=(--enable-phases "${sweep_enable_phases}")
    fi
    # comm5(kind=comm4 + binary=run_comm5):XS 截面层 + 特征表(仅当 sweep.enable_xs=true 激活;向后兼容)
    if [ "${sweep_enable_xs}" = "true" ]; then
        if [ -z "${sweep_xs_pnl_base:-}" ]; then
            log_err "sweep.enable_xs=true requires sweep.xs_pnl_base in pipeline.toml"
            exit 1
        fi
        # xs_pnl_base 若是相对路径,拼成 task_dir 绝对路径 —— combo 子进程(策略 fs::read)
        # 与 preflight(driver CWD)工作目录不同,相对路径会 No such file;绝对路径两处都能读。
        case "${sweep_xs_pnl_base}" in
            /*) xs_base_abs="${sweep_xs_pnl_base}" ;;
            *)  xs_base_abs="${task_dir}/${sweep_xs_pnl_base}" ;;
        esac
        if [ ! -d "${xs_base_abs}" ]; then
            log_err "xs_pnl_base 目录不存在于计算节点: ${xs_base_abs}(表未随 task 上传?)"
            exit 1
        fi
        cmd+=(--enable-xs true --xs-pnl-base "${xs_base_abs}")
    fi
    # --sigs: 只有明确支持的当前通用 driver 才能接收；其他 binary fail-closed。
    if [ -n "${sweep_sigs:-}" ]; then
        case "${sweep_bin_name}" in
            run_comm3|run_comm5|run_comm_mock|run_takermaker|run_signalmaker|run_sm3_1|run_sos)
                cmd+=(--sigs "${sweep_sigs}") ;;
            *) log_err "sweep.sigs is unsupported for ${sweep_bin_name}"; exit 1 ;;
        esac
    fi

    # Comm5 的 EWMA 配方由 pipeline 明确冻结，不再依赖 driver 默认值。
    if [ "${sweep_bin_name}" = "run_comm5" ]; then
        if [ -z "${sweep_ewma_recipes:-}" ]; then
            log_err "run_comm5 requires non-empty sweep.ewma_recipes"
            exit 1
        fi
        cmd+=(--ewma-recipes "${sweep_ewma_recipes}")
    fi

    # 字符串信号变体:基础数值信号仍用于参数表/XS，suffix 只改变数据目录与事件 key。
    if [ -n "${sweep_signal_variant_suffix:-}" ]; then
        case "${sweep_bin_name}" in
            run_comm5) cmd+=(--signal-variant-suffix "${sweep_signal_variant_suffix}") ;;
            *) log_err "sweep.signal_variant_suffix is unsupported for ${sweep_bin_name}"; exit 1 ;;
        esac
    fi

    # 仅显式冻结了精确日期集合的 SM/SM3-1 大矩阵可跳过 HDFS metadata 预检。
    # 默认 false，其他 sweep 行为不变；不支持该参数的 driver fail-closed。
    if [ "${sweep_skip_hdfs_precheck}" = "true" ]; then
        case "${sweep_bin_name}" in
            run_takermaker|run_signalmaker|run_sm3_1|run_sos) cmd+=(--skip-hdfs-precheck) ;;
            *) log_err "sweep.skip_hdfs_precheck=true is unsupported for ${sweep_bin_name}"; exit 1 ;;
        esac
    fi
fi

# 打印完整命令
log_info "sweep command: ${cmd[*]}"

_exit_code=0
"${cmd[@]}" \
    > "${job_local_log_dir}/stdout.log" \
    2> "${job_local_log_dir}/stderr.log" \
    || _exit_code=$?

if [ "${_exit_code}" -ne 0 ]; then
    log_err "sweep driver failed with exit_code=${_exit_code}"
    log_err "=== last 80 lines of stderr ==="
    tail -80 "${job_local_log_dir}/stderr.log" | while IFS= read -r line; do
        log_err "  ${line}"
    done
    exit "${_exit_code}"
fi
log_info "sweep driver finished successfully"
