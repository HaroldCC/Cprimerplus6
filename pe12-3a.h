/*******************pe12-2a.h*********************/
#define METRIC 0     //����
#define US 1         //����
#define USE_MODE 2    //֮ǰʹ�õ�ģʽ

void set_mode(int *mode);
void get_info(int mode,float *pdistance,float *pfuel);
void show_info(int mode,float distance, float fuel);