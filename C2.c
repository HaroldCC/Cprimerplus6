/**�����ϰ**/
/*1*/
/*#include<stdio.h>
int main(void)
{
	printf("����\n");
	printf("��\n��\n");
	printf("��");
	printf("��\n");
	getchar();
	return 0;
}*/
/*2*/
/*#include<stdio.h>
int main(void)
{
	printf("����������\n��ַ���й�\n");
	getchar();
	return 0;
}*/
/*3*/
/*#include<stdio.h>
int main(void)
{
	int	age = 0, days = 0;
	printf("�������������䣺");
	scanf_s("%d", &age);
	days = age * 365;
	printf("��������Ϊ��%d\n��������ת��������Ϊ��%d\n", age, days);
	getchar();
	getchar();
	return 0;
}*/
/*4*/
/*#include<stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	getchar();
	return 0;
}
void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
	printf("Which nobagy can deny!\n");
}*/
/*5*/
/*#include<stdio.h>
void br(void);
void ic(void);
int main(void)
{
	br();
	ic();
	printf("India,China,\n");
	printf("Brazil,Russia\n");
	getchar();
	return 0;
}
void br(void)
{
	printf("Brazil,Russia,");
}
void ic(void)
{
	printf("India,China\n");
}*/
/*6*/
/*#include<stdio.h>
int main(void)
{
	int toes = 10;
	printf("toesΪ��%d\ntoes��2��Ϊ��%d\ntoes��ƽ��Ϊ��%d\n", toes, 2 * toes, toes*toes);
	getchar();
	return 0;
}*/
/*7*/
/*#include<stdio.h>
void smile(void);
int main(void)
{
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n");
	getchar();
	return 0;
}
void smile(void)
{
	printf("Smile!");
}*/
/*8*/
#include<stdio.h>
void one_three(void);
void two(void);
int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	getchar();
	return 0;
}
void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}
void two(void)
{
	printf("two\n");
}
