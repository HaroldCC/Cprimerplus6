/*******************pe12-2a.c********************/
#include<stdio.h>
#include"pe12-3a.h"

void set_mode(int *mode)
{

	if (*mode != METRIC && *mode != US)         //�ݴ��������벻��ȷģʽ����ʾ��Ϣ��ʹ���ϴ��������ȷģʽ
	{
		printf("�����ڵ�ģʽ����ʹ��ģʽ%d", *mode);
		printf("��ʹ��֮ǰ�������ȷģʽ��\n");
		*mode = USE_MODE;
	}
}
void get_info(int mode,float *pdistance,float *pfuel)
{
	if (mode == METRIC)
	{
		printf("������루��λ��ǧ�ף���");
		scanf_s("%f", pdistance);
		printf("�����ͺģ���λ��������");
		scanf_s("%f", pfuel);
	}
	else
	{
		printf("������루��λ��Ӣ���");
		scanf_s("%f", pdistance);
		printf("�����ͺģ���λ�����أ���");
		scanf_s("%f", pfuel);
	}
}
void show_info(int mode,float distance,float fuel)
{
	if (mode == METRIC)
	{
		printf("ÿ�ٹ����ͺģ�%.2f", fuel / (distance / 100));
		puts("��/100����");
	}
	else
	{
		printf("ÿӢ���ͺģ�%.2f", distance / fuel);
		puts("Ӣ��/����");
	}
}