/*******************pe12-2a.h*********************/
#define METRIC 0     //公制
#define US 1         //美制
#define USE_MODE 2    //之前使用的模式

void set_mode(int *mode);
void get_info(int mode,float *pdistance,float *pfuel);
void show_info(int mode,float distance, float fuel);