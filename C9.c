/*********�����ϰ***********/
/*��ϰ��9*/
//#include<stdio.h>
//void mennu(void);        //�˵�����
//int limt(int up, int down);    //�����޺���
//int main(void)
//{
//	int ch;
//	mennu();
//	while ((ch=limt(4,1))!=4)
//	{
//		printf("%dһ����ȷ��ѡ��\n",ch);
//		mennu();
//	}
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}
//void mennu(void)
//{
//	printf("��ѡ���б��ж�Ӧ�����֣�\n");
//	printf("1) �����ļ� \t2) �ƶ��ļ�\n");
//	printf("3) ɾ���ļ� \t4) �˳�\n");
//	printf("������ѡ������֣�\n");
//}
//int limt(int up, int down)
//{
//	int input;
//	int a=scanf_s("%d", &input);
//	while (a==1&&(input > up || input < down))
//	{
//		printf("������ֵ��������!\n");
//		mennu();
//		scanf_s("%d", &input);
//	}
//	if (a!=1)
//	{
//		printf("û����������!\n");
//		input = 4;
//	}
//	return input;
//}
/*�����ϰ1*/
//#include<stdio.h>
//double min(double x, double y);       
//int main(void)
//{
//	double a, b;
//	printf("��������С�����������С��ֵ������q�˳�����\n");
//	while (scanf_s("%lf %lf", &a, &b)==2)
//	{
//		printf("%lf��%lf�н�С�����ǣ�%lf", a, b, min(a, b));
//		printf("����������бȽϣ�����q�˳�����\n");
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
//	printf("�ó���Ҫ������һ���ַ������������������ӡ\n");
//	printf("���������ӡ���ַ���");
//	scanf_s("%c", &c);
//	printf("���������ӡ���к��У��ÿո�ֿ�����");
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
//	printf("������Ҫ��ӡ���ַ���");
//	while ((ch=getchar())!='#')
//	{
//		if (ch == '\n')
//			continue;
//		printf("������Ҫ��ӡ�Ĵ�����������");
//		if (scanf_s("%d %d", &clo, &row) != 2)
//			break;
//		chline(ch, clo, row);
//		printf("����������һ�����ӡ���ַ�������#�˳�����");
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
//double Har_average(double num1, double num2);        //����ƽ����
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
//	printf("��������ֵ��");
//	while (scanf_s("%lf %lf",&a,&b)==2)
//	{
//		large_of(&a, &b);
//		printf("�������ֵΪ%lf��%lf\n", a, b);
//		printf("�������루����q�˳�����");
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
//				printf("�������ֵΪ%lf��%lf��%f\n", a, b,c);
//				printf("�������루����q�˳�����");
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
//	int pos;            //��ֵλ��
//	printf("�������ַ���");
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch == '\n')
//		{
//			continue;
//		}
//		pos = report(ch);
//		if (pos == -1)
//		{
//			printf("%c������ĸ��\n", ch);
//		}
//		else
//		{
//			printf("%c����ĸ���е�λ����%d!\n", ch, pos);
//		}
//		printf("��������:");
//	}
//	getchar();
//	return 0;
//}
//int report(char ch)
//{
//	if (isalpha(ch))                 //�ж��Ƿ�Ϊ��ĸ
//	{
//		return toupper(ch) - 'A' + 1;       //��Сдת��Ϊ��д��Ҳ���Խ���дת��ΪСд����A��Ҫ��Ϊ��a��
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
//	printf("�������ֺ�ָ�������������ݽ����q�˳�����");
//	while (scanf_s("%lf %d",&x,&exp)==2)
//	{
//		xpow = power(x, exp);
//		if (xpow == 1)
//			continue;
//		printf("%.3g��%d����Ϊ%.5g\n", x, exp, xpow);
//		printf("�������루q�˳�����");
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
//			printf("0��0����δ���壬����������ֵ:\n");
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
//		pow = 1 / power(n, -p);     //�����˵ݹ�   
        /////////���õݹ��д����for(int i=1; i <= -p; i++)
         ////////////////////       {
//////////////////////////////			pow*=n;
//////////////////////////////	     }	      //���ַ������ص��� 1/pow
//	}
//	return pow;
//}
/*9*/
//////������ʾ/////////
/*10*/
//#include<stdio.h>
//void to_base_n(int x, int system);
//int main(void)
//{
//	int num;
//	int system_num;
//	int status;
//	printf("����һ��������");
//	while (scanf_s("%d",&num)==1)
//	{
//		printf("������ƣ�2-10��:");
//		while ((status=scanf_s("%d",&system_num))==1&&(system_num<2||system_num>10))
//		{
//			printf("������Ƴ����޶�ֵ��������2-10֮������֣�");
//		}
//		if (status != 1)
//			break;
//		to_base_n(num, system_num);
//		printf("\n");
//		printf("��������һ��������q�˳�����");
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
//		to_base_n(x / system, system);           //�ݹ�
//	}
//	putchar('0' + r);           //��Ϊputchar()����ֻ������ַ�������Ҫ��������ַ�����������ASCALL��ֵ����r
//}
/*11*/
#include<stdio.h>
void Fibonacci(int n);
int main(void)
{
	int n;
	printf("����������");
	while ((scanf_s("%d",&n)==1))
	{
		Fibonacci(n);
		printf("�������루q�˳�����");
	}
	getchar();
	return 0;
}
void Fibonacci(int n)
{
	int f1, f2, f3;
	printf("쳲������ǣ�");
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