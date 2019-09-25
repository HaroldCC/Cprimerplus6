/*****编程练习*****/
/*1*/
/*#include<stdio.h>
int main(void)
{
	char  ch;
	int spa_count=0, lin_count=0, oth_count=0;   //空格数，换行符数，其他字符数
	printf("输入字符进行统计（输入字符‘#’退出程序）：\n");
	while ((ch=getchar())!='#')
	{
		if (ch == ' ')
			spa_count++;
		else if (ch == '\n')
			lin_count++;
		else
			oth_count++;
	}
	printf("你输入的字符中空格数有%d个，换行符有%d个，其他字符数有%d个\n", spa_count, lin_count, oth_count);
	getchar();
	getchar();
	return 0;
}*/
/*2*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	const int line = 8;
	int chsum = 0;//统计字符数
	printf("输入字符进行统计（输入‘#’字符结束）：\n");
	while ((ch=getchar())!='#')
	{
		printf("%c:%d\t", ch, ch);
		chsum++;
		if (chsum%line == 0)
			printf("\n");
	}
	printf("\n");
	getchar();
	getchar();
	return 0;
}*/
/*3*/
/*#include<stdio.h>
int main(void)
{
	int a;
	int ou_count = 0;//偶数个数
	int ji_count = 0;//奇数个数
	int ou_sum = 0;//偶数的和
	int ji_sum = 0;//奇数和
	float ou_average;//偶数平均值
	float ji_average;//奇数平均值
	printf("输入整数进行计算（输入‘0’结束）：");
	while (scanf_s("%d", &a) == 1 && a != 0)
	{
		if (a % 2 == 0)
		{
			ou_count++;
			ou_sum += a;
		}
		else
		{
			ji_count++;
			ji_sum += a;
		}
	}
		printf("偶数个数：%d\n", ou_count);
		if (ou_count>0)
		{
			ou_average = ou_sum / ou_count;
			printf("偶数平均值为：%.2f\n", ou_average);
		}
		printf("奇数个数：%d\n", ji_count);
		if (ji_count>0)
		{
			ji_average = ji_sum / ji_count;
			printf("奇数平均值为：%.2f\n", ji_average);
		}
	printf("结束\n");
	getchar();
	getchar();
	return 0;
}*/
/*4*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	int count1=0;//替换句号的次数
	int count2=0;//替换感叹号的次数
	printf("输入字符进行统计(输入‘#’结束)：\n");
	while ((ch=getchar())!='#')
	{
		if (ch == '.')
		{
			putchar('!');
			count1++;
		}
		else if (ch == '!')
		{
			putchar('!');
			putchar('!');
			count2++;
		}
		else
			putchar(ch);
	}
	printf("\n'!'替代'.'进行了%d次\n", count1);
	printf("'!!'替代'！'进行了%d次\n", count2);
	getchar();
	getchar();
	return 0;
}*/
/*5*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	int count1 = 0;//替换句号的次数
	int count2 = 0;//替换感叹号的次数
	printf("输入字符进行统计(输入‘#’结束)：\n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case'.':
			putchar('!');
			count1++;
			break;
		case'!':
			putchar('!');
			putchar('!');
			count2++;
			break;
		default:
			putchar(ch);
		}
	}
	printf("\n'!'替代'.'进行了%d次\n", count1);
	printf("'!!'替代'！'进行了%d次\n", count2);
	getchar();
	getchar();
	return 0;
}*/
/*6*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	char fir, sec;//第一个接收到的字符和第二个字符
	int count = 0;//ei出现的次数
	printf("输入进行统计(输入‘#’结束)：\n");
	while ((ch=getchar())!='#')
	{
		if (ch=='e')
		{
			fir = ch;
			continue;
		}
		if (ch=='i')
		{
			sec = ch;

			if (fir == 'e'&&sec == 'i')
				count++;                //判断前一个字符是‘e’，第二个是‘i’，则次数加1
			//初始化fir和sec
			fir = 'a';
			sec = 'a';
			continue;
		}
		continue;
	}
	printf("'ei'出现了%d次\n",count);
	getchar();
	getchar();
	return 0;
}*/
/*7*/
/*#include<stdio.h>
#define BASE_MONEY 10.00//基本工资
#define BASE_TIME 40//基本加班时间
#define OVER_TIME 1.5//超过基本时间
#define MONY1 300//税率分界线1
#define MONY2 150//税率分界线2
#define RATE1 0.15//MONY1前的税率
#define RATE2 0.20//MONY2的税率
#define RATE3 0.25//剩下的税率
int main(void)
{
	double hours;//一周工作时间
	double sum;//工资总数
	double rate_mony;//税金
	double income;//净收入
	printf("输入一周工作小时数：\n");
	scanf_s("%lf", &hours);
	if (hours <= BASE_TIME)
		sum = hours * BASE_MONEY;
	else
		sum = BASE_TIME * BASE_MONEY + (hours - BASE_TIME)*BASE_MONEY*OVER_TIME;
	if (sum <= MONY1)
		rate_mony = sum * RATE1;
	else if (sum <= MONY1 + MONY2)
		rate_mony = MONY1 * RATE1 + (sum - MONY1)*RATE2;
	else
		rate_mony = MONY1 * RATE1 + MONY2 * RATE2 + (sum - MONY1 - MONY2)*RATE3;
	income = sum - rate_mony;
	printf("工资总额是：%.2lf\t税金是：%.2lf\t净收入是：%.2lf\n", sum, rate_mony, income);
	getchar();
	getchar();
	return 0;
}*/
/*8*/
/*#include<stdio.h>
#define BASE_TIME 40     //基本加班时间
#define OVER_TIME 1.5    //超过基本时间
#define MONY1 300       //税率分界线1
#define MONY2 150          //税率分界线2
#define BASE_LEVEL1 8.75
#define BASE_LEVEL2 9.33
#define BASE_LEVEL3 10.00
#define BASE_LEVEL4 11.20
#define RATE1 0.15             //MONY1前的税率
#define RATE2 0.20            //MONY2的税率
#define RATE3 0.25           //剩下的税率
int main(void)
{
	int choice;
	double basy_money;
	double hours;            //一周工作时间
	double sum;             //工资总数
	double rate_money;      //税金
	double income;        //净收入
	printf("*******************************************************\n");
	printf("输入与薪资或操作对应的编号进行操作：\n");
	printf("1) $8.75/hours      \t2) $9.33/hours\n");
	printf("3) $10.00/hours     \t4) $11.20/hours\n");
	printf("5) 退出\n");
	printf("*******************************************************\n");
	while (scanf_s("%d",&choice) == 1 && choice != 5)
	{
		switch (choice)
		{
		case 1:
			basy_money = BASE_LEVEL1;
			break;
		case 2:
			basy_money = BASE_LEVEL2;
			break;
		case 3:
			basy_money = BASE_LEVEL3;
			break;
		case 4:
			basy_money = BASE_LEVEL4;
			break;
		default:
			printf("请输入1-4数字进行选择（输入数字5退出）。\n请输入正确的数字\n");
			continue;
		}
		printf("输入一周工作小时数：\n");
		scanf_s("%lf", &hours);
		if (hours <= BASE_TIME)
			sum = basy_money * hours;
		else
			sum = BASE_TIME * basy_money + (hours - BASE_TIME)*basy_money*OVER_TIME;
		if (sum <= MONY1)
			rate_money = sum * RATE1;
		else if (sum <= (MONY1 + MONY2))
			rate_money = MONY1 * RATE1 + (sum - MONY1) * RATE2;
		else
			rate_money = MONY1 * RATE1 + MONY2 * RATE2 + (sum - MONY1 - MONY2)*RATE3;
		income = sum - rate_money;
		printf("工资总额是：%.2lf\t税金是：%.2lf\t净收入是：%.2lf\n", sum, rate_money, income);
		printf("输入下一个数字继续\n");
	}
	getchar();
	return 0;
}*/
/*9*/
/*#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int limit;//输入的数
	int num;
	int div;
	bool numIsPrime;   //判断是否为素数
	printf("输入正整数：");
	while (scanf_s("%d",&limit) == 1 && limit > 0)
	{
		if (limit > 1)
			printf("以下为素数：\n", limit);
		else
			printf("没有素数\n");
		for (num=2 ; num <= limit; num++)
		{
			for (div = 2, numIsPrime = true;(div*div) <= num;div++)
				if (num%div == 0)
					numIsPrime = false;
			if (numIsPrime)
				printf("%d是素数。\n", num);
		}
		printf("输入正整数(输入q退出)：");
	}
	printf("结束\n");
	getchar();
	return 0;
}*/
/*10*/
/*#include<stdio.h>
#define LEVEL1 17850
#define LEVEL2 23900
#define LEVEL3 29750
#define LEVEL4 14875
#define RATE1 0.15
#define RATE2 0.28
int main(void)
{
	int choice;             //选择号码
	long level;            //税金等级    
	double income;         //收入
	double taxmoney;       //税金
	printf("****************************************************************************\n");
	printf("输入类别编号：\n");
	printf("1) 单身   \t2) 户主   \t3) 已婚，共有   \t4) 已婚，离异\n");
	printf("5) 退出\n");
	printf("****************************************************************************\n");
	while (scanf_s("%d",&choice) == 1 && choice != 5)
	{
		switch (choice)
		{
		case 1:
			level = LEVEL1;
			break;
		case 2:
			level = LEVEL2;
			break;
		case 3:
			level = LEVEL3;
			break;
		case 4:
			level = LEVEL4;
			break;
		default:
			printf("请输入1-4数字进行选择（输入数字5退出）。\n请输入正确的数字\n");
			break;
		}
		printf("请输入你的收入：");
		scanf_s("%lf", &income);
		if (income <= level)
			taxmoney = income * RATE1;
		else
			taxmoney = level * RATE1 + (income - level)*RATE2;
		printf("你的税金为%.2lf元\n", taxmoney);
		printf("继续输入选择（输入5退出）：\n");
	}
	getchar();
	return 0;
}*/
/*11*/
#include<stdio.h>
#define Y_PRICE 2.05        //洋蓟 单价
#define T_PRICE 1.15        //甜菜
#define H_PRICE 1.09       //胡萝卜
#define DISCOUNT 0.05      //折扣优惠

