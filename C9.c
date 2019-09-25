/*********编程练习***********/
/*复习题9*/
//#include<stdio.h>
//void mennu(void);        //菜单函数
//int limt(int up, int down);    //上下限函数
//int main(void)
//{
//	int ch;
//	mennu();
//	while ((ch=limt(4,1))!=4)
//	{
//		printf("%d一个正确的选择！\n",ch);
//		mennu();
//	}
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}
//void mennu(void)
//{
//	printf("请选择列表中对应的数字：\n");
//	printf("1) 复制文件 \t2) 移动文件\n");
//	printf("3) 删除文件 \t4) 退出\n");
//	printf("输入你选择的数字：\n");
//}
//int limt(int up, int down)
//{
//	int input;
//	int a=scanf_s("%d", &input);
//	while (a==1&&(input > up || input < down))
//	{
//		printf("输入数值超过限制!\n");
//		mennu();
//		scanf_s("%d", &input);
//	}
//	if (a!=1)
//	{
//		printf("没有数字输入!\n");
//		input = 4;
//	}
//	return input;
//}
/*编程练习1*/
//#include<stdio.h>
//double min(double x, double y);       
//int main(void)
//{
//	double a, b;
//	printf("输入两个小数，将输出较小的值（输入q退出）：\n");
//	while (scanf_s("%lf %lf", &a, &b)==2)
//	{
//		printf("%lf和%lf中较小的数是：%lf", a, b, min(a, b));
//		printf("继续输入进行比较（输入q退出）：\n");
//	}
//	getchar();
//	return 0;
//}
//double min(double x, double y)
//{
//	return x < y ? x : y;
//}
/*2*/
//#include<stdio.h>
//void chline(char ch, int i, int j);
//int main(void)
//{
//	char c;
//	int row;
//	int clum;
//	printf("该程序要求输入一个字符并按输入的行列数打印\n");
//	printf("输入你想打印的字符：");
//	scanf_s("%c", &c);
//	printf("输入你想打印的行和列（用空格分开）：");
//	scanf_s("%d %d", &row, &clum);
//	printf("\n");
//	chline(c, row, clum);
//	getchar();
//	getchar();
//	return 0;
//
//}
//void chline(char ch, int i, int j)
//{
//	for (int x = 0; x < i; x++)
//	{
//		for (int y = 0; y < j; y++)
//			putchar(ch);
//		putchar('\n');
//	}
//}
/*3*/
//#include<stdio.h>
//void chline(char ch, int i, int j);
//int main(void)
//{
//	char ch;
//	int row, clo;
//	printf("输入想要打印的字符：");
//	while ((ch=getchar())!='#')
//	{
//		if (ch == '\n')
//			continue;
//		printf("输入想要打印的次数和行数：");
//		if (scanf_s("%d %d", &clo, &row) != 2)
//			break;
//		chline(ch, clo, row);
//		printf("继续输入下一个想打印的字符（输入#退出）：");
//	}
//	getchar();
//	return 0;
//}
//void chline(char ch, int i, int j)
//{
//	for (int x = 0; x < i; x++)
//			{
//				for (int y = 0; y < j; y++)
//					putchar(ch);
//				putchar('\n');
//			}
//}
/*4*/
//#include<stdio.h>
//double Har_average(double num1, double num2);        //调和平均数
//int main(void)
//{
//	double a = 3.14, b = 3.15, c;
//	c=Har_average(a, b);
//	printf("%lf", c);
//	getchar();
//	return 0;
//}
//double Har_average(double num1, double num2)
//{
//	double down_num1, down_num2, down_avweage;
//	down_num1 = 1 / num1;
//	down_num2 = 1 / num2;
//	down_avweage = 1 / ((down_num1 + down_num2) / 2);
//	return down_avweage;
//}
/*5*/
//#include<stdio.h>
//void large_of(double *p1, double *p2);
//int main(void)
//{
//	double a, b;
//	printf("输入两个值：");
//	while (scanf_s("%lf %lf",&a,&b)==2)
//	{
//		large_of(&a, &b);
//		printf("交换后的值为%lf和%lf\n", a, b);
//		printf("继续输入（输入q退出）：");
//	}
//	getchar();
//	return 0;
//}
//void large_of(double *p1, double *p2)
//{
//	if (*p1 > *p2)
//		*p2 = *p1;
//	else
//		*p1 = *p2;
//}
/*6*/
//#include<stdio.h>
//void change(double *p1, double *p2, double*p3);
//int main(void)
//{
//	double a, b, c;
//	while (scanf_s("%lf %lf %lf", &a, &b,&c) == 3)
//			{
//				change(&a, &b, &c);
//				printf("交换后的值为%lf和%lf和%f\n", a, b,c);
//				printf("继续输入（输入q退出）：");
//			}
//			getchar();
//			return 0;
//}
//void change(double *p1, double *p2, double *p3)
//{
//	double max, min, mid;
//	max = *p1;
//	if (max < *p2)
//		max = *p2;
//	if (max < *p3)
//		max = *p3;
//	min = *p1;
//	if (min > *p2)
//		min = *p2;
//	if (min > *p3)
//		min = *p3;
//	mid = *p1 + *p2 + *p3 - max - min;
//	*p1 = min;
//	*p2 = mid;
//	*p3 = max;
//}
/*7*/
//#include<stdio.h>
//#include<ctype.h>
//int report(char ch);
//int main(void)
//{
//	char ch;
//	int pos;            //数值位置
//	printf("请输入字符：");
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch == '\n')
//		{
//			continue;
//		}
//		pos = report(ch);
//		if (pos == -1)
//		{
//			printf("%c不是字母！\n", ch);
//		}
//		else
//		{
//			printf("%c在字母表中的位置是%d!\n", ch, pos);
//		}
//		printf("继续输入:");
//	}
//	getchar();
//	return 0;
//}
//int report(char ch)
//{
//	if (isalpha(ch))                 //判断是否为字母
//	{
//		return toupper(ch) - 'A' + 1;       //将小写转换为大写；也可以将大写转换为小写，‘A’要改为‘a’
//	}
//	else
//	{
//		return -1;
//	}
//}
/*8*/
//#include<stdio.h>
//double power(double n, int p);
//int main(void)
//{
//	double x, xpow;
//	int exp;
//	printf("输入数字和指数，计算整数幂结果（q退出）：");
//	while (scanf_s("%lf %d",&x,&exp)==2)
//	{
//		xpow = power(x, exp);
//		if (xpow == 1)
//			continue;
//		printf("%.3g的%d次幂为%.5g\n", x, exp, xpow);
//		printf("继续输入（q退出）：");
//	}
//	getchar();
//	return 0;
//}
//double power(double n, int p)
//{
//	double pow = 1;
//	if (p == 0)
//	{
//		if (n==0)
//		{
//			printf("0的0次幂未定义，请输入其它值:\n");
//		}
//		pow = 1;
//	}
//	else if (p==0)
//	{
//		pow = 0;
//	}
//	else if (p>0)
//	{
//		for (int i = 1; i <= p; i++)
//		{
//			pow *= n;
//		}
//	}
//	else
//	{
//		pow = 1 / power(n, -p);     //运用了递归   
        /////////不用递归的写法：for(int i=1; i <= -p; i++)
         ////////////////////       {
