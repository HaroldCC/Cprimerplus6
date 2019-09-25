/*******************************�����ϰ16********************************/
/*1*/
/*#ifndef MY_FILE
 #define MY_FILE;
#endif // !MY_FILE
*/
/*2*/
/*#include<stdio.h>

#define HAR_MEAN(X,Y) (2.0 * (X) * (Y) / ((X) + (Y)))

int main(void)
{
	double x, y, ans;
	puts("����һ�����ֽ��м��㣺");
	while (scanf_s("%lf %lf",&x,&y) == 2)
	{
		ans = HAR_MEAN(x, y);
		printf("%lf��%lf�ĵ���ƽ����Ϊ%lf��\n", x, y, ans);
		puts("�����ǲ��Ժ꺯�������ܷ�Ϊ�������ʽ��");
		ans = HAR_MEAN(x + y, x * y);
		printf("%lf��%lf�ĵ���ƽ����Ϊ%lf��\n", x + y, x * y, ans);
		puts("������һ�����ּ������м��㣨q�˳�����");
	}

	system("pause");
	return 0;
}*/
/*3*/
/*#include<stdio.h>
#include<math.h>

//������ṹ
struct polar
{
	double lenth;
	double angle;
};
//ֱ������ṹ
struct rect
{
	double x;
	double y;
};
//ָ��ֱ������ṹ��ָ��
struct rect p_to_rect(const struct polar * p_polar);

int main(void)
{
	struct polar input;
	struct rect answer;

	puts("����������ģ�ͽǶȣ���λ���ȣ���");
	while (scanf_s("%lf %lf",&input.lenth,&input.angle) == 2)
	{
		answer = p_to_rect(&input);
		printf("�����꣺%g %f\n", input.lenth, input.angle);
		printf("ֱ�����꣺%g %g\n", answer.x, answer.y);
		puts("����������ģ�ͽǶȣ���λ���ȣ�(q�˳�)��");
	}

	system("pause");
	return 0;
}

struct rect p_to_rect(const struct polar * p_polar)
{
	static const double deg_to_rad = 3.14159 / 180;
	struct rect res;
	double ang = deg_to_rad * p_polar->angle;              //��ת��Ϊ����

	res.x = p_polar->lenth * sin(ang);
	res.y = p_polar->lenth * cos(ang);

	return res;
}*/
/*4*/
/*#include<stdio.h>
#include<time.h>

void time_delay(double Time_Delay);

int main(void)
{
	double Time_Delay;

	puts("�����뾭����ʱ�䣨��λ���룩��");
	scanf_s("%lf", &Time_Delay);
	clock_t start, end;
	start = clock();
	time_delay(Time_Delay);
	end = clock();
	double time_pass = (end - start) / CLOCKS_PER_SEC;
	printf("��������������Ϊ%lf�롣\n", time_pass);

	system("pause");
	return 0;
}

void time_delay(double Time_Delay)
{
	clock_t start, end;

	start = clock();
	do
	{
		end = clock();
	} while ((end - start) / CLOCKS_PER_SEC < Time_Delay);
}*/
/*5*/
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 51
#define PICKS 6

void random_pick(int arr[], int arrsize, int picks);

int main(void)
{
	int arr[SIZE];
	char ch;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i + 1;
	}
	do
	{
		random_pick(arr, SIZE, PICKS);
		puts("\n�Ƿ��������y/n��");
		ch = getchar();
		while (getchar() != '\n')
		{
			continue;
		}
	} while (ch == 'y' || ch == 'y');

	system("pause");
	return 0;
}

void random_pick(int arr[], int arrsize, int picks)
{
	int index, temp;

	srand((unsigned int)time(0));

	if (picks > arrsize)
	{
		fputs("ѡ�������������С��\n", stderr);
		fputs("��������ѡ�������������С��\n", stderr);
		picks = arrsize;
	}
	for (int i = 0; i < picks; i++)
	{
		index = rand() % (arrsize - 1);       //�������Ԫ��
		temp = arr[index];                 
		printf("%2d ", temp);                 //��ӡ
		if (i % 20 == 19)
		{
			putchar('\n');                  //ÿ����ʾ20��Ԫ��
		}
		arr[index] = arr[arrsize - 1];      //�����һ��Ԫ�ؽ�����
		arr[arrsize - 1] = temp;
		arrsize--;                         //���������ų�����
	}
}*/
/*6*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define	NUM 4

typedef struct names
{
	char first[40];
	char last[40];
}NAME;

void show_array(const NAME arr[], int n);
int comp(const void* p1, const void*p2);

int main(void)
{
	struct names staff[NUM] = 
	{
		{"san","zhang" },
		{"si","li"},
		{"wu","wang"},
		{"wu","cheng"}
	};
	puts("����ǰ��");
	show_array(staff, NUM);
	qsort(staff, NUM, sizeof(struct names), comp);
	puts("�����");
	show_array(staff, NUM);

	system("pause");
	return 0;
}

void show_array(const NAME arr[], int n)
{
	int index;

	for ( index = 0; index < n; index++)
	{
		printf("%s %s", arr[index].first, arr[index].last);
		putchar('\n');

	}
}

int comp(const void* p1, const void*p2)
{
	const struct names *ps1 = (const struct names *) p1;
	const struct names *ps2 = (const struct names *) p2;
	int res;

	res = strcmp(ps1->last, ps2->last);
	if (res != 0)
	{
		return res;
	}
	else
	{
		return strcmp(ps1->first, ps2->first);
	}
}*/
/*7*/
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void show_array(const double ar[], int n);
double * new_d_array(int n, ...);

int main(void)
{
	double *p1;
	double *p2;

	p1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
	p2 = new_d_array(4, 100.0, 20.00, 8.08, -1890.0);
	show_array(p1, 5);
	show_array(p2, 4);
	free(p1);
	free(p2);

	system("pause");
	return 0;
}

void show_array(const double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%g ", ar[i]);
	}
	putchar('\n');
}

double * new_d_array(int n, ...)
{
	va_list ap;
	double *pt;

	va_start(ap, n);
	pt = (double *)malloc(n * sizeof(double));
	for (int i = 0; i < n; i++)
	{
		pt[i] = va_arg(ap, double);
	}
	va_end(ap);

	return pt;
}
