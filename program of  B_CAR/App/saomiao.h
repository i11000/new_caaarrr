#ifndef saomiao_h
#define saomiao_h
void congzhongjianwangliangbian();
void lkcongzhongjiansaomiao();
void pianchachuli();
void lkshaomiao();
//void huaxian(int x1,int y1,int x2,int y2)
extern int rushiziy,rushizix,rushiziy2,rushizix2;
extern char cur_L_real_rest_flag;     //左圆环准确复位识别标志
extern char cur_R_real_rest_flag;     //左圆环准确复位识别标志
extern char cur_R_ready_flag;
extern char cur_L_ready_flag;
extern char cur_R_real_delay_flag;    //右圆环准确弛懈识别标志
extern char cur_R_ready_rest_flag;    //右圆环预判断复位变量
extern char street_len;             //直道长度
extern char cur_L_real_delay_flag;    //右圆环准确弛懈识别标志

#endif