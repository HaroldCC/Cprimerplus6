/*******************pe12-2a.c********************/
#include<stdio.h>
#include"pe12-3a.h"

void set_mode(int *mode)
{

	if (*mode != METRIC && *mode != US)         //容错处理，当输入不正确模式，提示消息并使用上次输入的正确模式
	{
		printf("不存在的模式，将使用模式%d", *mode);
		printf("将使用之前输入的正确模式。\n");
		*mode = USE_MODE;
	}
}
void get_info(int mode,float *pdistance,float *pfuel)
{
	if (mode == METRIC)
	{
		printf("输入距离（单位：千米）：");
		scanf_s("%f", pdistance);
		printf("输入油耗（单位：升）：");
		scanf_s("%f", pfuel);
	}
	else
	{
		printf("输入距离（单位：英里）：");
		scanf_s("%f", pdistance);
		printf("输入油耗（单位：加仑）：");
		scanf_s("%f", pfuel);
	}
}
void show_info(int mode,float distance,float fuel)
{
	if (mode == METRIC)
	{
		printf("每百公里油耗：%.2f", fuel / (distance / 100));
		puts("升/100公里");
	}
	else
	{
		printf("每英里油耗：%.2f", distance / fuel);
		puts("英里/加仑");
	}
}