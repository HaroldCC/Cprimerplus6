//（递归）母牛的故事
//N     有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
#include<stdio.h>
#define YEAR 55
int cow[YEAR];

int Fun(int year);

int main(void)
{
	int n;
	int input[YEAR];

	Fun(YEAR);

	while (scanf("%d", &n) && n != 0)
	{
		for (int i = 0; i < YEAR; i++)
		{
			if (i < 4)
			{
				printf("%d\n",cow[input[i]]);
			}
			else
			{
				printf("%d\n",cow[input[i]-1] + cow[input[i]- 3]);
			}
			
		}
	}
	return 0;
}

int Fun(int year)
{
	for (int i = 1; i < year; i++)
	{
		if (year < 4)
		{
			return cow[year] = year;
		}
		else
		{
			return cow[year] = cow[i - 1] + cow[i - 3];
		}
	}
}
//有一个函数
//y={ x      x<1
//    | 2x-1   1<=x<10
//    \ 3x-11  x>=10
//写一段程序，输入x，输出y
#include<stdio.h>
int main(void)
{
	int x,y;

	scanf("%d",&x);
	if (x < 1)
	{
		y = x;
	}
	else if(x >= 1 && x < 10)
	{
		y = 2*x-1;
	}
	else
	{
		y = 3*x -11;
	}
	printf("%d\n",y);
	return 0; 
}
//给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 90分以及90分以上为A，80-89分为B，70-79分为C，60-69分为D，60分以下为E。
#include<stdio.h>
int main(void)
{
	int grade;

	scanf("%d",&grade);
	switch (grade / 10)
	{
	case 10:putchar('A');break;
	case 9:putchar('A');break;
	case 8:putchar('B');break;
	case 7:putchar('C');break;
	case 6:putchar('D');break;	
	default:putchar('E');
		break;
	}
	return 0;
}
//N       给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num;
	int count;
	int a;             //位数
	int status;
	int array[5]={0},i,j,t;

	status = scanf("%d",&num);
	while(status == 1)
	{
		a = log10(num) + 1;
		printf("%d\n",a);               //位数

		for ( i = a -1,j = 0; i >= a,j < a; i--, j++)
		{
			t = num * 1.0 / ((int)pow(10,i));
			array[j] = t;
			num = num - t * ((int)pow(10,i));
			if(num == 0)
			{
				array[j + 1] = 0;
				break;
			}
		}
		for ( i = 0; i <= a - 1; i++)            //原顺序输出
		{
			printf("%d",array[i]);
		}
		printf("\n");

		for ( i = a - 1; i >= 0; i--)              //逆序输出
		{
			printf("%d",array[i]);
		}
		printf("\n");
		scanf("%d",&num);
	}
	return 0;
}
/* 企业发放的奖金根据利润提成。利润低于或等于100000元的，奖金可提10%;
利润高于100000元，低于200000元（100000<I≤200000）时，低于100000元的部分按10％提成，高于100000元的部分，可提成 7.5%;
200000<I≤400000时，低于200000元部分仍按上述办法提成，（下同），高于200000元的部分按5％提成；
400000<I≤600000元时，高于400000元的部分按3％提成；

600000<I≤1000000时，高于600000元的部分按1.5%提成；
I>1000000时，超过1000000元的部分按1%提成。从键盘输入当月利润I,求应发奖金总数。*/
#include<stdio.h>
#define LEVEL1 100000
#define LEVEL2 200000
#define LEVEL3 400000
#define LEVEL4 600000
#define LEVEL5 1000000
#define EXTER1 0.1
#define EXTER2 0.075
#define EXTER3 0.05
#define EXTER4 0.03
#define EXTER5 0.015
#define EXTER6 0.01

int main(void)
{
	int I;
	int input;         //输入利润
	int money;         //奖金
	scanf("%d",&input);
	//input = input / 100000;    //不需要这一步，会损失精度
	switch (input / 100000)
	{
	case 0:money = input * EXTER1; //printf("%d",money);
		break;
	case 1:money = LEVEL1 * EXTER1 + (input - LEVEL1) * EXTER2;
		//printf("%d", money);
		break;
	case 2:
	case 3:
	case 4:money = LEVEL1 * EXTER1 + LEVEL2 * EXTER2 + (input - LEVEL1 - LEVEL2) * EXTER3;
		//printf("%d", money); 
		break;
	case 5:
	case 6:money = LEVEL1 * EXTER1 + LEVEL2 * EXTER2 + LEVEL3 * EXTER3 + (input - LEVEL1 - LEVEL2 - LEVEL3) * EXTER4;
		//printf("%d", money);
		break;
	case 7:
	case 8:
	case 9:money = LEVEL1 * EXTER1 + LEVEL2 * EXTER2 + LEVEL3 * EXTER3 + LEVEL4 * EXTER4 + (input - LEVEL1 - LEVEL2 - LEVEL3 - LEVEL4) * EXTER5;
		//printf("%d", money);
		break;
	default:
		money = LEVEL1 * EXTER1 + LEVEL2 * EXTER2 + LEVEL3 * EXTER3 + LEVEL4 * EXTER4 + LEVEL5 * EXTER5 + (input - LEVEL1 - LEVEL2 - LEVEL3 - LEVEL4 - LEVEL5) * EXTER6;
		//printf("%d", money);
		break;
	}
	printf("%d\n", money);
	return 0;
}
//输入两个正整数m和n，求其最大公约数和最小公倍数。
#include<stdio.h>
int main(void)
{
	int max, min;            //最大公约数与最小公倍数
	int num1, num2;          //输入值
	int i;

	scanf("%d %d", &num1, &num2);

	min = (num1 > num2) ? num1 : num2;

	if (num1 % num2 == 0)       //num1 与 num2为倍数关系
	{
		max = num2;
		min = num1;
	}
	else                        //num1 与 num2不为倍数关系
	{         //最大公因数
		for (i = 1; i < num2; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				max = i;
			}
		}
	}
	//最小公倍数
	while (1)
	{
		if (min % num1 == 0 && min % num2 == 0)
		{
			break;
		}
		++min;
	}
	printf("%d %d\n", max, min);
	return 0;
}
//输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	int a_count = 0;
	int dig_count = 0;
	int spa_count = 0;
	int oth_count = 0;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			a_count ++;
		else if (isdigit(ch))
			dig_count ++;
		else if (isspace(ch))
			spa_count ++;
		else
			oth_count ++;
	}
	printf("%d %d %d %d", a_count, dig_count, spa_count, oth_count);

	return 0;
}
//求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。 例如，n=5时=2+22+222+2222+22222，n由键盘输入。
#include<stdio.h>
int main(void)
{
	int a = 0;
	int n;
	int Sn = 0;
	
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
	{
		a=  a * 10+ 2;
		Sn = Sn + a;
	}
	printf("%d",Sn);
	
	return 0;
}
//求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
#include<stdio.h>