#define WEIGHT_LEVEL1 5      //重量层次
#define WEIGHT_LEVEL2 20

#define TRANS_LEVEL1 6.5      //运费和包装费层次
#define TRANS_LEVEL2 14

#define TRANS_LEVEL3 0.5       //额外增费
int main(void)
{
	char ch;       //选择字符
	float input;     //输入磅数
	float y_weight = 0;   //洋蓟磅数
	float t_weight = 0;    //甜菜磅数
	float h_weight = 0;     //胡萝卜磅数
	float total_weight;   //总重
	float cost;            //花费
	float total_cost;         //总花费：买菜+运费
	float discount;           //折扣
	float tran_cost;         //运费
	float total_all;
	printf("************************************************\n");
	printf("输入编号进行选择：\n");
	printf("a:洋蓟\tb:甜菜\tc:胡萝卜\nq:退出并打印账单\n");
	printf("************************************************\n");
	while ((ch = getchar()) != 'q')
	{
		if (ch == '\n')
			continue;
		while (getchar() != '\n')
			continue;
		switch (ch)
		{
		case 'a':
			printf("输入洋蓟的磅数：");
			scanf_s("%f", &input);
			y_weight = y_weight + input;
			break;
		case 'b':
			printf("输入甜菜的磅数：");
			scanf_s("%f", &input);
			t_weight = t_weight + input;
			break;
		case 'c':
			printf("输入胡萝卜的磅数：");
			scanf_s("%f", &input);
			h_weight = h_weight + input;
			break;
		default:
			printf("输入错误,请输入a,b,c选择蔬菜，q退出\n");
			break;
		}
		printf("继续输入进行购物\n");
	}
	total_weight = y_weight + t_weight + h_weight;
	cost = y_weight * Y_PRICE + t_weight * T_PRICE + h_weight * H_PRICE;
	if (cost >= 100)
		discount = cost * DISCOUNT;
	else
		discount = 0;
	if (total_weight <= 0)
		tran_cost = 0;
	else if (total_weight <= WEIGHT_LEVEL1)
		tran_cost = TRANS_LEVEL1;
	else if (total_weight <= WEIGHT_LEVEL2)
		tran_cost = TRANS_LEVEL2;
	else
		tran_cost = TRANS_LEVEL2 + TRANS_LEVEL3 * total_weight;
	total_all = cost + tran_cost - discount;
	printf("你的订单如下：\n");
	printf("2.05美元/磅的洋蓟订购了%.2f磅\n", y_weight);
	printf("1.15美元/磅的甜菜订购了%.2f磅\n", t_weight);
	printf("1.09美元/磅的胡萝卜订购了%.2f磅\n", h_weight);
	printf("买蔬菜的费用为：%.2f\n", cost);
	if(cost>100)
		printf("折扣为：%.2f\n", discount);
	printf("运费和包装费为：%.2f\n", tran_cost);
	printf("所有费用为：%.2f\n", total_all);
	getchar();
	getchar();
	return 0;
}
