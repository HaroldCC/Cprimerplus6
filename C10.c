/********编程练习10**********/
/*1*/
/*#include<stdio.h>
#define MONTHS 12
#define YEARS 5
int main(void)
{
	const float rain[YEARS][MONTHS] =        //2010-2014年降水量
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	int year, month;
	float subtot, total;                     //初始化要放在循环中
	printf("年份\t降水量\n");
	for (year = 0,total=0; year < YEARS; year++)
	{
		for (month = 0,subtot = 0; month < MONTHS; month++)
			subtot += *(*(rain + year) + month);     //每年每月降水量
		printf("%d\t%.1f\n", 2010 + year, subtot);
		total += subtot;                            //5年总降水量
	}
	printf("\n每年的平均降水量为：%.1f\n", total / YEARS);
	printf("每月5年中平均降水量：\n");
	printf(" 1   2   3   4   5   6   7   8   9   10  11  12\n");
	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, subtot = 0; year < YEARS; year++)
		{
			subtot += *(*(rain + year) + month);
		}
		printf("%4.1f", subtot / YEARS);
	}
	getchar();
	return 0;
}*/
/*2*/
/*#include<stdio.h>
void copy_arr(double target[], double source[], int n);
void copy_ptr(double *target, double *source, int n);
void copy_ptrs(double *target, double *source_begin, int *source_end );
int main(void)
{
	int i;
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];
	printf("source: ");
	for ( i = 0; i < 5; i++)
	{
		printf("%.1lf", source[i]);
		printf(" ");
	}
	putchar('\n');
	copy_arr(target1, source, 5);
	printf("target1:");
	for (i = 0; i < 5; i++)
	{
		printf("%.1lf", target1[i]);
		putchar(' ');
	}
	putchar('\n');
	copy_ptr(target2, source, 5);
	printf("target2:");
	for ( i = 0; i < 5; i++)
	{
		printf("%.1lf", *(target2 + i));
		putchar(' ');
	}
	putchar('\n');
	copy_ptrs(target3, source, source+5);
	printf("target3:");
	for (i = 0; i < 5; i++)
	{
		printf("%.1lf", target3[i]);
		putchar(' ');
	}
	putchar('\n');
	getchar();
	return 0;
}
void copy_arr(double target[], double source[], int n)
{
	for (int i = 0; i < n; i++)
	{
		target[i] = source[i];
	}
}
void copy_ptr(double *target, double *source, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(target + i) = *(source + i);
	}
}
void copy_ptrs(double *target, double *source_begin, int *source_end)
{
	while (source_begin < source_end)
	{
		*target = *source_begin;
		target++;
		source_begin++;
	}
}*/
/*3*/
/*#include<stdio.h>
#define SIZE 10
void show_arr(const arr[], int n);
int max_arr(const arr[], int n);
int main(void)
{
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int max;
	show_arr(arr, SIZE);
	max = max_arr(arr, SIZE);
	printf("%d是数组中的最大值。\n", max);
	getchar();
	return 0;
}
int max_arr(const arr[], int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
void show_arr(const arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		putchar(' ');
	}
	putchar('\n');
}*/
/*4*/
/*#include<stdio.h>
#define SIZE 10
double max(const arr[], int n);
void show_arr(const arr[], int n);
int main(void)
{
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int max_sub;
	show_arr(arr, SIZE);
	max_sub = max(arr, SIZE);
	printf("最大值的下标是%d\n", max_sub);
	getchar();
	return 0;
}
double max(const arr[], int n)
{
	int max = arr[0];
	int sub;                 //最大值下标
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
		sub = i;
	}
	return sub;
}
void show_arr(const arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		putchar(' ');
	}
	putchar('\n');
}*/
/*5*/
/*#include<stdio.h>
#define SIZE 10
double diff_val(const double arr[], int n);
int main(void)
{
	double arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	double value;
	value = diff_val(arr, SIZE);
	printf("最大值与最小值的差是%lf\n", value);
	getchar();
	return 0;
}
double diff_val(const double arr[], int n)
{
	double max = arr[0];
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		else if(min>arr[i])
		{
			min = arr[i];
		}
	}
	return max - min;
}*/
/*6*/
/*#include<stdio.h>
#define SIZE 10
void reverse(double arr[], int n);
int main(void)
{
	double arr[SIZE] = { 11,33, 22,44,66,55,77,88,99,10 };
	printf("排序前的结果是：");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%.2lf", arr[i]);
		putchar(' ');
	}
	putchar('\n');
	reverse(arr, SIZE);
	printf("排序后的结果是：");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%.2lf", arr[i]);
		putchar(' ');
	}
	putchar('\n');
	getchar();
	return 0;
}
void reverse(double arr[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		double tmp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = tmp;
	}
}*/
/*7*/
/*#include<stdio.h>
#define ROWS 3    //行
#define COLS 4    //列
void copy_arr(double target_arr[][COLS], double source_arr[][COLS], int row);
int main(void)
{
	double source_arr[ROWS][COLS] = 
	{
		{1.1,2.2,3.3,4.4},
		{2.2,2.3,2.4,2.5},
		{3.3,4.4,5.5,6.6}
	};
	double target_arr[ROWS][COLS];
	copy_arr(target_arr, source_arr, ROWS);
	printf("结果为：\n");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%.2lf", target_arr[i][j]);
			putchar(' ');
		}
		putchar('\n');
	}
	getchar();
	return 0;
}
void copy_arr(double target_arr[][COLS], double source_arr[][COLS], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			target_arr[i][j] = source_arr[i][j];
		}
	}
}*/
/*8*/
/*#include<stdio.h>
#define SIZE1 7
#define SIZE2 3
void copy_arr(int target_arr[],const int source_arr[], int n);
int main(void)
{
	int source_arr[SIZE1] = { 1,2,3,4,5,6,7 };
	int target_arr[SIZE2];
	int values;
	copy_arr(target_arr, source_arr + 2, SIZE2);
	for (int i = 0; i < SIZE2; i++)
	{
		printf("%d", target_arr[i]);
		putchar(' ');
	}
	printf("\n");
	getchar();
	return 0;
}
void copy_arr(int target_arr[], const int source_arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		target_arr[i] = source_arr[i];
	}
}*/
/*9*/
/*#include<stdio.h>
void copy_arr(int rows, double target_arr[][5],double source_arr[][5]);
void show_arr(int rows, double target_arr[][5], double source_arr[][5]);
int main(void)
{
	double source_arr[3][5] = 
	{
		{1.1,2.2,3.3,4.4,5.5},
		{2.2,3.3,4.4,5.5,6.6},
		{3.3,4.4,5.5,6.6,7.7}
	};
	double target_arr[3][5];
	copy_arr(3, target_arr, source_arr);
	show_arr(3, target_arr, source_arr);
	getchar();
	return 0;
}
void copy_arr(int rows, double target_arr[][5], double source_arr[][5])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			target_arr[i][j] = source_arr[i][j];
		}
	}
}
void show_arr(int rows, double target_arr[][5], double source_arr[][5])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%.2lf", source_arr[i][j]);
			putchar(' ');
		}
	}
	putchar('\n');
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%.2lf", target_arr[i][j]);
			putchar(' ');
		}
	}
	putchar('\n');
}*/
/*10*/
/*#include<stdio.h>
void add_arr(int source_arr1[], int source_arr2[], int target_arr[], int n);
int main(void)
{
	int	source_arr1[4] = { 2,4,5,8 };
	int source_arr2[4] = { 1,0,4,6 };
	int target_arr[4];
	add_arr(source_arr1, source_arr2, target_arr, 4);
	for (int i = 0; i < 4; i++)
	{
		printf("%d", target_arr[i]);
		putchar(' ');
	}
	putchar('\n');
	getchar();
	return 0;
}
void add_arr(int source_arr1[], int source_arr2[], int target_arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		target_arr[i] = source_arr1[i] + source_arr2[i];
	}
}*/
/*11*/
/*#include<stdio.h>
void times2_arr(int source_arr[][5], int target_arr[][5], int rows);
void show_arr(int source_arr[][5], int target_arr[][5], int rows);
int main(void)
{
	int source_arr[3][5] = 
							{
								{1,2,3,4,5},
								{2,3,4,5,6},
								{3,4,5,6,7}
							};
	int target_arr[3][5];
	times2_arr(source_arr, target_arr, 3);
	show_arr(source_arr, target_arr, 3);
	putchar('\n');
	getchar();
	return 0;
}
void times2_arr(int source_arr[][5], int target_arr[][5], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			target_arr[i][j] = 2*source_arr[i][j];
		}
	}
}
void show_arr(int source_arr[][5], int target_arr[][5], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%4d", source_arr[i][j]);
			//putchar(' ');
			//putchar(' ');
		}
	}
	putchar('\n');
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%4d", target_arr[i][j]);
			//putchar(' ');
		}
	}
	putchar('\n');
}*/
/*12*/
/*#include<stdio.h>
#define YEARS 5
#define MONTHS 12
void total_rain(const float rain[][MONTHS], int years);
void average(const float rain[][MONTHS], int years);
int main(void)
{
	const float rain[YEARS][MONTHS] =        //2010-2014年降水量
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	total_rain(rain, YEARS);
	printf("JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NEV DEC\n");
	average(rain, YEARS);
	putchar('\n');
	getchar();
	return 0;
}
void total_rain(const float rain[][MONTHS], int years)
{
	int i, j;
	float subtotal,total = 0;
	for ( i = 0; i < years; i++)          //每次循环需要将total归零。因为计算的是每年每月降水量
	{
		for ( j = 0, subtotal = 0; j < MONTHS; j++)
		{
			subtotal += rain[i][j];
		}
		printf("%d\t%.1f\n", 2010 + i, subtotal);
		total += subtotal;
	}
	printf("5年总降水量为%.1f\n", total / years);
}
void average(const float rain[][MONTHS], int years)
{
	int i, j;
	float subtotal;
	for ( i = 0; i < MONTHS; i++)
	{
		for ( j = 0, subtotal = 0; j < years; j++)
		{
			subtotal += rain[j][i];
		}
		printf("%-4.1f", subtotal / years);
	}
}*/
/*13*/
/*#include<stdio.h>
void input_arr(double arr[][5], int rows);
double average_cols(double arr[], int cols);
double average_all(double arr[][5], int rows);
double max_arr(double arr[][5], int rows);
void show_arr(double arr[][5], int rows);
int main(void)
{
	double arr[3][5];
	printf("输入15个浮点值：\n");
	input_arr(arr, 3);
	putchar('\n');
	for (int i = 0; i < 3; i++)
	{
		printf("%d组数据的平均值是%lf\n", i+1, average_cols(arr[i], 5));
	}
	printf("所有数据的平均值是%lf\n", average_all(arr, 3));
	printf("15个数据中最大值为：%lf\n", max_arr(arr, 3));
	show_arr(arr, 3);
	getchar();
	return 0;
}
void input_arr(double arr[][5], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		printf("请输入第%d组数据：\n", i + 1);
		for (int j = 0; j < 5; j++)
		{
			scanf_s("%lf", &arr[i][j]);
			getchar();
		}
	}
}
double average_cols(double arr[], int cols)
{
	double sum = 0.0;
	for (int i = 0; i < cols; i++)
	{
		sum += arr[i];
	}
	return (sum / cols);
}
double average_all(double arr[][5], int rows)
{
	double sum = 0.0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sum += arr[i][j];
		}
	}
	return (sum / (5 * rows));
}
double max_arr(double arr[][5], int rows)
{
	double max = 0.0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (max<arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
void show_arr(double arr[][5], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%lf", arr[i][j]);
			putchar(' ');
		}
		putchar('\n');
	}
}*/
/*14*/
//////////////我的vs2017似乎不支持变长数组，但大致定义如下
/*#include<stdio.h>
#define ROWS 3
#define COLS 5
void input_arr(int rows,int cols, double arr[rows][cols]);
double average_cols(int cols,double arr[cols]);
double average_all(int rows, int cols, double arr[rows][cols]);
double max_arr(int rows, int cols, double arr[rows][cols]);
void show_arr(int rows, int cols, double arr[rows][cols]);
int main(void)
{

	getchar();
	return 0;
}*/
