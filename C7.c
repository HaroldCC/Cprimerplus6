/*****�����ϰ*****/
/*1*/
/*#include<stdio.h>
int main(void)
{
	char  ch;
	int spa_count=0, lin_count=0, oth_count=0;   //�ո��������з����������ַ���
	printf("�����ַ�����ͳ�ƣ������ַ���#���˳����򣩣�\n");
	while ((ch=getchar())!='#')
	{
		if (ch == ' ')
			spa_count++;
		else if (ch == '\n')
			lin_count++;
		else
			oth_count++;
	}
	printf("��������ַ��пո�����%d�������з���%d���������ַ�����%d��\n", spa_count, lin_count, oth_count);
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
	int chsum = 0;//ͳ���ַ���
	printf("�����ַ�����ͳ�ƣ����롮#���ַ���������\n");
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
	int ou_count = 0;//ż������
	int ji_count = 0;//��������
	int ou_sum = 0;//ż���ĺ�
	int ji_sum = 0;//������
	float ou_average;//ż��ƽ��ֵ
	float ji_average;//����ƽ��ֵ
	printf("�����������м��㣨���롮0����������");
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
		printf("ż��������%d\n", ou_count);
		if (ou_count>0)
		{
			ou_average = ou_sum / ou_count;
			printf("ż��ƽ��ֵΪ��%.2f\n", ou_average);
		}
		printf("����������%d\n", ji_count);
		if (ji_count>0)
		{
			ji_average = ji_sum / ji_count;
			printf("����ƽ��ֵΪ��%.2f\n", ji_average);
		}
	printf("����\n");
	getchar();
	getchar();
	return 0;
}*/
/*4*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	int count1=0;//�滻��ŵĴ���
	int count2=0;//�滻��̾�ŵĴ���
	printf("�����ַ�����ͳ��(���롮#������)��\n");
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
	printf("\n'!'���'.'������%d��\n", count1);
	printf("'!!'���'��'������%d��\n", count2);
	getchar();
	getchar();
	return 0;
}*/
/*5*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	int count1 = 0;//�滻��ŵĴ���
	int count2 = 0;//�滻��̾�ŵĴ���
	printf("�����ַ�����ͳ��(���롮#������)��\n");
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
	printf("\n'!'���'.'������%d��\n", count1);
	printf("'!!'���'��'������%d��\n", count2);
	getchar();
	getchar();
	return 0;
}*/
/*6*/
/*#include<stdio.h>
int main(void)
{
	char ch;
	char fir, sec;//��һ�����յ����ַ��͵ڶ����ַ�
	int count = 0;//ei���ֵĴ���
	printf("�������ͳ��(���롮#������)��\n");
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
				count++;                //�ж�ǰһ���ַ��ǡ�e�����ڶ����ǡ�i�����������1
			//��ʼ��fir��sec
			fir = 'a';
			sec = 'a';
			continue;
		}
		continue;
	}
	printf("'ei'������%d��\n",count);
	getchar();
	getchar();
	return 0;
}*/
/*7*/
/*#include<stdio.h>
#define BASE_MONEY 10.00//��������
#define BASE_TIME 40//�����Ӱ�ʱ��
#define OVER_TIME 1.5//��������ʱ��
#define MONY1 300//˰�ʷֽ���1
#define MONY2 150//˰�ʷֽ���2
#define RATE1 0.15//MONY1ǰ��˰��
#define RATE2 0.20//MONY2��˰��
#define RATE3 0.25//ʣ�µ�˰��
int main(void)
{
	double hours;//һ�ܹ���ʱ��
	double sum;//��������
	double rate_mony;//˰��
	double income;//������
	printf("����һ�ܹ���Сʱ����\n");
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
	printf("�����ܶ��ǣ�%.2lf\t˰���ǣ�%.2lf\t�������ǣ�%.2lf\n", sum, rate_mony, income);
	getchar();
	getchar();
	return 0;
}*/
/*8*/
/*#include<stdio.h>
#define BASE_TIME 40     //�����Ӱ�ʱ��
#define OVER_TIME 1.5    //��������ʱ��
#define MONY1 300       //˰�ʷֽ���1
#define MONY2 150          //˰�ʷֽ���2
#define BASE_LEVEL1 8.75
#define BASE_LEVEL2 9.33
#define BASE_LEVEL3 10.00
#define BASE_LEVEL4 11.20
#define RATE1 0.15             //MONY1ǰ��˰��
#define RATE2 0.20            //MONY2��˰��
#define RATE3 0.25           //ʣ�µ�˰��
int main(void)
{
	int choice;
	double basy_money;
	double hours;            //һ�ܹ���ʱ��
	double sum;             //��������
	double rate_money;      //˰��
	double income;        //������
	printf("*******************************************************\n");
	printf("������н�ʻ������Ӧ�ı�Ž��в�����\n");
	printf("1) $8.75/hours      \t2) $9.33/hours\n");
	printf("3) $10.00/hours     \t4) $11.20/hours\n");
	printf("5) �˳�\n");
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
			printf("������1-4���ֽ���ѡ����������5�˳�����\n��������ȷ������\n");
			continue;
		}
		printf("����һ�ܹ���Сʱ����\n");
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
		printf("�����ܶ��ǣ�%.2lf\t˰���ǣ�%.2lf\t�������ǣ�%.2lf\n", sum, rate_money, income);
		printf("������һ�����ּ���\n");
	}
	getchar();
	return 0;
}*/
/*9*/
/*#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int limit;//�������
	int num;
	int div;
	bool numIsPrime;   //�ж��Ƿ�Ϊ����
	printf("������������");
	while (scanf_s("%d",&limit) == 1 && limit > 0)
	{
		if (limit > 1)
			printf("����Ϊ������\n", limit);
		else
			printf("û������\n");
		for (num=2 ; num <= limit; num++)
		{
			for (div = 2, numIsPrime = true;(div*div) <= num;div++)
				if (num%div == 0)
					numIsPrime = false;
			if (numIsPrime)
				printf("%d��������\n", num);
		}
		printf("����������(����q�˳�)��");
	}
	printf("����\n");
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
	int choice;             //ѡ�����
	long level;            //˰��ȼ�    
	double income;         //����
	double taxmoney;       //˰��
	printf("****************************************************************************\n");
	printf("��������ţ�\n");
	printf("1) ����   \t2) ����   \t3) �ѻ飬����   \t4) �ѻ飬����\n");
	printf("5) �˳�\n");
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
			printf("������1-4���ֽ���ѡ����������5�˳�����\n��������ȷ������\n");
			break;
		}
		printf("������������룺");
		scanf_s("%lf", &income);
		if (income <= level)
			taxmoney = income * RATE1;
		else
			taxmoney = level * RATE1 + (income - level)*RATE2;
		printf("���˰��Ϊ%.2lfԪ\n", taxmoney);
		printf("��������ѡ������5�˳�����\n");
	}
	getchar();
	return 0;
}*/
/*11*/
#include<stdio.h>
#define Y_PRICE 2.05        //�� ����
#define T_PRICE 1.15        //���
#define H_PRICE 1.09       //���ܲ�
#define DISCOUNT 0.05      //�ۿ��Ż�

