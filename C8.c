/****编程练习****/
/*1*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	int a = 0;
	while ((ch=getchar())!=EOF)
		a++;
	printf("读取到%d个字符。\n", a);
	getchar();
	return 0;
}*/
/*2*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	int i=0;            //统计每行的值
	while ((ch=getchar())!=EOF)
	{
		if (ch == '\n')
		{
			putchar('\\');
			putchar('n');
			printf(" %d\n", ch);
			i = 0;
		}
		else if (ch == '\t')
		{
			putchar('\\');
			putchar('t');
			printf("%d\n", ch);
		}
		else if (ch < ' ')
		{
			putchar('^');
			putchar(ch + 64);
			printf("%d\t", ch);
		}
		else
			printf("%c %d\t", ch, ch);
		if (++i == 10)
		{
			printf("\n");
			i = 0;
		}
	}
	getchar();
	return 0;
}*/
/*3*/
/*#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int ch;
	                             //统计个数，用不到负数
	unsigned A_count = 0;        //大写
	unsigned a_count = 0;        //小写
	unsigned oth_count = 0;       //其他字符个数
	while ((ch=getchar())!=EOF)
	{
		//if (isupper(ch))         //用isupper()函数判断是否为大写
		if(ch>='A'&&ch<='Z')       //可以用该行替换上一行，这种方法不用再调用ctype.h
			A_count++;
		else if (islower(ch))      //用islower()函数判断是否为小写	
			a_count++;
		else
			oth_count++;
	}
	printf("输入中大写字母有%d个\n", A_count);
	printf("小写字母有%d个\n", a_count);
	printf("其他字符有%d个\n", oth_count);
	getchar();
	return 0;
}*/
/*4*/
/*#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(void)
{
	char ch;
	int words = 0, count = 0;      //单词   字母总数
	bool inword = false;           //判断是否是一个单词
	float average;
	while ((ch=getchar())!=EOF)
	{
		if (isalpha(ch))
			count++;               //如果是个字符，字母+1
		if (!isspace(ch) && !inword)
		{
			inword = true;
			words++;               //如果不是空格且inword为true，单词+1
		}
		if (isspace(ch) && inword)
			inword = false;           //如果是个空格，且inword为true，此时并不是个完整单词，需要初始化inword
		if (ispunct(ch))
			continue;               //如果是字符，中断本次循环
	}
	average = count / words;
	printf("平均每个单词有%.2f个字母", average);
	getchar();
	return 0;
}*/
/*5*/
/*#include<stdio.h>
int main(void)
{
	int high = 100;
	int low = 1;
	int	guess=(low+high)/2;
	char response;
	printf("你在1-100中选一个数字，我能猜出那个数字！");
	printf("\n如果我回答正确，就输入'y'");
	printf("\n如果我猜的数太高，就输入'h'");
	printf("\n如果我猜的数太小，就输入'l'\n");
	printf("你选择的数字是 %d?\n", guess);
	while ((response=getchar())!='y')
	{
		if (response == '\n')
			continue;
		if (response != 'h'&&response != 'l')
		{
			printf("对不起，输入错误！请重新输入！\n");
			continue;
		}
		if (response == 'h')
			high = guess - 1;
		else if (response == 'l')
			low = guess + 1;
		guess = (high + low) / 2;
		printf("你选择的数字是 %d?\n", guess);
	}
	printf("哈哈！我猜对了！\n");
	getchar();
	getchar();
	return 0;
}*/
/*6*/
/*#include<stdio.h>
#include<ctype.h>
char get_first(void);
int main(void)
{
	char ch;
	ch = get_first();
	putchar(ch);
	getchar();
	return 0;
}
char get_first(void)
{
	char ch;
	ch = getchar();
	while (isspace(ch))
		ch = getchar();
	while (getchar() != '\n')
		continue;
	return ch;
}*/
/*7*/
/*#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define BASY_MONEY1 8.75       //基本工资
#define BASY_MONEY2 9.33
#define BASY_MONEY3 10.00
#define BASY_MONEY4 11.20

#define BASY_TIME 40         //基本工作时间
#define EXTR_TIME 1.5         //加班

#define LIN_MONEY1 300       //税率分界线
#define LIN_MONEY2 150       

#define RATE1 0.15            //税率
#define RATE2 0.20
#define RATE3 0.25
int get_first(void);          //创建函数，如果输入为空，则丢弃
int main(void)
{
	char ch;
	double basy_money;
	double hours;
	double sum;           //工资总数
	double rate_money;    //税金
	double income;        //净收入
	printf("*******************************************************\n");
	printf("输入与薪资或操作对应的编号进行操作：\n");
	printf("a) $8.75/hours      \tb) $9.33/hours\n");
	printf("c) $10.00/hours     \td) $11.20/hours\n");
	printf("q) 退出\n");
	printf("*******************************************************\n");
	while ((ch=get_first())!='q')   //调用get_first()函数
	{
		if (ch =='\n')
			continue;
		ch = tolower(ch);       //将大写字母转为小写
		switch (ch)
		{
		case 'a':
			basy_money = BASY_MONEY1; break;
		case 'b':
			basy_money = BASY_MONEY2; break;
			case 'c':
				basy_money = BASY_MONEY3; break;
			case 'd':
				basy_money = BASY_MONEY4; break;
		default:
			printf("请输入a-d进行选择（输入q退出）。\n请输入正确的数字\n"); break;
		}
		printf("输入一周工作小时数：\n");
		scanf_s("%lf", &hours);
		if (hours <= BASY_TIME)
			sum = basy_money * hours;
		else
			sum = basy_money * BASY_TIME + (hours - BASY_TIME)*basy_money*EXTR_TIME;
		if (sum <= LIN_MONEY1)
			rate_money = sum * RATE1;
		else if (sum <= (LIN_MONEY1 + LIN_MONEY2))
			rate_money = LIN_MONEY1*RATE1 + (sum - LIN_MONEY1)*RATE2;
		else
			rate_money = LIN_MONEY1 * RATE1 + LIN_MONEY2 * RATE2 + BASY_MONEY2 + (sum - LIN_MONEY1 - LIN_MONEY2)*RATE3;
		income = sum - rate_money;
		printf("工资总额是：%.2lf\t税金是：%.2lf\t净收入是：%.2lf\n", sum, rate_money, income);
		printf("输入下一个数字继续\n");
	}
	getchar();
	return 0;
}
int get_first(void)
{
	int ch;
	ch = getchar();
	while (isspace(ch))
		ch = getchar();
	while (getchar() != '\n')
		continue;
	return ch;
}*/
/*8*/
/*#include<stdio.h>
#include<ctype.h>
int get_first(void);
float get_num(void);
int main(void)
{
	char ch;
	float first, second;
	printf("输入你想进行运算的选项：\n");
	printf("a.加法\ts.减法\n");
	printf("m.乘法\td.除法\n");
	printf("q.退出\n");
	while ((ch=get_first())!='q')
	{
		ch = tolower(ch);
		if (ch != 'a'&& ch != 's'&& ch != 'm'&& ch != 'd')
		{
			printf("你只能输入a,s,m,d,q中的一个:");
			continue;
		}
		printf("输入第一个数：");
		first = get_num();
		printf("输入第二个数：");
		second = get_num();
		if (ch == 'd')
		{
			while (second == 0)
			{
				printf("输入一个大于0的数：");
				second = get_num();
			}
		}
		switch (ch)
		{
		case 'a':
			printf("%.1f+%.1f=%.1f\n", first, second, first + second); break;
		case 's':
			printf("%.1f-%.1f=%.1f\n", first, second, first - second); break;
		case 'm':
			printf("%.1f*%.1f=%.1f\n", first, second, first*second); break;
		case 'd':
			printf("%.1f/%.1f=%.1f\n", first, second, first / second); break;
		default:
			;
			break;
		}
		printf("输入你想进行运算的选项：\n");
		printf("a.加法\ts.减法\n");
		printf("m.乘法\td.除法\n");
		printf("q.退出\n");
	}
	getchar();
	return 0;
}
int get_first(void)
{
	int ch;
	while ((ch = getchar()) == ' ' || ch == '\t' || ch == '\n')
		continue;
	while (getchar() != '\n')
		continue;
	return ch;
}
float get_num(void)
{
	float input;
	char ch;
	while (scanf_s("%f",&input)!=1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf("%c不是数字\n请输入例如2.5，-1.78E8，3之类的数字：",ch);
	}
	return input;
}*/

