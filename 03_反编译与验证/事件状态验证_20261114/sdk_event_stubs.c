#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
static char trace[65536];static int cursor=0;
static void record(const char*n){int v=snprintf(trace+cursor,sizeof(trace)-cursor,"%s\n",n);if(v>0&&cursor+v<sizeof(trace))cursor+=v;}
const char* probe_trace(void){return trace;}void probe_reset(void){cursor=0;trace[0]=0;}
double probe_now=1000,probe_position=0,probe_cost=0;int probe_start=1,probe_end=0,probe_depth_rc=-1,probe_order_rc=0;
unsigned char probe_depth_data[232];
void fb_ctx_log_info(void){}void fb_ctx_log_warn(void){}void fb_ctx_log_debug(void){}
int fb_ctx_is_trade_start(void*c,int n){record("is_trade_start");return probe_start;}
int fb_ctx_is_trade_end(void*c,int n){record("is_trade_end");return probe_end;}
int fb_ctx_is_night(void*c){record("is_night");return 0;}
double fb_ctx_time_sec(void*c){record("time_sec");return probe_now;}
double fb_ctx_ts_ms(void*c){record("ts_ms");return probe_now*1000;}
double fb_ctx_inst_start_time_sec(void*c){record("inst_start_time_sec");return 0;}
double fb_ctx_first_open_time_sec(void*c){record("first_open_time_sec");return 0;}
int fb_ctx_depth(void*c,const char*s,void*out){record("depth");memcpy(out,probe_depth_data,232);return probe_depth_rc;}
int fb_ctx_position(void*c,const char*s,double*out){record("position");out[0]=probe_cost;out[1]=probe_position;return 0;}
#define VAL(n,v) double fb_ctx_##n(void*c,const char*s){record(#n);return (v);}
VAL(position_holding_secs,1) VAL(contract_mult,10) VAL(price_step,0.2) VAL(vol_step,1) VAL(spread_bp,1) VAL(fee_bp,0)
int fb_ctx_all_in(void*c,int n,int m){record("all_in");return probe_order_rc;}
int probe_cancel_rc=0;
int fb_ctx_cancel_all(void*c){record("cancel_all");return probe_cancel_rc;}
int fb_ctx_cancel_order(void*c,const char*s){record("cancel_order");return probe_cancel_rc;}
int fb_ctx_cancel_by_pending_ts(void*c){record("cancel_by_pending_ts");return probe_cancel_rc;}
unsigned char probe_last_order[72];
int fb_ctx_place_order_iap(void*c,void*r){record("place_order_iap");memcpy(probe_last_order,r,72);return probe_order_rc;}
int fb_ctx_place_order_ioc(void*c,void*r){record("place_order_ioc");return probe_order_rc;}
int fb_ctx_place_order_iap_with_target(void*c,void*r){record("place_order_iap_with_target");return probe_order_rc;}
int probe_margin_block=0,probe_impact_block=0;
int fb_ctx_margin_filter(void*c,int has,int action){record("margin_filter");return probe_margin_block?4:(has?action:4);}
int fb_ctx_impact_block_check(void*c,int has,int action){record("impact_block_check");return probe_impact_block?4:(has?action:4);}
int fb_ctx_is_should_lock(void*c,const char*s){record("is_should_lock");return 0;}
int fb_ctx_liquidity_consumption(void*c){record("liquidity_consumption");return 0;}
int probe_pending_buy=0,probe_pending_sell=0;
int fb_ctx_pending_count(void*c,const char*s,int*b,int*a){record("pending_count");*b=probe_pending_buy;*a=probe_pending_sell;return 0;}
long fb_ctx_pending_orders(void*c,const char*s,void*out,long n){record("pending_orders");return 0;}
long fb_ctx_cancel_pending_ids(void*c,const char*s,void*out,long n){record("cancel_pending_ids");return 0;}
long fb_ctx_last_error(void*c,char*out,long n){record("last_error");if(n)out[0]=0;return 0;}
void fb_ctx_publish(void*c,const char*k,double v){char b[256];snprintf(b,sizeof(b),"publish:%s=%.17g",k,v);record(b);}
void fb_ctx_set_not_lock(void*c,const char*s){record("set_not_lock");}
#define ABORT(n) void fb_ctx_##n(void){fprintf(stderr,"unsupported SDK boundary: " #n "\n");abort();}
ABORT(get_para) ABORT(trade_codes) ABORT(custom_config)  
#include <signal.h>
#include <execinfo.h>
#include <unistd.h>
static void fault(int sig){void *a[24];int n=backtrace(a,24);write(2,trace,cursor);backtrace_symbols_fd(a,n,2);_exit(128+sig);}
void probe_fault_handler(void){signal(SIGSEGV,fault);signal(SIGABRT,fault);}

int probe_published_rc=0,probe_meta_rc=0,probe_key_mask=-1;double probe_key_values[4]={11,12,13,14}; double probe_published_value=0; unsigned char probe_meta_data[104];
int fb_ctx_get_published(void*c,const char*s,const char*a,const char*k,double*out){char b[256];snprintf(b,sizeof(b),"get_published:%s",k);record(b);*out=probe_published_value;if(probe_key_mask>=0){const char*keys[]={"threshold_long_open","threshold_long_close","threshold_short_open","threshold_short_close"};for(int i=0;i<4;i++)if(strcmp(k,keys[i])==0){*out=probe_key_values[i];return (probe_key_mask>>i)&1;}}return probe_published_rc;}
int fb_ctx_meta_account(void*c,void*out){record("meta_account");memcpy(out,probe_meta_data,104);return probe_meta_rc;}
long fb_ctx_current_inst(void*c,char*out,long n){record("current_inst");if(n>=2)memcpy(out,"IF",2);return 2;}
int fb_ctx_contract_rank(void*c){record("contract_rank");return 1;}

double probe_free_cash=1000000;double fb_ctx_free_cash(void*c){record("free_cash");return probe_free_cash;}

double probe_mid_price=100;double fb_ctx_mid_price(void*c,const char*s){record("mid_price");return probe_mid_price;}
