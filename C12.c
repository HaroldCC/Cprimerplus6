/****************编程练习12**************************/
/*1*/
/*#include<stdio.h>

int critic(void);

int main(void)
{
	int units;

	puts("最大的人民币面值多少？");
	scanf_s("%d", &units);
	while (units != 100)
	{
		units = critic();            //此处要重新对units赋值，否则第一次错误将一直循环
	}
	puts("答对了！");
	system("pause");
	return 0;
}
int critic(void)
{
	int u;
	puts("再次尝试输入：");
	scanf_s("%d", &u);
	return u;
}*/
/*2*/
/*
/////////////////////pe12-2a.h///////////////////////////
#define METRIC 0     //公制
#define US 1         //美制

void set_mode(int n);
void get_info(void);
void show_info(void);
////////////////////////pe12-2a.c////////////////////////
#include<stdio.h>
#include"pe12-2a.h"

static int mode;                    //3个具有文件作用域，内部链接的变量
static float distance;
static float fuel;

void set_mode(int n)
{
	if (mode != METRIC && mode != US)         //容错处理，当输入不正确模式，提示消息并使用上次输入的正确模式
	{
		printf("不存在的模式，将使用模式%d", n);
		printf("将使用之前输入的正确模式。\n");
		mode = US;
	}
	else
	{
		mode = n;
	}
}
void get_info(void)
{
	if (mode == METRIC)
	{
		printf("输入距离（单位：千米）：");
		scanf_s("%f", &distance);
		printf("输入油耗（单位：升）：");
		scanf_s("%f", &fuel);
	}
	else
	{
		printf("输入距离（单位：英里）：");
		scanf_s("%f", &distance);
		printf("输入油耗（单位：加仑）：");
		scanf_s("%f", &fuel);
	}
}
void show_info(void)
{
	if (mode == METRIC)
	{
		printf("每百公里油耗：%.2f", fuel / (distance / 100));
		puts("升/100公里");
	}
	else
	{
		printf("每英里油耗：%.2f", distance / fuel);
		puts("英里/加仑");
	}
}
/////////////////////////////pe12-2b.c/////////////////////
#include<stdio.h>
#include"pe12-2a.h"
int main(void)
{
	int mode;

	printf("输入0选择公制模式，输入1选择美制模式：");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("输入0选择公制模式，输入1选择美制模式(输入-1退出)：");
		scanf_s("%d", &mode);
	}
	system("pause");
	return 0;
}*/
/*3*/
/*/////////////////////////////pe12-3a.h/////////////////////////////////////
#define METRIC 0     //公制
#define US 1         //美制
#define USE_MODE 2    //之前使用的模式

void set_mode(int *mode);
void get_info(int mode, float *pdistance, float *pfuel);
void show_info(int mode, float distance, float fuel);

////////////////////////pe12-3a.c/////////////////////////////////
#include<stdio.h>
#include"pe12-3a.h"

void set_mode(int *mode)
{

	if (*mode != METRIC && *mode != US)         //容错处理，当输入不正确模式，提示消息并使用上次输入的正确模式
	{
		printf("不存在的模式，将使用模式%d", *mode);
		printf("将使用之前输入的正确模式。\n");
		*mode = USE_MODE;
	}
}
void get_info(int mode, float *pdistance, float *pfuel)
{
	if (mode == METRIC)
	{
		printf("输入距离（单位：千米）：");
		scanf_s("%f", pdistance);
		printf("输入油耗（单位：升）：");
		scanf_s("%f", pfuel);
	}
	else
	{
		printf("输入距离（单位：英里）：");
		scanf_s("%f", pdistance);
		printf("输入油耗（单位：加仑）：");
		scanf_s("%f", pfuel);
	}
}
void show_info(int mode, float distance, float fuel)
{
	if (mode == METRIC)
	{
		printf("每百公里油耗：%.2f", fuel / (distance / 100));
		puts("升/100公里");
	}
	else
	{
		printf("每英里油耗：%.2f", distance / fuel);
		puts("英里/加仑");
	}
}

////////////////////////pe12-3b.c////////////////////////////////
#include<stdio.h>
#include"pe12-3a.h"
int main(void)
{
	int mode;
	int rec_mode = METRIC;        //初始化前一步正确使用的模式
	float distance, fuel;

	printf("输入0选择公制模式，输入1选择美制模式：");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		set_mode(&mode);              //传递值，要用地址
		if (mode == USE_MODE)
		{
			mode = rec_mode;             //前一步正确使用的模式
		}
		get_info(mode,&distance,&fuel);
		show_info(mode,distance,fuel);
		printf("输入0选择公制模式，输入1选择美制模式(输入-1退出)：");
		scanf_s("%d", &mode);
	}
	system("pause");
	return 0;
}*/
/*4*/
/*#include<stdio.h>
int times(void);      //函数

int main(void)
{
	int count;
	int num;
	
	puts("输入运行次数：");
	while (scanf_s("%d",&num) == 1 && num > 0)
	{
		while (num--)
		{
			count = times();
		}
		printf("函数被调用了%d次。\n", count);
		puts("输入运行次数(-1退出)：");
	}
	system("pause");
	return 0;
}
int times(void)
{
	static int count;             //保证count只初始化一次,使得多次输入值相加
	count++;
	return count;
}*/
/*5*/
/*#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

void sort_arry(int array[], int limit);        //排序函数

int main(void)
{
	int arr[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 + 1;            //生成随机数赋值给数组arr[]
	}

	puts("原始数组：");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d\t", arr[i]);
		if (i % 10 == 9)
			putchar('\n');
	}
	puts("\n排序后数组：");
	sort_arry(arr, SIZE);
	for ( i = 0; i < SIZE; i++)
	{
		printf("%d\t", arr[i]);
		if (i % 10 == 9)           //当一行不能超过10个
			putchar('\n');
	}
	putchar('\n');
	system("pause");
	return 0;
}

void sort_arry(int array[], int limit)
{
	int top, search, temp;
	for (int top = 0; top < limit - 1; top++)
	{
		for (search= top +1; search < limit; search++)
		{
			if (array[search] > array[top])
			{
				temp = array[search];
				array[search] = array[top];
				array[top] = temp;
			}
		}
	}
}*/
/*6*/
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10           //随机数范围
#define MAX 1000          //个数

