/****�����ϰ****/
/*1*/
/*#include<stdio.h>
int main(void)
{
	const int m_to_h = 60;
	int m,h,left;
	printf("����һ��ʱ�䣨���ӣ���\n");
	scanf_s("%d", &m);
	while (m>0)
	{
		h = m/m_to_h;
		left=m%m_to_h;
		printf("%d����ת��ΪСʱΪ��%dСʱ%d����\n", m, h,left);
		scanf_s("%d", &m);
	}
	getchar();
	//getchar();
	return 0;
}*/
/*2*/
/*#include<stdio.h>
int main(void)
{
	int a,b;
	printf("������һ��������\n");
	scanf_s("%d", &a);
	b = a + 10;
	while (a<=b)
	{
		printf("��ӡ�ȸ�����10������Ϊ:%d\n", a);
		a++;
	}
	getchar();
	getchar();
	return 0;
}*/
/*3*/
/*#include<stdio.h>
int main(void)
{
	const int day_to_week = 7;
	int days,week,left;
	printf("������������\n");
	scanf_s("%d", &days);
	while (days>0)
	{
		week = days/day_to_week;
		left = days%day_to_week;
		printf("%d��ת��Ϊ%d��%d��\n", days, week, left);
		scanf_s("%d", &days);
	}
	getchar();
	getchar();
	return 0;
}*/
/*4*/
/*#include<stdio.h>
#define FEET_TO_CM 30.48
#define INCHE_TO_CM 2.54
int main(void)
{
	float heigh,inches;//inchesӢ��
	int foot;//Ӣ��
	printf("�������(cm)��\n");
	scanf_s("%f", &heigh);
	while (heigh>0)
	{
		foot = heigh / FEET_TO_CM;
		inches = (heigh - foot * FEET_TO_CM) / INCHE_TO_CM;
		printf("%.2fcm=%dӢ��%.2fӢ��", heigh, foot, inches);
		scanf_s("%f", &heigh);
	}
	getchar();
	//getchar();
	return 0;
}*/
/*5*/
/*#include<stdio.h>
int main(void)
{
	int sum=0, count=0,day=0;
	printf("����������\n");
	scanf_s("%d", &day);
	while (count++<day)
	{
		sum = sum + count;
	}
	printf("%d������%dԪǮ\n", day, sum);
	getchar();
	getchar();
	return 0;
}*/
/*6*/
/*#include<stdio.h>
int main(void)
{
	int sum = 0, count = 0, day = 0;
	printf("����������\n");
	scanf_s("%d", &day);
	while (count++ < day)
	{
		sum = sum + count*count;
	}
	printf("%d������%dԪǮ\n", day, sum);
	getchar();
	getchar();
	return 0;
}*/
/*7*/
/*#include<stdio.h>
void value3(double a);
int main(void)
{
	double a;
	printf("����һ��С����\n");
	scanf_s("%lf", &a);
	value3(a);
	getchar();
	getchar();
	return 0;
}
void value3(double a)
{
	double b;
	b = a * a*a;
	printf("%lf����Ϊ��%lf\n", a, b);
}*/
/*8*/
/*#include<stdio.h>
int main(void)
{
	int a, b;
	printf("\t*****��ģ����*****\t\n");
	printf("����һ������Ϊ��2���������\n");
	scanf_s("%d", &a);
	printf("����ڶ�������Ϊ��1���������\n");
	scanf_s("%d", &b);
	printf("��ģ����%d%%%d=%d\n", b, a, b%a);
	printf("������һ������Ϊ��1���������\n");
	scanf_s("%d", &b);
	while (b>0)
	{
		printf("��ģ����%d%%%d=%d\n", b, a, b%a);
		printf("������һ������Ϊ��1���������\n");
		scanf_s("%d", &b);
	}
	printf("����\n");
	getchar();
	getchar();
	return 0;
}*/
/*9*/
/*#include<stdio.h>
void Temperatures(double h_tem);
int main(void)
{
	double h_tem;//���϶�
	printf("�����뻪���¶�(������������˳�)��\n");
	while (scanf_s("%lf", &h_tem)==1)
	{
		Temperatures(h_tem);
		printf("�����뻪���¶�(������������˳�)��\n");
	}
	printf("�����˳�\n");
	getchar();
	getchar();
	return 0; 
}
void Temperatures(double h_tem)
{
	double s_tem;//���϶�
	double k_tem;//���϶�
	const double h_to_s = 32.0;//���϶�ת���϶�Ҫ�õ��ĳ���ֵ
	const double s_to_k = 273.16;//���϶�ת���϶�Ҫ�õ��ĳ���ֵ
	s_tem = 5.0 / 9.0 * (h_tem - h_to_s);
	k_tem = s_tem + s_to_k;
	printf("%.2lf���϶ȵ���%.2lf���϶Ⱥ�%.2lf���϶�\n", h_tem, s_tem, k_tem);
}*/