#define WEIGHT_LEVEL1 5      //�������
#define WEIGHT_LEVEL2 20

#define TRANS_LEVEL1 6.5      //�˷ѺͰ�װ�Ѳ��
#define TRANS_LEVEL2 14

#define TRANS_LEVEL3 0.5       //��������
int main(void)
{
	char ch;       //ѡ���ַ�
	float input;     //�������
	float y_weight = 0;   //�󼻰���
	float t_weight = 0;    //��˰���
	float h_weight = 0;     //���ܲ�����
	float total_weight;   //����
	float cost;            //����
	float total_cost;         //�ܻ��ѣ����+�˷�
	float discount;           //�ۿ�
	float tran_cost;         //�˷�
	float total_all;
	printf("************************************************\n");
	printf("�����Ž���ѡ��\n");
	printf("a:��\tb:���\tc:���ܲ�\nq:�˳�����ӡ�˵�\n");
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
			printf("�����󼻵İ�����");
			scanf_s("%f", &input);
			y_weight = y_weight + input;
			break;
		case 'b':
			printf("������˵İ�����");
			scanf_s("%f", &input);
			t_weight = t_weight + input;
			break;
		case 'c':
			printf("������ܲ��İ�����");
			scanf_s("%f", &input);
			h_weight = h_weight + input;
			break;
		default:
			printf("�������,������a,b,cѡ���߲ˣ�q�˳�\n");
			break;
		}
		printf("����������й���\n");
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
	printf("��Ķ������£�\n");
	printf("2.05��Ԫ/�����󼻶�����%.2f��\n", y_weight);
	printf("1.15��Ԫ/������˶�����%.2f��\n", t_weight);
	printf("1.09��Ԫ/���ĺ��ܲ�������%.2f��\n", h_weight);
	printf("���߲˵ķ���Ϊ��%.2f\n", cost);
	if(cost>100)
		printf("�ۿ�Ϊ��%.2f\n", discount);
	printf("�˷ѺͰ�װ��Ϊ��%.2f\n", tran_cost);
	printf("���з���Ϊ��%.2f\n", total_all);
	getchar();
	getchar();
	return 0;
}
