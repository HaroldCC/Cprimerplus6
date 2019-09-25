/**编程练习**/
/*1*/
/*#include<stdio.h>
int main(void)
{
	int	a;
	float b,c;
	a = 10000000000;//整数上溢
	b = 3.4E38 + 10.0f;//浮点数上溢
	c = 0.1234E-10 / 10;//浮点数下溢
	printf("%d\n%f\n%f\n",a, b, c);
	getchar();
	return 0;
}*/
/*2*/
/*#include<stdio.h>
int main(void)
{
	int a = 0;
	printf("请输入一个0-127中的一个整数：");
	scanf_s("%d", &a);
	printf("该数对应的ASCLL码为：%c\n", a);
	getchar();
	getchar();
	return 0;
}*/
/*3*/
/*#include<stdio.h>
int main(void)
{
	printf("\a");//警报
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
	printf("输入一个小数：");
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
	printf("请输入您的年龄：");
	scanf_s("%ld", &age);
	min = age * 3.156E7;
	printf("转换为秒为：%ld秒\n", min);
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
	printf("请输入水的夸脱数：");
	scanf_s("%d", &b);
	a = 950 * 3.0E-23;
	c = a * b;
	printf("水分子数量为：%e\n", c);
	getchar();
	getchar();
	return 0;
}*/
/*7*/
/*#include<stdio.h>
int main()
{
	float tall_m, tall_cm;
	printf("请输入您的身高：");
	scanf_s("%f", &tall_m);
	tall_cm = 2.54*tall_m;
	printf("%.2f英寸转化为厘米为：%f厘米",tall_m, tall_cm);
	getchar();
	getchar();
	return 0;
}*/
/*8*/
#include<stdio.h>
int main()
{
	float cup,p,a,t,c;
	printf("请输入杯数：");
	scanf_s("%f", &cup);
	p = cup/2;
	a = 8 * cup;
	t = 2 * a;
	c = 3 * t;
	printf("%f杯等于%f品脱，%f杯等于%f盎司，%f盎司等于%f大汤勺，%f大汤勺等于%f茶勺\n", cup, p, cup, a, a, t, t, c);
	getchar();
	getchar();
	return 0;
}