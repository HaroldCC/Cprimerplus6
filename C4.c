/**�����ϰ**/
/*1*/
/*#include<stdio.h>
int main(void)
{
	char surname[40] ;
	char  name[40];
	printf("��������������\n");
	scanf_s("%s",name,40);////////////////////////////////ע�⣡����scanf_s()����������ʱ��Ҫָ���ֶδ�С/////////////////////////////////////////
	printf("�����������գ�\n");
	scanf_s("%s",surname,40);
	printf("������Ϊ��%s\n��Ϊ��%s\n", name, surname);
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
	printf("���������֣�\n");
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
	printf("����һ��С����21.29\n");
	scanf_s("%f", &a);
	printf("��������ǣ�%.1f��%.1e\n", a,a);
	printf("��������ǣ�%2.2f��%.3E\n", a, a);
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
	printf("���������������\n");
	scanf_s("%s", name, 40);
	printf("�����������ߣ��ף���\n");
	scanf_s("%f", &heigh);
	printf("%s,����%.3f�׸�", name,heigh);
	getchar();
	getchar();
	return 0;
}*/
/*5*/
/*#include<stdio.h>
int main(xoid)
{
	float speed, size, time;
	printf("����������λÿ�루Mb/s��Ϊ��λ�������ٶȺ����ף�MB��Ϊ��λ���ļ���С\n");
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
	printf("�����գ�\n");
	scanf_s("%s", surname, 40);
	printf("��������\n");
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
	printf("float���͵���С��Ч����Ϊ��%d\tdouble���͵���С��Ч����Ϊ��%d\n", FLT_DIG, DBL_DIG);
	getchar();
	return 0;
}*/
/*8*/
#include<stdio.h>
#define GALLON 3.785 //1���ص���3.785��
#define MILE 1.609   //1Ӣ�����1.609ǧ��
int main(void)
{
	float gallon, mile;
	printf("����������̣�\n");
	scanf_s("%f", &mile);
	printf("����������������\n");
	scanf_s("%f", &gallon);
	printf("�ͺ�Ϊ��%.1fӢ��/����\n", mile / gallon);
	printf("�ͺ�ת��Ϊ��%.1f��/100����\n", gallon*GALLON / (mile*MILE) * 100);
	getchar();
	getchar();
	return 0;
}