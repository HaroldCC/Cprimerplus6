/****�����ϰ****/
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
	printf("����һ����д��ĸ��\n");
	scanf_s("%c", &end);
	printf("  ��ĸ������\n");
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
	printf("���뿪ʼ�����֣�\n");
	scanf_s("%d", &start);
	printf("����������֣�\n");
	scanf_s("%d", &end);
	printf("ԭ��\tƽ��\t����\n");
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
	printf("������һ�����ʣ�\n");
	scanf_s("%s", word, 40);
	printf("�õ�����%d����ĸ��������%s\n", strlen(word), word);
	printf("����Ϊ��");
	for (i = strlen(word - 1);i >= 0;i--)//strlen(word - 1)�����ַ�������Ŀո�
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
	int status;//����״̬
	printf("����2��������������q�˳�����\n");
	while (scanf_s("%lf%lf", &a, &b) == 2)//��֤�Ƿ�������2��ֵ
	{
		printf("�����%.3lf", (a - b) / (a*b));
		printf("��������2��������������q�˳�����\n");
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
	int status;//����״̬
	printf("����2��������������q�˳�����\n");
	while (scanf_s("%lf%lf", &a, &b) == 2)//��֤�Ƿ�������2��ֵ
	{
		printf("�����%.3lf", result(a,b));
		printf("��������2��������������q�˳�����\n");
	}
	getchar();
	return 0;
}
float result(float a, float b)
{
	float result;//result���Ʋ�Ψһ
	result = (a - b) / (a*b);
	return result;
}*/
/*10*/
/*#include<stdio.h>
int main(void)
{
	int up, down;//���޺�����
	printf("������������������������\n");
	scanf_s("%d %d", &up, &down);
	while (up>down)
	{
		int sum = 0;//��ʼ��ƽ����sum
		for (int i = sum;i <= up;i++)
			sum = sum + i * i;
		printf("ƽ���ʹ�%d��%d��%d\n", up*up, down*down, sum);
		printf("����������������������������\n");
		scanf_s("%d %d", &up, &down);
	}
	printf("������\n");
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
	float count1 = 1.0f;//��ĸ
	float count2 = 1.0f;//��ĸ
	float sum1 = 0.0;
	float sum2 = 0.0;
	printf("����������(����0�����˳�):\n");
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
	printf("��һ����ʽ�ļ�����Ϊ��%f\n", sum1);
	printf("�ڶ�����ʽ�ļ�����Ϊ��%f\n", sum2);
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

	printf("����ֵ��\n");
	for (i = 0;i < SIZE;i++)
		scanf_s("%lf", &arry1[i]);//�����һ������
	arry2[0] = arry1[0];//��ʼ���ڶ�������
	for (i = 1;i < SIZE;i++)
		arry2[i] = arry2[i - 1] + arry1[i];//����ڶ���Ԫ�����֮��
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
	printf("����һ�����ʣ�\n");
	do
	{
		i++;//��arry[0]��ʼѭ������
		scanf_s("%c", &arry[i]);
	} while (arry[i]!='\n');
	for (;i >= 0;i--)
		printf("%c", arry[i]);
	getchar();
	return 0;
}*/
/*16*/
/*#include<stdio.h>
#define Daphne_RATE 0.10    //Daphne����
#define Deiedre_RATE 0.05   //Deiedre����
#define MONEY 100.0        //Ͷ��100Ԫ
int main(void)
{
	int year=0;
	double Daphne_money=MONEY;   //Daphne��Ͷ�ʶ�
	double Deiedre_money=MONEY;  //Deiedre��Ͷ�ʶ�
	while (Deiedre_money <= Daphne_money)   //��DeiedreͶ�ʶ��Daphne��Ͷ�ʶ��˳�ѭ��
	{
		year++;
		Daphne_money = Daphne_money + MONEY * Daphne_RATE;
		Deiedre_money = Deiedre_money + Deiedre_money * Deiedre_RATE;
	}
	printf("����%d��Deiedre��Ͷ�ʶ��Daphne��Ͷ�ʶ�\n", year);
	printf("Daphne��Ͷ�ʶ�Ϊ��%f\tDeiedre��Ͷ�ʶ�Ϊ%f\n", Daphne_money, Deiedre_money);
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
	printf("%d���Chuckie��ȡ���˻����Ǯ\n", year);
	getchar();
	return 0;
}*/
/*18*/
#include<stdio.h>
#define DB_NUMBER 150    //�˰���
int main(void)
{
	int weeks = 1;
	int friends = 5;
	while (friends<DB_NUMBER)
	{
		friends = (friends - weeks) * 2;
		printf("%d�ܺ�Rabnud��ʿ��%d������\n", weeks, friends);
		weeks++;
	}
	getchar();
	return 0;
}
