/****编程练习****/
/*1*/
/*#include<stdio.h>
int main(void)
{
	const int m_to_h = 60;
	int m,h,left;
	printf("输入一个时间（分钟）：\n");
	scanf_s("%d", &m);
	while (m>0)
	{
		h = m/m_to_h;
		left=m%m_to_h;
		printf("%d分钟转化为小时为：%d小时%d分钟\n", m, h,left);
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
	printf("请输入一个整数：\n");
	scanf_s("%d", &a);
	b = a + 10;
	while (a<=b)
	{
		printf("打印比该数大10的整数为:%d\n", a);
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
	printf("请输入天数：\n");
	scanf_s("%d", &days);
	while (days>0)
	{
		week = days/day_to_week;
		left = days%day_to_week;
		printf("%d天转化为%d周%d天\n", days, week, left);
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
	float heigh,inches;//inches英寸
	int foot;//英尺
	printf("输入身高(cm)：\n");
	scanf_s("%f", &heigh);
	while (heigh>0)
	{
		foot = heigh / FEET_TO_CM;
		inches = (heigh - foot * FEET_TO_CM) / INCHE_TO_CM;
		printf("%.2fcm=%d英尺%.2f英寸", heigh, foot, inches);
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
	printf("输入天数：\n");
	scanf_s("%d", &day);
	while (count++<day)
	{
		sum = sum + count;
	}
	printf("%d天挣了%d元钱\n", day, sum);
	getchar();
	getchar();
	return 0;
}*/
/*6*/
/*#include<stdio.h>
int main(void)
{
	int sum = 0, count = 0, day = 0;
	printf("输入天数：\n");
	scanf_s("%d", &day);
	while (count++ < day)
	{
		sum = sum + count*count;
	}
	printf("%d天挣了%d元钱\n", day, sum);
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
	printf("输入一个小数：\n");
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
	printf("%lf立方为：%lf\n", a, b);
}*/
/*8*/
/*#include<stdio.h>
int main(void)
{
	int a, b;
	printf("\t*****求模运算*****\t\n");
	printf("输入一个数作为第2个运算对象：\n");
	scanf_s("%d", &a);
	printf("输入第二个数作为第1个运算对象：\n");
	scanf_s("%d", &b);
	printf("求模运算%d%%%d=%d\n", b, a, b%a);
	printf("输入下一个数作为第1个运算对象：\n");
	scanf_s("%d", &b);
	while (b>0)
	{
		printf("求模运算%d%%%d=%d\n", b, a, b%a);
		printf("输入下一个数作为第1个运算对象：\n");
		scanf_s("%d", &b);
	}
	printf("结束\n");
	getchar();
	getchar();
	return 0;
}*/
/*9*/
/*#include<stdio.h>
void Temperatures(double h_tem);
int main(void)
{
	double h_tem;//华氏度
	printf("请输入华氏温度(输入非数字以退出)：\n");
	while (scanf_s("%lf", &h_tem)==1)
	{
		Temperatures(h_tem);
		printf("请输入华氏温度(输入非数字以退出)：\n");
	}
	printf("程序退出\n");
	getchar();
	getchar();
	return 0; 
}
void Temperatures(double h_tem)
{
	double s_tem;//摄氏度
	double k_tem;//开氏度
	const double h_to_s = 32.0;//华氏度转摄氏度要用到的常量值
	const double s_to_k = 273.16;//摄氏度转开氏度要用到的常量值
	s_tem = 5.0 / 9.0 * (h_tem - h_to_s);
	k_tem = s_tem + s_to_k;
	printf("%.2lf华氏度等于%.2lf摄氏度和%.2lf开氏度\n", h_tem, s_tem, k_tem);
}*/