int main(void)
{
	long long unsigned Sn = 0;
	int num;
	long long unsigned n = 1;
	scanf("%d",&num);
	for (int i = 1; i <= num; i++)
	{
		n =  n * i;
		Sn = Sn + n;
	}
	printf("%llu",Sn);
	return 0;
}
//求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
#include<stdio.h>
int main(void)
{
	double a,b,c;
	double sum1 = 0,sum2 = 0,sum3 = 0;
	double sumtotal = 0;
	double i;                             //要定义为double，以防精度缺失
	scanf("%lf %lf %lf",&a,&b,&c);
	for ( i = 1; i <= a; i++)
	{
		sum1 = sum1 + i;
	}
	for ( i = 1; i <= b; i++)
	{
		sum2 = sum2 + i * i;
	}
	for ( i = 1; i <= c; i++)
	{
		sum3 = sum3 + 1 / i;
	}
	sumtotal = sum1 + sum2 + sum3;
	printf("%.2lf",sumtotal);
	return 0;
}
//打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。 例如：153是一个水仙花数，因为153=1^3+5^3+3^3。
#include<stdio.h>

int main(void)
{
	int a,b,c;
	int i;
	for ( i = 100; i <1000;i++)         //三位数，范围100~999
	{
		a = i / 100;         
		b = i / 10 % 10;
		c = i % 10;
		
		if(a*a*a + b*b*b + c*c*c == i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
//一个数如果恰好等于不包含它本身所有因子之和，这个数就称为"完数"。 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 编程序找出N之内的所有完数，并按下面格式输出其因子
#include<stdio.h>
int main(void)
{
	long double N;
	int sum = 0;
	scanf("%lf",&N);
	for(int i = 2; i <= N; i++)
	{
		for (int j = 1; j <= i/2; j++)
		{
			if(i % j == 0)
			{
				sum = sum + j;
			}
		}
		if(sum == i)
		{
			printf("%d its factors are ",i);
			for(int index = 1; index <= i / 2;index++)
			{
				if(i % index == 0)
				{
					printf("%d ",index);
				}
			}
			putchar('\n');
		}
		sum = 0;
	}
	
	return 0;
}
//有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
#include<stdio.h>
int main(void)
{
	int N;
	double down = 1,up = 2,sum = 2;
	scanf("%d",&N);
	for (int i = 1; i < N; i++)
	{
		up = down + up;
		down = up - down;
		sum = sum + up / down;
	}
	printf("%.2lf",sum);
	return 0;
}
//一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
#include<stdio.h>
int main(void)
{
	double m,pass = 0;
	int n;
	scanf("%lf %d", &m, &n);
	for (int i = 0; i < n; i++)
	{
		m = m / 2;
		pass = pass + 3 * m;     //>??????
	}
	printf("%.2lf %.2lf", m, pass - m);

	return 0;
}
//猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。 第二天早上又将剩下的桃子吃掉一半，又多吃一个。以后每天早上都吃了前一天剩下的一半零一个。 到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。
#include<stdio.h>
int main(void)
{
	int n;
	int sum = 1;
	scanf("%d",&n);
	for (int i = 1; i < n; i++)
	{
		sum =2 *( sum + 1);
	}
	printf("%d",sum);
	return 0;
}
//用迭代法求 平方根
//公式：求a的平方根的迭代公式为： X[n+1]=(X[n]+a/X[n])/2 要求前后两次求出的差的绝对值少于0.00001。 输出保留3位小数
#include<stdio.h>
#include<math.h>                    //for  fabs()返回绝对值
int main(void)
{
	double x = 1,x1 = 0;              //设x[n+1]为x，设x[n]为x1
	int a;
	scanf("%d",&a);
	while(fabs(x - x1) > 1e-5)
	{
		x1 = x;
		x = (x1 + a / x1) / 2;
	}
	printf("%.3lf",x);
	return 0;
}
//用简单素数筛选法求N以内的素数。
#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0 && i != j)
				break;
			if (i % j == 0 && i == j )
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}
//用选择法对10个整数从小到大排序。
#include<stdio.h>
int main(void)
{
	int num[10];
	int i, j, temp;
	for ( i = 0; i < 10; i++)
	{
		scanf("%d",&num[i]);
	}
	for ( i = 0; i < 9; i++)
	{
		for ( j = 0; j < 9 - i; j++)
		{
			if(num[j] > num[j+1])
			{
				temp = num[j];
				num[j] = num[j+ 1];
				num[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}