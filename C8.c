/****�����ϰ****/
/*1*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	int a = 0;
	while ((ch=getchar())!=EOF)
		a++;
	printf("��ȡ��%d���ַ���\n", a);
	getchar();
	return 0;
}*/
/*2*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	int i=0;            //ͳ��ÿ�е�ֵ
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
	                             //ͳ�Ƹ������ò�������
	unsigned A_count = 0;        //��д
	unsigned a_count = 0;        //Сд
	unsigned oth_count = 0;       //�����ַ�����
	while ((ch=getchar())!=EOF)
	{
		//if (isupper(ch))         //��isupper()�����ж��Ƿ�Ϊ��д
		if(ch>='A'&&ch<='Z')       //�����ø����滻��һ�У����ַ��������ٵ���ctype.h
			A_count++;
		else if (islower(ch))      //��islower()�����ж��Ƿ�ΪСд	
			a_count++;
		else
			oth_count++;
	}
	printf("�����д�д��ĸ��%d��\n", A_count);
	printf("Сд��ĸ��%d��\n", a_count);
	printf("�����ַ���%d��\n", oth_count);
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
	int words = 0, count = 0;      //����   ��ĸ����
	bool inword = false;           //�ж��Ƿ���һ������
	float average;
	while ((ch=getchar())!=EOF)
	{
		if (isalpha(ch))
			count++;               //����Ǹ��ַ�����ĸ+1
		if (!isspace(ch) && !inword)
		{
			inword = true;
			words++;               //������ǿո���inwordΪtrue������+1
		}
		if (isspace(ch) && inword)
			inword = false;           //����Ǹ��ո���inwordΪtrue����ʱ�����Ǹ��������ʣ���Ҫ��ʼ��inword
		if (ispunct(ch))
			continue;               //������ַ����жϱ���ѭ��
	}
	average = count / words;
	printf("ƽ��ÿ��������%.2f����ĸ", average);
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
	printf("����1-100��ѡһ�����֣����ܲ³��Ǹ����֣�");
	printf("\n����һش���ȷ��������'y'");
	printf("\n����Ҳµ���̫�ߣ�������'h'");
	printf("\n����Ҳµ���̫С��������'l'\n");
	printf("��ѡ��������� %d?\n", guess);
	while ((response=getchar())!='y')
	{
		if (response == '\n')
			continue;
		if (response != 'h'&&response != 'l')
		{
			printf("�Բ�������������������룡\n");
			continue;
		}
		if (response == 'h')
			high = guess - 1;
		else if (response == 'l')
			low = guess + 1;
		guess = (high + low) / 2;
		printf("��ѡ��������� %d?\n", guess);
	}
	printf("�������Ҳ¶��ˣ�\n");
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
#define BASY_MONEY1 8.75       //��������
#define BASY_MONEY2 9.33
#define BASY_MONEY3 10.00
#define BASY_MONEY4 11.20

#define BASY_TIME 40         //��������ʱ��
#define EXTR_TIME 1.5         //�Ӱ�

#define LIN_MONEY1 300       //˰�ʷֽ���
#define LIN_MONEY2 150       

#define RATE1 0.15            //˰��
#define RATE2 0.20
#define RATE3 0.25
int get_first(void);          //�����������������Ϊ�գ�����
int main(void)
{
	char ch;
	double basy_money;
	double hours;
	double sum;           //��������
	double rate_money;    //˰��
	double income;        //������
	printf("*******************************************************\n");
	printf("������н�ʻ������Ӧ�ı�Ž��в�����\n");
	printf("a) $8.75/hours      \tb) $9.33/hours\n");
	printf("c) $10.00/hours     \td) $11.20/hours\n");
	printf("q) �˳�\n");
	printf("*******************************************************\n");
	while ((ch=get_first())!='q')   //����get_first()����
	{
		if (ch =='\n')
			continue;
		ch = tolower(ch);       //����д��ĸתΪСд
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
			printf("������a-d����ѡ������q�˳�����\n��������ȷ������\n"); break;
		}
		printf("����һ�ܹ���Сʱ����\n");
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
		printf("�����ܶ��ǣ�%.2lf\t˰���ǣ�%.2lf\t�������ǣ�%.2lf\n", sum, rate_money, income);
		printf("������һ�����ּ���\n");
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
	printf("����������������ѡ�\n");
	printf("a.�ӷ�\ts.����\n");
	printf("m.�˷�\td.����\n");
	printf("q.�˳�\n");
	while ((ch=get_first())!='q')
	{
		ch = tolower(ch);
		if (ch != 'a'&& ch != 's'&& ch != 'm'&& ch != 'd')
		{
			printf("��ֻ������a,s,m,d,q�е�һ��:");
			continue;
		}
		printf("�����һ������");
		first = get_num();
		printf("����ڶ�������");
		second = get_num();
		if (ch == 'd')
		{
			while (second == 0)
			{
				printf("����һ������0������");
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
		printf("����������������ѡ�\n");
		printf("a.�ӷ�\ts.����\n");
		printf("m.�˷�\td.����\n");
		printf("q.�˳�\n");
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
		printf("%c��������\n����������2.5��-1.78E8��3֮������֣�",ch);
	}
	return input;
}*/