//////////////////////////////			pow*=n;
//////////////////////////////	     }	      //此种方法返回的是 1/pow
//	}
//	return pow;
//}
/*9*/
//////上题所示/////////
/*10*/
//#include<stdio.h>
//void to_base_n(int x, int system);
//int main(void)
//{
//	int num;
//	int system_num;
//	int status;
//	printf("输入一个整数：");
//	while (scanf_s("%d",&num)==1)
//	{
//		printf("输入进制（2-10）:");
//		while ((status=scanf_s("%d",&system_num))==1&&(system_num<2||system_num>10))
//		{
//			printf("输入进制超过限定值，请输入2-10之间的数字：");
//		}
//		if (status != 1)
//			break;
//		to_base_n(num, system_num);
//		printf("\n");
//		printf("继续输入一个整数（q退出）：");
//	}
//	getchar();
//	return 0;
//}
//void to_base_n(int x, int system)
//{
//	int r;
//	r = x % system;
//	if (x >= system)
//	{
//		to_base_n(x / system, system);           //递归
//	}
//	putchar('0' + r);           //因为putchar()函数只能输出字符，我们要输出的是字符，所以运用ASCALL码值加上r
//}
/*11*/
#include<stdio.h>
void Fibonacci(int n);
int main(void)
{
	int n;
	printf("输入整数：");
	while ((scanf_s("%d",&n)==1))
	{
		Fibonacci(n);
		printf("继续输入（q退出）：");
	}
	getchar();
	return 0;
}
void Fibonacci(int n)
{
	int f1, f2, f3;
	printf("斐波那契是：");
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			f1 = 1;
			printf("%d", f1);
		}
		else if (i==2)
		{
			f2 = 1;
			printf("%d", f2);
		}
		else
		{
			f3 = f2 + f1;
			f1 = f2;
			f2 = f3;
			printf("%d", f3);
		}
		putchar(' ');
	}
	putchar('\n');
}