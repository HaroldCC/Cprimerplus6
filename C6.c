/****编程练习****/
/*1*/
/*#include<stdio.h>
#define size 26
int main(void)
{
	char ch[size];
	int a;
	for (a = 0; a<size; a++)
		ch[a] = 'a' + a;
	for (a = 0;a < size;a++)
		printf("%c", ch[a]);
	getchar();
	return 0;
}*/
/*2*/
/*#include<stdio.h>
int main(void)
{
	int row, clo;
	char ch = '$';
	for (row=0;  row< 5; row++)
	{
		for (clo = 0; clo < row + 1; clo++)
			printf("%c",ch);
		printf("\n");
	}
	getchar();
	return 0;
}*/
/*3*/
/*#include<stdio.h>
int main(void)
{
	char ch = 'F';
	char start, end;
	for (end=ch;end>='A'; end--)
	{
		for (start=ch;start>=end;start--)
			printf("%c", start);
		printf("\n");
	}
	getchar();
	return 0;
}*/
/*4*/
/*#include<stdio.h>
int main(void)
{
	const char end = 'U';
	char start;
	int row, clo;
	for (row=0,start = 'A'; start<=end;row++ )
	{
		for (clo = 0;clo <= row;clo++)
		{
			printf("%c", start);
			start++;
		}
		printf("\n");
	}
	getchar();
	return 0;
}*/
/*5*/
/*#include<stdio.h>
int main(void)
{
	char start = 'A';
	char end;
	char ch = start;
	int row, clo;
	printf("输入一个大写字母：\n");
	scanf_s("%c", &end);
	printf("  字母金字塔\n");
	for ( row=0; row <= end-start; row++,ch = start)
	{
		for (clo = 0;clo < end - start - row;clo++)
			printf(" ");
		for (int k = 0;k <= row;k++)
		{
			printf("%c", ch);
			ch++;
		}
		ch -= 2;
		for (int c = 0;c < row;c++)
		{
				printf("%c", ch);
			ch--;
		}
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}*/
/*6*/
/*#include <stdio.h> 
int main( void ) 
{    
	int start, end;
	printf("输入开始的数字：\n");
	scanf_s("%d", &start);
	printf("输入结束数字：\n");
	scanf_s("%d", &end);
	printf("原数\t平方\t立方\n");
	for (start;start <= end;start++)
	{
		printf("%d\t%d\t%d\n", start, start*start, start*start*start);
	}
	getchar();
	getchar();
	return 0;
}*/
/*7*/
/*#include<stdio.h>
#include<string.h>
#define SIZE 40
int main(void)
{
	char word[SIZE];
	int i;
	printf("请输入一个单词：\n");
	scanf_s("%s", word, 40);
	printf("该单词有%d个字母，单词是%s\n", strlen(word), word);
	printf("倒序为：");
	for (i = strlen(word - 1);i >= 0;i--)//strlen(word - 1)跳过字符串后面的空格
		printf("%c", word[i]);
	printf("\n");
	getchar();
	getchar();
	return 0;
}*/
/*8*/
/*#include<stdio.h>
int main(void)
{
	double a, b;
	int status;//输入状态
	printf("输入2个浮点数（输入q退出）：\n");
	while (scanf_s("%lf%lf", &a, &b) == 2)//验证是否输入了2个值
	{
		printf("结果是%.3lf", (a - b) / (a*b));
		printf("继续输入2个浮点数（输入q退出）：\n");
	}
	getchar();
	return 0;
}*/
/*9*/
/*#include<stdio.h>
float result(float a, float b);
int main(void)
{
	double a, b;
	int status;//输入状态
	printf("输入2个浮点数（输入q退出）：\n");
	while (scanf_s("%lf%lf", &a, &b) == 2)//验证是否输入了2个值
	{
		printf("结果是%.3lf", result(a,b));
		printf("继续输入2个浮点数（输入q退出）：\n");
	}
	getchar();
	return 0;
}
float result(float a, float b)
{
	float result;//result名称不唯一
	result = (a - b) / (a*b);
	return result;
}*/
/*10*/
/*#include<stdio.h>
int main(void)
{
	int up, down;//上限和下限
	printf("输入上限整数和下限整数：\n");
	scanf_s("%d %d", &up, &down);
	while (up>down)
	{
		int sum = 0;//初始化平方和sum
		for (int i = sum;i <= up;i++)
			sum = sum + i * i;
		printf("平方和从%d到%d是%d\n", up*up, down*down, sum);
		printf("继续输入上限整数和下限整数：\n");
		scanf_s("%d %d", &up, &down);
	}
	printf("结束！\n");
	getchar();
	getchar();
	return 0;
}*/
/*11*/
/*#include<stdio.h>
#define SIZE 8
int main(void)
{
	int a[SIZE];
	int i;
	for ( i = 0; i < SIZE; i++)
		scanf_s("%d", &a[i]);
		for (i = SIZE - 1;i >= 0;i--)
			printf("%d", a[i]);
	getchar();
	getchar();
	return 0;
}*/
/*12*/
/*#include<stdio.h>
int main(void)
{
	int times;
	float count1 = 1.0f;//分母
	float count2 = 1.0f;//分母
	float sum1 = 0.0;
	float sum2 = 0.0;
	printf("输入计算次数(输入0或负数退出):\n");
	scanf_s("%d", &times);
	for (int i = 1;i <= times;i++, count1++)
		sum1 = sum1 + 1.0 / count1;
	for (int j = 1;j <= times;j++, count2++)
	{
		if (j%2==0)
		{
			sum2 = sum2 - 1.0 / count2;
		}
		else
		{
			sum2 = sum2 + 1.0 / count2;
		}
	}
	printf("第一个公式的计算结果为：%f\n", sum1);
	printf("第二个公式的计算结果为：%f\n", sum2);
	getchar();
	getchar();
	return 0;
}*/
/*13*/
/*#include<stdio.h>
#define SIZE 8
int main(void)
{
	int arry[SIZE];
	int i, n;
	for (i = 0, n = 2;i < SIZE;i++, n *= 2)
		arry[i] = n;
	i = 0;
	do
	{
		printf("%d\n", arry[i]);
		i++;
	} while (i<SIZE);
	getchar();
	return 0;
}*/
/*14*/
/*#include<stdio.h>
#define SIZE 8
int main(void)
{
	double arry1[SIZE];
	double arry2[SIZE];
	int i;

	printf("输入值：\n");
	for (i = 0;i < SIZE;i++)
		scanf_s("%lf", &arry1[i]);//读入第一个数组
	arry2[0] = arry1[0];//初始化第二个数组
	for (i = 1;i < SIZE;i++)
		arry2[i] = arry2[i - 1] + arry1[i];//计算第二个元组各数之和
	for (i = 0;i < SIZE;i++)
		printf("%8.2lf", arry1[i]);
	printf("\n");
	for (i = 0;i < SIZE;i++)
		printf("%8.2lf", arry2[i]);
	
	getchar();
	getchar();
	return 0;
}*/
/*15*/
/*#include<stdio.h>
#define SIZE 255
int main(void)
{
	char arry[SIZE];
	int i = -1;
	printf("输入一个单词：\n");
	do
	{
		i++;//由arry[0]开始循环读入
		scanf_s("%c", &arry[i]);
	} while (arry[i]!='\n');
	for (;i >= 0;i--)
		printf("%c", arry[i]);
	getchar();
	return 0;
}*/
/*16*/
/*#include<stdio.h>
#define Daphne_RATE 0.10    //Daphne利率
#define Deiedre_RATE 0.05   //Deiedre利率
#define MONEY 100.0        //投资100元
int main(void)
{
	int year=0;
	double Daphne_money=MONEY;   //Daphne的投资额
	double Deiedre_money=MONEY;  //Deiedre的投资额
	while (Deiedre_money <= Daphne_money)   //当Deiedre投资额超过Daphne的投资额退出循环
	{
		year++;
		Daphne_money = Daphne_money + MONEY * Daphne_RATE;
		Deiedre_money = Deiedre_money + Deiedre_money * Deiedre_RATE;
	}
	printf("用了%d年Deiedre的投资额超过Daphne的投资额\n", year);
	printf("Daphne的投资额为：%f\tDeiedre的投资额为%f\n", Daphne_money, Deiedre_money);
	getchar();
	return 0;
}*/
/*17*/
/*#include<stdio.h>
#define RATE 0.08
int main(void)
{
	double money = 100;
	int year = 0;
	while (money>0)
	{
		year++;
		money = money + money * RATE;
		money = money - 10;
	}
	printf("%d年后Chuckie会取完账户里的钱\n", year);
	getchar();
	return 0;
}*/
/*18*/
#include<stdio.h>
#define DB_NUMBER 150    //邓巴数
int main(void)
{
	int weeks = 1;
	int friends = 5;
	while (friends<DB_NUMBER)
	{
		friends = (friends - weeks) * 2;
		printf("%d周后，Rabnud博士有%d个朋友\n", weeks, friends);
		weeks++;
	}
	getchar();
	return 0;
}
