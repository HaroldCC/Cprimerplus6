/**�����ϰ**/
/*1*/
/*#include<stdio.h>
int main(void)
{
	int	a;
	float b,c;
	a = 10000000000;//��������
	b = 3.4E38 + 10.0f;//����������
	c = 0.1234E-10 / 10;//����������
	printf("%d\n%f\n%f\n",a, b, c);
	getchar();
	return 0;
}*/
/*2*/
/*#include<stdio.h>
int main(void)
{
	int a = 0;
	printf("������һ��0-127�е�һ��������");
	scanf_s("%d", &a);
	printf("������Ӧ��ASCLL��Ϊ��%c\n", a);
	getchar();
	getchar();
	return 0;
}*/
/*3*/
/*#include<stdio.h>
int main(void)
{
	printf("\a");//����
	printf("Startled by the sudden sound,Sally shouted,\n");
	printf("\"By the Grate Pumpkin,what was that!\"");
	getchar();
	return 0;
}*/
/*4*/
/*#include<stdio.h>
int main(void)
{
	float a;
	printf("����һ��С����");
	scanf_s("%f", &a);
	printf("%f\n%e\n%.2a\n", a, a, a);
	getchar();
	getchar();
	return 0;
}*/
/*5*/
/*#include<stdio.h>
int main(void)
{
	int age = 0;
	long min = 0;
	printf("�������������䣺");
	scanf_s("%ld", &age);
	min = age * 3.156E7;
	printf("ת��Ϊ��Ϊ��%ld��\n", min);
	getchar();
	getchar();
	return 0;
}*/
/*6*/
/*#include<stdio.h>
int	main(void)
{
	double a,c;
	int b;
	printf("������ˮ�Ŀ�������");
	scanf_s("%d", &b);
	a = 950 * 3.0E-23;
	c = a * b;
	printf("ˮ��������Ϊ��%e\n", c);
	getchar();
	getchar();
	return 0;
}*/
/*7*/
/*#include<stdio.h>
int main()
{
	float tall_m, tall_cm;
	printf("������������ߣ�");
	scanf_s("%f", &tall_m);
	tall_cm = 2.54*tall_m;
	printf("%.2fӢ��ת��Ϊ����Ϊ��%f����",tall_m, tall_cm);
	getchar();
	getchar();
	return 0;
}*/
/*8*/
#include<stdio.h>
int main()
{
	float cup,p,a,t,c;
	printf("�����뱭����");
	scanf_s("%f", &cup);
	p = cup/2;
	a = 8 * cup;
	t = 2 * a;
	c = 3 * t;
	printf("%f������%fƷ�ѣ�%f������%f��˾��%f��˾����%f�����ף�%f�����׵���%f����\n", cup, p, cup, a, a, t, t, c);
	getchar();
	getchar();
	return 0;
}