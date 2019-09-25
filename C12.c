/****************�����ϰ12**************************/
/*1*/
/*#include<stdio.h>

int critic(void);

int main(void)
{
	int units;

	puts("�����������ֵ���٣�");
	scanf_s("%d", &units);
	while (units != 100)
	{
		units = critic();            //�˴�Ҫ���¶�units��ֵ�������һ�δ���һֱѭ��
	}
	puts("����ˣ�");
	system("pause");
	return 0;
}
int critic(void)
{
	int u;
	puts("�ٴγ������룺");
	scanf_s("%d", &u);
	return u;
}*/
/*2*/
/*
/////////////////////pe12-2a.h///////////////////////////
#define METRIC 0     //����
#define US 1         //����

void set_mode(int n);
void get_info(void);
void show_info(void);
////////////////////////pe12-2a.c////////////////////////
#include<stdio.h>
#include"pe12-2a.h"

static int mode;                    //3�������ļ��������ڲ����ӵı���
static float distance;
static float fuel;

void set_mode(int n)
{
	if (mode != METRIC && mode != US)         //�ݴ��������벻��ȷģʽ����ʾ��Ϣ��ʹ���ϴ��������ȷģʽ
	{
		printf("�����ڵ�ģʽ����ʹ��ģʽ%d", n);
		printf("��ʹ��֮ǰ�������ȷģʽ��\n");
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
		printf("������루��λ��ǧ�ף���");
		scanf_s("%f", &distance);
		printf("�����ͺģ���λ��������");
		scanf_s("%f", &fuel);
	}
	else
	{
		printf("������루��λ��Ӣ���");
		scanf_s("%f", &distance);
		printf("�����ͺģ���λ�����أ���");
		scanf_s("%f", &fuel);
	}
}
void show_info(void)
{
	if (mode == METRIC)
	{
		printf("ÿ�ٹ����ͺģ�%.2f", fuel / (distance / 100));
		puts("��/100����");
	}
	else
	{
		printf("ÿӢ���ͺģ�%.2f", distance / fuel);
		puts("Ӣ��/����");
	}
}
/////////////////////////////pe12-2b.c/////////////////////
#include<stdio.h>
#include"pe12-2a.h"
int main(void)
{
	int mode;

	printf("����0ѡ����ģʽ������1ѡ������ģʽ��");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("����0ѡ����ģʽ������1ѡ������ģʽ(����-1�˳�)��");
		scanf_s("%d", &mode);
	}
	system("pause");
	return 0;
}*/
/*3*/
/*/////////////////////////////pe12-3a.h/////////////////////////////////////
#define METRIC 0     //����
#define US 1         //����
#define USE_MODE 2    //֮ǰʹ�õ�ģʽ

void set_mode(int *mode);
void get_info(int mode, float *pdistance, float *pfuel);
void show_info(int mode, float distance, float fuel);

////////////////////////pe12-3a.c/////////////////////////////////
#include<stdio.h>
#include"pe12-3a.h"

void set_mode(int *mode)
{

	if (*mode != METRIC && *mode != US)         //�ݴ��������벻��ȷģʽ����ʾ��Ϣ��ʹ���ϴ��������ȷģʽ
	{
		printf("�����ڵ�ģʽ����ʹ��ģʽ%d", *mode);
		printf("��ʹ��֮ǰ�������ȷģʽ��\n");
		*mode = USE_MODE;
	}
}
void get_info(int mode, float *pdistance, float *pfuel)
{
	if (mode == METRIC)
	{
		printf("������루��λ��ǧ�ף���");
		scanf_s("%f", pdistance);
		printf("�����ͺģ���λ��������");
		scanf_s("%f", pfuel);
	}
	else
	{
		printf("������루��λ��Ӣ���");
		scanf_s("%f", pdistance);
		printf("�����ͺģ���λ�����أ���");
		scanf_s("%f", pfuel);
	}
}
void show_info(int mode, float distance, float fuel)
{
	if (mode == METRIC)
	{
		printf("ÿ�ٹ����ͺģ�%.2f", fuel / (distance / 100));
		puts("��/100����");
	}
	else
	{
		printf("ÿӢ���ͺģ�%.2f", distance / fuel);
		puts("Ӣ��/����");
	}
}

////////////////////////pe12-3b.c////////////////////////////////
#include<stdio.h>
#include"pe12-3a.h"
int main(void)
{
	int mode;
	int rec_mode = METRIC;        //��ʼ��ǰһ����ȷʹ�õ�ģʽ
	float distance, fuel;

	printf("����0ѡ����ģʽ������1ѡ������ģʽ��");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		set_mode(&mode);              //����ֵ��Ҫ�õ�ַ
		if (mode == USE_MODE)
		{
			mode = rec_mode;             //ǰһ����ȷʹ�õ�ģʽ
		}
		get_info(mode,&distance,&fuel);
		show_info(mode,distance,fuel);
		printf("����0ѡ����ģʽ������1ѡ������ģʽ(����-1�˳�)��");
		scanf_s("%d", &mode);
	}
	system("pause");
	return 0;
}*/
/*4*/
/*#include<stdio.h>
int times(void);      //����

int main(void)
{
	int count;
	int num;
	
	puts("�������д�����");
	while (scanf_s("%d",&num) == 1 && num > 0)
	{
		while (num--)
		{
			count = times();
		}
		printf("������������%d�Ρ�\n", count);
		puts("�������д���(-1�˳�)��");
	}
	system("pause");
	return 0;
}
int times(void)
{
	static int count;             //��֤countֻ��ʼ��һ��,ʹ�ö������ֵ���
	count++;
	return count;
}*/
/*5*/
/*#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

void sort_arry(int array[], int limit);        //������

int main(void)
{
	int arr[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 + 1;            //�����������ֵ������arr[]
	}

	puts("ԭʼ���飺");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d\t", arr[i]);
		if (i % 10 == 9)
			putchar('\n');
	}
	puts("\n��������飺");
	sort_arry(arr, SIZE);
	for ( i = 0; i < SIZE; i++)
	{
		printf("%d\t", arr[i]);
		if (i % 10 == 9)           //��һ�в��ܳ���10��
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

#define SIZE 10           //�������Χ
#define MAX 1000          //����

int main(void)
{
	int array[SIZE] = { 0 };
	int i, num;
	srand((unsigned int)time(0));           //�������������

	for ( i = 0; i < MAX; i++)
	{
		num = rand() % 10 + 1;            //�������������Ϊrand()%10ȡ�����0-9֮�������������+1����1-10�����
		                       
		switch (num)                     //��switch��ѡ��1-10֮�����
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
		printf("%d������%d��\n", i + 1, array[i]);
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
	int sets;           //������
	int sides, dice;    //���������͸���
	int i,j,sum;            //������

	srand((unsigned int)time(0));   //����� rand()
	printf("���뼯������q�˳���");
	while (scanf_s("%d",&sets) == 1 && sets > 0)
	{
		printf("�������ӵ����������Ӹ�����");
		if (scanf_s("%d%d",&sides,&dice) != 2)    //�ݴ���
		{
			puts("��������������룡");
			break;
		}
		printf("��������%d��%d������%d�Σ�%d��%d��%d�����ӵ�ÿ�ε���֮�ͣ�\n",
			dice, sides, sets, sets, dice, sides);
		for ( i = 0; i < sets; i++)
		{
			for ( j = 0, sum = 0; j < dice; j++)   //ÿ����һ�ε���֮�ͺ�����´����Ҫ��ʼ��
				sum += rand() % 6 + 1;                //��������6������������ֵ���
			printf("%4d", sum);
			if (i % 5 == 4)                     //һ�д�ӡ�������ݣ�����
				putchar('\n');
		}
		putchar('\n');
		printf("���뼯������q�˳���");
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

	printf("���������С: ");
	scanf_s("%d", &size);
	while (size > 0)
	{
		printf("�����ʼ��ֵ: ");
		scanf_s("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("���������С (<1 �˳�): ");
		scanf_s("%d", &size);
	}
	system("pause");
	return 0;
}
int * make_array(int elem, int val)
{
	int *pt;                   //����һ��ָ��

	pt = (int *)malloc(sizeof(int)*elem);   //Ϊ�������һ���ڴ棬���ڴ洢������ֵ������ָ��ptָ����
	for (int i = 0; i < elem; i++)          //Ϊ���鸳ֵ
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
		if (i % 8 == 7)          //һ����ʾ8������
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

	printf("���뵥�ʸ�����");
	scanf_s("%d", &words);
	getchar();                //���˻س�
	printf("����%d�����ʣ�\n", words);
	str = array(words);
	puts("����Ϊ������ĵ��ʣ�");
	for (int i = 0; i < words; i++)
	{
		puts(str[i]);
		free(str[i]);      //�ͷ�ÿ��ָ��ָ����ڴ�
	}
	free(str);             //�ͷ�ָ������
	system("pause");
	return 0;
}
char * *array(int n)
{
	char * *pt;
	char ch;
	int i, j;

	pt = (char * *)malloc(n * sizeof(char *));          //��n��ָ����䶯̬�ڴ棬����ָ���ָ��
	for ( i = 0; i < n; i++)
	{
		pt[i] = (char *)malloc(SIZE * sizeof(char));       //��ÿ��ָ��ָ��ĵ�ַ�����ڴ�

		while (isspace(ch = getchar()))               //����ո�
		{
			continue;
		}
		pt[i][0] = ch;                       //�������ַ�
		j = 1;
		while (!isspace(pt[i][j] = getchar()))
		{
			j++;
		}
		pt[i][j] = '\0';                  //ĩβ�ո��滻Ϊ��\0��
	}
	return pt;
}