int main(void)
{
	int array[SIZE] = { 0 };
	int i, num;
	srand((unsigned int)time(0));           //重置随机数种子

	for ( i = 0; i < MAX; i++)
	{
		num = rand() % 10 + 1;            //产生随机数，因为rand()%10取余求得0-9之间的随机数，因此+1产生1-10随机数
		                       
		switch (num)                     //用switch来选择1-10之间的数
		{
		case 1:array[0]++; break;
		case 2:array[1]++; break;
		case 3:array[2]++; break;
		case 4:array[3]++; break;
		case 5:array[4]++; break;
		case 6:array[5]++; break;
		case 7:array[6]++; break;
		case 8:array[7]++; break;
		case 9:array[8]++; break;
		case 10:array[9]++; break;
		default:
			break;
		}

	}
	for ( i = 0; i < SIZE; i++)
	{
		printf("%d出现了%d次\n", i + 1, array[i]);
	}

	system("pause");
	return 0;
}*/
/*7*/
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int sets;           //集合数
	int sides, dice;    //骰子面数和个数
	int i,j,sum;            //点数和

	srand((unsigned int)time(0));   //随机化 rand()
	printf("输入集合数，q退出：");
	while (scanf_s("%d",&sets) == 1 && sets > 0)
	{
		printf("输入骰子的面数和骰子个数：");
		if (scanf_s("%d%d",&sides,&dice) != 2)    //容错处理
		{
			puts("输入错误，重新输入！");
			break;
		}
		printf("下面是掷%d个%d面骰子%d次，%d次%d个%d面骰子的每次点数之和：\n",
			dice, sides, sets, sets, dice, sides);
		for ( i = 0; i < sets; i++)
		{
			for ( j = 0, sum = 0; j < dice; j++)   //每次求一次点数之和后进行下次求和要初始化
				sum += rand() % 6 + 1;                //计数，求6个面产生的随机值相加
			printf("%4d", sum);
			if (i % 5 == 4)                     //一行打印五组数据，换行
				putchar('\n');
		}
		putchar('\n');
		printf("输入集合数，q退出：");
	}
	system("pause");
	return 0;
}*/
/*8*/
//pe12-8.c
/*#include<stdio.h>
#include<stdlib.h>
int * make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void)
{
	int * pa;
	int size;
	int value;

	printf("输入数组大小: ");
	scanf_s("%d", &size);
	while (size > 0)
	{
		printf("输入初始化值: ");
		scanf_s("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("输入数组大小 (<1 退出): ");
		scanf_s("%d", &size);
	}
	system("pause");
	return 0;
}
int * make_array(int elem, int val)
{
	int *pt;                   //声明一个指针

	pt = (int *)malloc(sizeof(int)*elem);   //为数组分配一块内存，用于存储整型数值，并让指针pt指向它
	for (int i = 0; i < elem; i++)          //为数组赋值
	{
		pt[i] = val;
	}
	return pt;
}
void show_array(const int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%4d", ar[i]);
		if (i % 8 == 7)          //一行显示8个数据
			putchar('\n');
	}
	putchar('\n');
}*/
/*9*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 68

char * *array(int n);

int main(void)
{
	int words;
	char * *str;

	printf("输入单词个数：");
	scanf_s("%d", &words);
	getchar();                //过滤回车
	printf("输入%d个单词：\n", words);
	str = array(words);
	puts("下列为你输入的单词：");
	for (int i = 0; i < words; i++)
	{
		puts(str[i]);
		free(str[i]);      //释放每个指针指向的内存
	}
	free(str);             //释放指针数组
	system("pause");
	return 0;
}
char * *array(int n)
{
	char * *pt;
	char ch;
	int i, j;

	pt = (char * *)malloc(n * sizeof(char *));          //给n个指针分配动态内存，返回指针的指针
	for ( i = 0; i < n; i++)
	{
		pt[i] = (char *)malloc(SIZE * sizeof(char));       //给每个指针指向的地址分配内存

		while (isspace(ch = getchar()))               //处理空格
		{
			continue;
		}
		pt[i][0] = ch;                       //单词首字符
		j = 1;
		while (!isspace(pt[i][j] = getchar()))
		{
			j++;
		}
		pt[i][j] = '\0';                  //末尾空格替换为‘\0’
	}
	return pt;
}