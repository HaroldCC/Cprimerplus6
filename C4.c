/**编程练习**/
/*1*/
/*#include<stdio.h>
int main(void)
{
	char surname[40] ;
	char  name[40];
	printf("请输入您的名：\n");
	scanf_s("%s",name,40);////////////////////////////////注意！！！scanf_s()在输入数组时需要指明字段大小/////////////////////////////////////////
	printf("请输入您的姓：\n");
	scanf_s("%s",surname,40);
	printf("您的名为：%s\n姓为：%s\n", name, surname);
	getchar();
	getchar();
	//getchar();
	return 0;
}*/
/*2*/
/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[40];
	printf("请输入名字：\n");
	scanf_s("%s", name, 40);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", strlen(name) + 3, name);
	getchar();
	getchar();
	return 0;
}*/
/*3*/
/*#include<stdio.h>
int main(void)
{
	float a;
	printf("输入一个小数：21.29\n");
	scanf_s("%f", &a);
	printf("输入的数是：%.1f或%.1e\n", a,a);
	printf("输入的数是：%2.2f或%.3E\n", a, a);
	getchar();
	getchar();
	return 0;
}*/
/*4*/
/*#include<stdio.h>
int main(void)
{
	float heigh;
	char name[40];
	printf("请输入你的姓名：\n");
	scanf_s("%s", name, 40);
	printf("请输入你的身高（米）：\n");
	scanf_s("%f", &heigh);
	printf("%s,你有%.3f米高", name,heigh);
	getchar();
	getchar();
	return 0;
}*/
/*5*/
/*#include<stdio.h>
int main(xoid)
{
	float speed, size, time;
	printf("请输入以兆位每秒（Mb/s）为单位的下载速度和以兆（MB）为单位的文件大小\n");
	scanf_s("%f %f", &speed,&size);
	time = 8 * size / speed;
	printf("At %.2f megabits per second,a file of %.2f megabytes\n\
 downloads in %.2f seconds.\n",speed,size,time);
	getchar();
	getchar();
	return 0;
}*/
/*6*/
/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char surname[40];
	char name[40];
	int length1,length2;
	printf("输入姓：\n");
	scanf_s("%s", surname, 40);
	printf("输入名：\n");
	scanf_s("%s", name, 40);
	length1 = strlen(surname);
	length2 = strlen(name);
	printf("%s %s\n", surname, name);
	printf("%*d %*d\n", length1, length1,length2,length2);
	printf("%s %s\n", surname, name);
	printf("%-*d %-*d\n", length1, length1, length2, length2);
	getchar();
	getchar();
	return 0;
}*/
/*7*/
/*#include<stdio.h>
#include<float.h>
int main(void)
{
	double a=1.0 / 3.0;
	float b=1.0 / 3.0;
	printf("a=%.6f\tb=%.6f\n", a, b);
	printf("a=%.12f\tb=%.12f\n", a, b);
	printf("a=%.16f\tb=%.16f\n", a, b);
	printf("float类型的最小有效数字为：%d\tdouble类型的最小有效数字为：%d\n", FLT_DIG, DBL_DIG);
	getchar();
	return 0;
}*/
/*8*/
#include<stdio.h>
#define GALLON 3.785 //1加仑等于3.785升
#define MILE 1.609   //1英里等于1.609千米
int main(void)
{
	float gallon, mile;
	printf("输入旅行里程：\n");
	scanf_s("%f", &mile);
	printf("输入消耗汽油量：\n");
	scanf_s("%f", &gallon);
	printf("油耗为：%.1f英里/加仑\n", mile / gallon);
	printf("油耗转换为：%.1f升/100公里\n", gallon*GALLON / (mile*MILE) * 100);
	getchar();
	getchar();
	return 0;
}