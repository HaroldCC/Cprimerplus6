/**编程练习2**/
/*1*/
#include<stdio.h>
int main(void)
{
	printf("张三\n");
	printf("张\n三\n");
	printf("张");
	printf("三\n");
	getchar();
	return 0;
}
/*2*/
#include<stdio.h>
int main(void)
{
	printf("姓名：张三\n地址：中国\n");
	getchar();
	return 0;
}
/*3*/
#include<stdio.h>
int main(void)
{
	int	age = 0, days = 0;
	printf("请输入您的年龄：");
	scanf_s("%d", &age);
	days = age * 365;
	printf("您的年龄为：%d\n您的年龄转换成天数为：%d\n", age, days);
	getchar();
	getchar();
	return 0;
}
/*4*/
#include<stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	getchar();
	return 0;
}
void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
	printf("Which nobagy can deny!\n");
}
/*5*/
#include<stdio.h>
void br(void);
void ic(void);
int main(void)
{
	br();
	ic();
	printf("India,China,\n");
	printf("Brazil,Russia\n");
	getchar();
	return 0;
}
void br(void)
{
	printf("Brazil,Russia,");
}
void ic(void)
{
	printf("India,China\n");
}
/*6*/
#include<stdio.h>
int main(void)
{
	int toes = 10;
	printf("toes为：%d\ntoes的2倍为：%d\ntoes的平方为：%d\n", toes, 2 * toes, toes*toes);
	getchar();
	return 0;
}
/*7*/
#include<stdio.h>
void smile(void);
int main(void)
{
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n");
	getchar();
	return 0;
}
void smile(void)
{
	printf("Smile!");
}
/*8*/
#include<stdio.h>
void one_three(void);
void two(void);
int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	getchar();
	return 0;
}
void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}
void two(void)
{
	printf("two\n");
}
/**编程练习3**/
/*1*/
#include<stdio.h>
int main(void)
{
	int	a;
	float b,c;
	a = 10000000000;//整数上溢
	b = 3.4E38 + 10.0f;//浮点数上溢
	c = 0.1234E-10 / 10;//浮点数下溢
	printf("%d\n%f\n%f\n",a, b, c);
	getchar();
	return 0;
}
/*2*/
#include<stdio.h>
int main(void)
{
	int a = 0;
	printf("请输入一个0-127中的一个整数：");
	scanf_s("%d", &a);
	printf("该数对应的ASCLL码为：%c\n", a);
	getchar();
	getchar();
	return 0;
}
/*3*/
#include<stdio.h>
int main(void)
{
	printf("\a");//警报
	printf("Startled by the sudden sound,Sally shouted,\n");
	printf("\"By the Grate Pumpkin,what was that!\"");
	getchar();
	return 0;
}
/*4*/
#include<stdio.h>
int main(void)
{
	float a;
	printf("输入一个小数：");
	scanf_s("%f", &a);
	printf("%f\n%e\n%.2a\n", a, a, a);
	getchar();
	getchar();
	return 0;
}
/*5*/
#include<stdio.h>
int main(void)
{
	int age = 0;
	long min = 0;
	printf("请输入您的年龄：");
	scanf_s("%ld", &age);
	min = age * 3.156E7;
	printf("转换为秒为：%ld秒\n", min);
	getchar();
	getchar();
	return 0;
}
/*6*/
#include<stdio.h>
int	main(void)
{
	double a,c;
	int b;
	printf("请输入水的夸脱数：");
	scanf_s("%d", &b);
	a = 950 * 3.0E-23;
	c = a * b;
	printf("水分子数量为：%e\n", c);
	getchar();
	getchar();
	return 0;
}
/*7*/
#include<stdio.h>
int main()
{
	float tall_m, tall_cm;
	printf("请输入您的身高：");
	scanf_s("%f", &tall_m);
	tall_cm = 2.54*tall_m;
	printf("%.2f英寸转化为厘米为：%f厘米",tall_m, tall_cm);
	getchar();
	getchar();
	return 0;
}
/*8*/
#include<stdio.h>
int main()
{
	float cup,p,a,t,c;
	printf("请输入杯数：");
	scanf_s("%f", &cup);
	p = cup/2;
	a = 8 * cup;
	t = 2 * a;
	c = 3 * t;
	printf("%f杯等于%f品脱，%f杯等于%f盎司，%f盎司等于%f大汤勺，%f大汤勺等于%f茶勺\n", cup, p, cup, a, a, t, t, c);
	getchar();
	getchar();
	return 0;
}
/**编程练习4**/
/*1*/
#include<stdio.h>
int main(void)
{
	char surname[40] ;
	char  name[40];
	printf("请输入您的名：\n");
	scanf_s("%s",name,40);////////////////////////////////注意！！！scanf_s()在输入数组时需要指明字段大小/////////////////////////////////////////
	printf("请输入您的姓：\n");
	scanf_s("%s",surname,40);
	printf("您的名为：%s\n姓为：%s\n", name, surname);
	getchar();
	getchar();
	//getchar();
	return 0;
}
/*2*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[40];
	printf("请输入名字：\n");
	scanf_s("%s", name, 40);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", strlen(name) + 3, name);
	getchar();
	getchar();
	return 0;
}
/*3*/
#include<stdio.h>
int main(void)
{
	float a;
	printf("输入一个小数：21.29\n");
	scanf_s("%f", &a);
	printf("输入的数是：%.1f或%.1e\n", a,a);
	printf("输入的数是：%2.2f或%.3E\n", a, a);
	getchar();
	getchar();
	return 0;
}
/*4*/
#include<stdio.h>
int main(void)
{
	float heigh;
	char name[40];
	printf("请输入你的姓名：\n");
	scanf_s("%s", name, 40);
	printf("请输入你的身高（米）：\n");
	scanf_s("%f", &heigh);
	printf("%s,你有%.3f米高", name,heigh);
	getchar();
	getchar();
	return 0;
}
/*5*/
#include<stdio.h>
int main(xoid)
{
	float speed, size, time;
	printf("请输入以兆位每秒（Mb/s）为单位的下载速度和以兆（MB）为单位的文件大小\n");
	scanf_s("%f %f", &speed,&size);
	time = 8 * size / speed;
	printf("At %.2f megabits per second,a file of %.2f megabytes\n\
 downloads in %.2f seconds.\n",speed,size,time);
	getchar();
	getchar();
	return 0;
}
/*6*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char surname[40];
	char name[40];
	int length1,length2;
	printf("输入姓：\n");
	scanf_s("%s", surname, 40);
	printf("输入名：\n");
	scanf_s("%s", name, 40);
	length1 = strlen(surname);
	length2 = strlen(name);
	printf("%s %s\n", surname, name);
	printf("%*d %*d\n", length1, length1,length2,length2);
	printf("%s %s\n", surname, name);
	printf("%-*d %-*d\n", length1, length1, length2, length2);
	getchar();
	getchar();
	return 0;
}
/*7*/
#include<stdio.h>
#include<float.h>
int main(void)
{
	double a=1.0 / 3.0;
	float b=1.0 / 3.0;
	printf("a=%.6f\tb=%.6f\n", a, b);
	printf("a=%.12f\tb=%.12f\n", a, b);
	printf("a=%.16f\tb=%.16f\n", a, b);
	printf("float类型的最小有效数字为：%d\tdouble类型的最小有效数字为：%d\n", FLT_DIG, DBL_DIG);
	getchar();
	return 0;
}
/*8*/
#include<stdio.h>
#define GALLON 3.785 //1加仑等于3.785升
#define MILE 1.609   //1英里等于1.609千米
int main(void)
{
	float gallon, mile;
	printf("输入旅行里程：\n");
	scanf_s("%f", &mile);
	printf("输入消耗汽油量：\n");
	scanf_s("%f", &gallon);
	printf("油耗为：%.1f英里/加仑\n", mile / gallon);
	printf("油耗转换为：%.1f升/100公里\n", gallon*GALLON / (mile*MILE) * 100);
	getchar();
	getchar();
	return 0;
}
/****编程练习5****/
/*1*/
#include<stdio.h>
int main(void)
{
	const int m_to_h = 60;
	int m,h,left;
	printf("输入一个时间（分钟）：\n");
	scanf_s("%d", &m);
	while (m>0)
	{
		h = m/m_to_h;
		left=m%m_to_h;
		printf("%d分钟转化为小时为：%d小时%d分钟\n", m, h,left);
		scanf_s("%d", &m);
	}
	getchar();
	//getchar();
	return 0;
}
/*2*/
#include<stdio.h>
int main(void)
{
	int a,b;
	printf("请输入一个整数：\n");
	scanf_s("%d", &a);
	b = a + 10;
	while (a<=b)
	{
		printf("打印比该数大10的整数为:%d\n", a);
		a++;
	}
	getchar();
	getchar();
	return 0;
}
/*3*/
#include<stdio.h>
int main(void)
{
	const int day_to_week = 7;
	int days,week,left;
	printf("请输入天数：\n");
	scanf_s("%d", &days);
	while (days>0)
	{
		week = days/day_to_week;
		left = days%day_to_week;
		printf("%d天转化为%d周%d天\n", days, week, left);
		scanf_s("%d", &days);
	}
	getchar();
	getchar();
	return 0;
}
/*4*/
#include<stdio.h>
#define FEET_TO_CM 30.48
#define INCHE_TO_CM 2.54
int main(void)
{
	float heigh,inches;//inches英寸
	int foot;//英尺
	printf("输入身高(cm)：\n");
	scanf_s("%f", &heigh);
	while (heigh>0)
	{
		foot = heigh / FEET_TO_CM;
		inches = (heigh - foot * FEET_TO_CM) / INCHE_TO_CM;
		printf("%.2fcm=%d英尺%.2f英寸", heigh, foot, inches);
		scanf_s("%f", &heigh);
	}
	getchar();
	//getchar();
	return 0;
}
/*5*/
#include<stdio.h>
int main(void)
{
	int sum=0, count=0,day=0;
	printf("输入天数：\n");
	scanf_s("%d", &day);
	while (count++<day)
	{
		sum = sum + count;
	}
	printf("%d天挣了%d元钱\n", day, sum);
	getchar();
	getchar();
	return 0;
}
/*6*/
#include<stdio.h>
int main(void)
{
	int sum = 0, count = 0, day = 0;
	printf("输入天数：\n");
	scanf_s("%d", &day);
	while (count++ < day)
	{
		sum = sum + count*count;
	}
	printf("%d天挣了%d元钱\n", day, sum);
	getchar();
	getchar();
	return 0;
}
/*7*/
#include<stdio.h>
void value3(double a);
int main(void)
{
	double a;
	printf("输入一个小数：\n");
	scanf_s("%lf", &a);
	value3(a);
	getchar();
	getchar();
	return 0;
}
void value3(double a)
{
	double b;
	b = a * a*a;
	printf("%lf立方为：%lf\n", a, b);
}
/*8*/
#include<stdio.h>
int main(void)
{
	int a, b;
	printf("\t*****求模运算*****\t\n");
	printf("输入一个数作为第2个运算对象：\n");
	scanf_s("%d", &a);
	printf("输入第二个数作为第1个运算对象：\n");
	scanf_s("%d", &b);
	printf("求模运算%d%%%d=%d\n", b, a, b%a);
	printf("输入下一个数作为第1个运算对象：\n");
	scanf_s("%d", &b);
	while (b>0)
	{
		printf("求模运算%d%%%d=%d\n", b, a, b%a);
		printf("输入下一个数作为第1个运算对象：\n");
		scanf_s("%d", &b);
	}
	printf("结束\n");
	getchar();
	getchar();
	return 0;
}
/*9*/
#include<stdio.h>
void Temperatures(double h_tem);
int main(void)
{
	double h_tem;//华氏度
	printf("请输入华氏温度(输入非数字以退出)：\n");
	while (scanf_s("%lf", &h_tem)==1)
	{
		Temperatures(h_tem);
		printf("请输入华氏温度(输入非数字以退出)：\n");
	}
	printf("程序退出\n");
	getchar();
	getchar();
	return 0; 
}
void Temperatures(double h_tem)
{
	double s_tem;//摄氏度
	double k_tem;//开氏度
	const double h_to_s = 32.0;//华氏度转摄氏度要用到的常量值
	const double s_to_k = 273.16;//摄氏度转开氏度要用到的常量值
	s_tem = 5.0 / 9.0 * (h_tem - h_to_s);
	k_tem = s_tem + s_to_k;
	printf("%.2lf华氏度等于%.2lf摄氏度和%.2lf开氏度\n", h_tem, s_tem, k_tem);
}
/****编程练习6****/
/*1*/
#include<stdio.h>
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
}
/*2*/
#include<stdio.h>
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
}
/*3*/
#include<stdio.h>
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
}
/*4*/
#include<stdio.h>
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
}
/*5*/
#include<stdio.h>
int main(void)
{
	char start = 'A';
	char end;
	char ch = start;
	int row, clo;
	printf("输入一个大写字母：\n");
	scanf_s("%c", &end);
	printf("  字母金字塔\n");
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
}
/*6*/
#include <stdio.h> 
int main( void ) 
{    
	int start, end;
	printf("输入开始的数字：\n");
	scanf_s("%d", &start);
	printf("输入结束数字：\n");
	scanf_s("%d", &end);
	printf("原数\t平方\t立方\n");
	for (start;start <= end;start++)
	{
		printf("%d\t%d\t%d\n", start, start*start, start*start*start);
	}
	getchar();
	getchar();
	return 0;
}
/*7*/
#include<stdio.h>
#include<string.h>
#define SIZE 40
int main(void)
{
	char word[SIZE];
	int i;
	printf("请输入一个单词：\n");
	scanf_s("%s", word, 40);
	printf("该单词有%d个字母，单词是%s\n", strlen(word), word);
	printf("倒序为：");
	for (i = strlen(word - 1);i >= 0;i--)//strlen(word - 1)跳过字符串后面的空格
		printf("%c", word[i]);
	printf("\n");
	getchar();
	getchar();
	return 0;
}
/*8*/
#include<stdio.h>
int main(void)
{
	double a, b;
	int status;//输入状态
	printf("输入2个浮点数（输入q退出）：\n");
	while (scanf_s("%lf%lf", &a, &b) == 2)//验证是否输入了2个值
	{
		printf("结果是%.3lf", (a - b) / (a*b));
		printf("继续输入2个浮点数（输入q退出）：\n");
	}
	getchar();
	return 0;
}
/*9*/
#include<stdio.h>
float result(float a, float b);
int main(void)
{
	double a, b;
	int status;//输入状态
	printf("输入2个浮点数（输入q退出）：\n");
	while (scanf_s("%lf%lf", &a, &b) == 2)//验证是否输入了2个值
	{
		printf("结果是%.3lf", result(a,b));
		printf("继续输入2个浮点数（输入q退出）：\n");
	}
	getchar();
	return 0;
}
float result(float a, float b)
{
	float result;//result名称不唯一
	result = (a - b) / (a*b);
	return result;
}
/*10*/
#include<stdio.h>
int main(void)
{
	int up, down;//上限和下限
	printf("输入上限整数和下限整数：\n");
	scanf_s("%d %d", &up, &down);
	while (up>down)
	{
		int sum = 0;//初始化平方和sum
		for (int i = sum;i <= up;i++)
			sum = sum + i * i;
		printf("平方和从%d到%d是%d\n", up*up, down*down, sum);
		printf("继续输入上限整数和下限整数：\n");
		scanf_s("%d %d", &up, &down);
	}
	printf("结束！\n");
	getchar();
	getchar();
	return 0;
}
/*11*/
#include<stdio.h>
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
}
/*12*/
#include<stdio.h>
int main(void)
{
	int times;
	float count1 = 1.0f;//分母
	float count2 = 1.0f;//分母
	float sum1 = 0.0;
	float sum2 = 0.0;
	printf("输入计算次数(输入0或负数退出):\n");
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
	printf("第一个公式的计算结果为：%f\n", sum1);
	printf("第二个公式的计算结果为：%f\n", sum2);
	getchar();
	getchar();
	return 0;
}
/*13*/
#include<stdio.h>
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
}
/*14*/
#include<stdio.h>
#define SIZE 8
int main(void)
{
	double arry1[SIZE];
	double arry2[SIZE];
	int i;

	printf("输入值：\n");
	for (i = 0;i < SIZE;i++)
		scanf_s("%lf", &arry1[i]);//读入第一个数组
	arry2[0] = arry1[0];//初始化第二个数组
	for (i = 1;i < SIZE;i++)
		arry2[i] = arry2[i - 1] + arry1[i];//计算第二个元组各数之和
	for (i = 0;i < SIZE;i++)
		printf("%8.2lf", arry1[i]);
	printf("\n");
	for (i = 0;i < SIZE;i++)
		printf("%8.2lf", arry2[i]);
	
	getchar();
	getchar();
	return 0;
}
/*15*/
#include<stdio.h>
#define SIZE 255
int main(void)
{
	char arry[SIZE];
	int i = -1;
	printf("输入一个单词：\n");
	do
	{
		i++;//由arry[0]开始循环读入
		scanf_s("%c", &arry[i]);
	} while (arry[i]!='\n');
	for (;i >= 0;i--)
		printf("%c", arry[i]);
	getchar();
	return 0;
}
/*16*/
#include<stdio.h>
#define Daphne_RATE 0.10    //Daphne利率
#define Deiedre_RATE 0.05   //Deiedre利率
#define MONEY 100.0        //投资100元
int main(void)
{
	int year=0;
	double Daphne_money=MONEY;   //Daphne的投资额
	double Deiedre_money=MONEY;  //Deiedre的投资额
	while (Deiedre_money <= Daphne_money)   //当Deiedre投资额超过Daphne的投资额退出循环
	{
		year++;
		Daphne_money = Daphne_money + MONEY * Daphne_RATE;
		Deiedre_money = Deiedre_money + Deiedre_money * Deiedre_RATE;
	}
	printf("用了%d年Deiedre的投资额超过Daphne的投资额\n", year);
	printf("Daphne的投资额为：%f\tDeiedre的投资额为%f\n", Daphne_money, Deiedre_money);
	getchar();
	return 0;
}
/*17*/
#include<stdio.h>
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
	printf("%d年后Chuckie会取完账户里的钱\n", year);
	getchar();
	return 0;
}
/*18*/
#include<stdio.h>
#define DB_NUMBER 150    //邓巴数
int main(void)
{
	int weeks = 1;
	int friends = 5;
	while (friends<DB_NUMBER)
	{
		friends = (friends - weeks) * 2;
		printf("%d周后，Rabnud博士有%d个朋友\n", weeks, friends);
		weeks++;
	}
	getchar();
	return 0;
}
/*****编程练习7*****/
/*1*/
#include<stdio.h>
int main(void)
{
	char  ch;
	int spa_count=0, lin_count=0, oth_count=0;   //空格数，换行符数，其他字符数
	printf("输入字符进行统计（输入字符‘#’退出程序）：\n");
	while ((ch=getchar())!='#')
	{
		if (ch == ' ')
			spa_count++;
		else if (ch == '\n')
			lin_count++;
		else
			oth_count++;
	}
	printf("你输入的字符中空格数有%d个，换行符有%d个，其他字符数有%d个\n", spa_count, lin_count, oth_count);
	getchar();
	getchar();
	return 0;
}
/*2*/
#include<stdio.h>
int main(void)
{
	char ch;
	const int line = 8;
	int chsum = 0;//统计字符数
	printf("输入字符进行统计（输入‘#’字符结束）：\n");
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
}
/*3*/
#include<stdio.h>
int main(void)
{
	int a;
	int ou_count = 0;//偶数个数
	int ji_count = 0;//奇数个数
	int ou_sum = 0;//偶数的和
	int ji_sum = 0;//奇数和
	float ou_average;//偶数平均值
	float ji_average;//奇数平均值
	printf("输入整数进行计算（输入‘0’结束）：");
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
		printf("偶数个数：%d\n", ou_count);
		if (ou_count>0)
		{
			ou_average = ou_sum / ou_count;
			printf("偶数平均值为：%.2f\n", ou_average);
		}
		printf("奇数个数：%d\n", ji_count);
		if (ji_count>0)
		{
			ji_average = ji_sum / ji_count;
			printf("奇数平均值为：%.2f\n", ji_average);
		}
	printf("结束\n");
	getchar();
	getchar();
	return 0;
}
/*4*/
#include<stdio.h>
int main(void)
{
	char ch;
	int count1=0;//替换句号的次数
	int count2=0;//替换感叹号的次数
	printf("输入字符进行统计(输入‘#’结束)：\n");
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
	printf("\n'!'替代'.'进行了%d次\n", count1);
	printf("'!!'替代'！'进行了%d次\n", count2);
	getchar();
	getchar();
	return 0;
}
/*5*/
#include<stdio.h>
int main(void)
{
	char ch;
	int count1 = 0;//替换句号的次数
	int count2 = 0;//替换感叹号的次数
	printf("输入字符进行统计(输入‘#’结束)：\n");
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
	printf("\n'!'替代'.'进行了%d次\n", count1);
	printf("'!!'替代'！'进行了%d次\n", count2);
	getchar();
	getchar();
	return 0;
}
/*6*/
#include<stdio.h>
int main(void)
{
	char ch;
	char fir, sec;//第一个接收到的字符和第二个字符
	int count = 0;//ei出现的次数
	printf("输入进行统计(输入‘#’结束)：\n");
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
				count++;                //判断前一个字符是‘e’，第二个是‘i’，则次数加1
			//初始化fir和sec
			fir = 'a';
			sec = 'a';
			continue;
		}
		continue;
	}
	printf("'ei'出现了%d次\n",count);
	getchar();
	getchar();
	return 0;
}
/*7*/
#include<stdio.h>
#define BASE_MONEY 10.00//基本工资
#define BASE_TIME 40//基本加班时间
#define OVER_TIME 1.5//超过基本时间
#define MONY1 300//税率分界线1
#define MONY2 150//税率分界线2
#define RATE1 0.15//MONY1前的税率
#define RATE2 0.20//MONY2的税率
#define RATE3 0.25//剩下的税率
int main(void)
{
	double hours;//一周工作时间
	double sum;//工资总数
	double rate_mony;//税金
	double income;//净收入
	printf("输入一周工作小时数：\n");
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
	printf("工资总额是：%.2lf\t税金是：%.2lf\t净收入是：%.2lf\n", sum, rate_mony, income);
	getchar();
	getchar();
	return 0;
}
/*8*/
#include<stdio.h>
#define BASE_TIME 40     //基本加班时间
#define OVER_TIME 1.5    //超过基本时间
#define MONY1 300       //税率分界线1
#define MONY2 150          //税率分界线2
#define BASE_LEVEL1 8.75
#define BASE_LEVEL2 9.33
#define BASE_LEVEL3 10.00
#define BASE_LEVEL4 11.20
#define RATE1 0.15             //MONY1前的税率
#define RATE2 0.20            //MONY2的税率
#define RATE3 0.25           //剩下的税率
int main(void)
{
	int choice;
	double basy_money;
	double hours;            //一周工作时间
	double sum;             //工资总数
	double rate_money;      //税金
	double income;        //净收入
	printf("*******************************************************\n");
	printf("输入与薪资或操作对应的编号进行操作：\n");
	printf("1) $8.75/hours      \t2) $9.33/hours\n");
	printf("3) $10.00/hours     \t4) $11.20/hours\n");
	printf("5) 退出\n");
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
			printf("请输入1-4数字进行选择（输入数字5退出）。\n请输入正确的数字\n");
			continue;
		}
		printf("输入一周工作小时数：\n");
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
		printf("工资总额是：%.2lf\t税金是：%.2lf\t净收入是：%.2lf\n", sum, rate_money, income);
		printf("输入下一个数字继续\n");
	}
	getchar();
	return 0;
}
/*9*/
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int limit;//输入的数
	int num;
	int div;
	bool numIsPrime;   //判断是否为素数
	printf("输入正整数：");
	while (scanf_s("%d",&limit) == 1 && limit > 0)
	{
		if (limit > 1)
			printf("以下为素数：\n", limit);
		else
			printf("没有素数\n");
		for (num=2 ; num <= limit; num++)
		{
			for (div = 2, numIsPrime = true;(div*div) <= num;div++)
				if (num%div == 0)
					numIsPrime = false;
			if (numIsPrime)
				printf("%d是素数。\n", num);
		}
		printf("输入正整数(输入q退出)：");
	}
	printf("结束\n");
	getchar();
	return 0;
}
/*10*/
#include<stdio.h>
#define LEVEL1 17850
#define LEVEL2 23900
#define LEVEL3 29750
#define LEVEL4 14875
#define RATE1 0.15
#define RATE2 0.28
int main(void)
{
	int choice;             //选择号码
	long level;            //税金等级    
	double income;         //收入
	double taxmoney;       //税金
	printf("****************************************************************************\n");
	printf("输入类别编号：\n");
	printf("1) 单身   \t2) 户主   \t3) 已婚，共有   \t4) 已婚，离异\n");
	printf("5) 退出\n");
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
			printf("请输入1-4数字进行选择（输入数字5退出）。\n请输入正确的数字\n");
			break;
		}
		printf("请输入你的收入：");
		scanf_s("%lf", &income);
		if (income <= level)
			taxmoney = income * RATE1;
		else
			taxmoney = level * RATE1 + (income - level)*RATE2;
		printf("你的税金为%.2lf元\n", taxmoney);
		printf("继续输入选择（输入5退出）：\n");
	}
	getchar();
	return 0;
}
/*11*/
#include<stdio.h>
#define Y_PRICE 2.05        //洋蓟 单价
#define T_PRICE 1.15        //甜菜
#define H_PRICE 1.09       //胡萝卜
#define DISCOUNT 0.05      //折扣优惠

#define WEIGHT_LEVEL1 5      //重量层次
#define WEIGHT_LEVEL2 20

#define TRANS_LEVEL1 6.5      //运费和包装费层次
#define TRANS_LEVEL2 14

#define TRANS_LEVEL3 0.5       //额外增费
int main(void)
{
	char ch;       //选择字符
	float input;     //输入磅数
	float y_weight = 0;   //洋蓟磅数
	float t_weight = 0;    //甜菜磅数
	float h_weight = 0;     //胡萝卜磅数
	float total_weight;   //总重
	float cost;            //花费
	float total_cost;         //总花费：买菜+运费
	float discount;           //折扣
	float tran_cost;         //运费
	float total_all;
	printf("************************************************\n");
	printf("输入编号进行选择：\n");
	printf("a:洋蓟\tb:甜菜\tc:胡萝卜\nq:退出并打印账单\n");
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
			printf("输入洋蓟的磅数：");
			scanf_s("%f", &input);
			y_weight = y_weight + input;
			break;
		case 'b':
			printf("输入甜菜的磅数：");
			scanf_s("%f", &input);
			t_weight = t_weight + input;
			break;
		case 'c':
			printf("输入胡萝卜的磅数：");
			scanf_s("%f", &input);
			h_weight = h_weight + input;
			break;
		default:
			printf("输入错误,请输入a,b,c选择蔬菜，q退出\n");
			break;
		}
		printf("继续输入进行购物\n");
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
	printf("你的订单如下：\n");
	printf("2.05美元/磅的洋蓟订购了%.2f磅\n", y_weight);
	printf("1.15美元/磅的甜菜订购了%.2f磅\n", t_weight);
	printf("1.09美元/磅的胡萝卜订购了%.2f磅\n", h_weight);
	printf("买蔬菜的费用为：%.2f\n", cost);
	if(cost>100)
		printf("折扣为：%.2f\n", discount);
	printf("运费和包装费为：%.2f\n", tran_cost);
	printf("所有费用为：%.2f\n", total_all);
	getchar();
	getchar();
	return 0;
}
/****编程练习8****/
/*1*/
#include<stdio.h>
int main(void)
{
	char ch;
	int a = 0;
	while ((ch=getchar())!=EOF)
		a++;
	printf("读取到%d个字符。\n", a);
	getchar();
	return 0;
}
/*2*/
#include<stdio.h>
int main(void)
{
	char ch;
	int i=0;            //统计每行的值
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
}
/*3*/
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int ch;
	                             //统计个数，用不到负数
	unsigned A_count = 0;        //大写
	unsigned a_count = 0;        //小写
	unsigned oth_count = 0;       //其他字符个数
	while ((ch=getchar())!=EOF)
	{
		//if (isupper(ch))         //用isupper()函数判断是否为大写
		if(ch>='A'&&ch<='Z')       //可以用该行替换上一行，这种方法不用再调用ctype.h
			A_count++;
		else if (islower(ch))      //用islower()函数判断是否为小写	
			a_count++;
		else
			oth_count++;
	}
	printf("输入中大写字母有%d个\n", A_count);
	printf("小写字母有%d个\n", a_count);
	printf("其他字符有%d个\n", oth_count);
	getchar();
	return 0;
}
/*4*/
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(void)
{
	char ch;
	int words = 0, count = 0;      //单词   字母总数
	bool inword = false;           //判断是否是一个单词
	float average;
	while ((ch=getchar())!=EOF)
	{
		if (isalpha(ch))
			count++;               //如果是个字符，字母+1
		if (!isspace(ch) && !inword)
		{
			inword = true;
			words++;               //如果不是空格且inword为true，单词+1
		}
		if (isspace(ch) && inword)
			inword = false;           //如果是个空格，且inword为true，此时并不是个完整单词，需要初始化inword
		if (ispunct(ch))
			continue;               //如果是字符，中断本次循环
	}
	average = count / words;
	printf("平均每个单词有%.2f个字母", average);
	getchar();
	return 0;
}
/*5*/
#include<stdio.h>
int main(void)
{
	int high = 100;
	int low = 1;
	int	guess=(low+high)/2;
	char response;
	printf("你在1-100中选一个数字，我能猜出那个数字！");
	printf("\n如果我回答正确，就输入'y'");
	printf("\n如果我猜的数太高，就输入'h'");
	printf("\n如果我猜的数太小，就输入'l'\n");
	printf("你选择的数字是 %d?\n", guess);
	while ((response=getchar())!='y')
	{
		if (response == '\n')
			continue;
		if (response != 'h'&&response != 'l')
		{
			printf("对不起，输入错误！请重新输入！\n");
			continue;
		}
		if (response == 'h')
			high = guess - 1;
		else if (response == 'l')
			low = guess + 1;
		guess = (high + low) / 2;
		printf("你选择的数字是 %d?\n", guess);
	}
	printf("哈哈！我猜对了！\n");
	getchar();
	getchar();
	return 0;
}
/*6*/
#include<stdio.h>
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
}
/*7*/
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define BASY_MONEY1 8.75       //基本工资
#define BASY_MONEY2 9.33
#define BASY_MONEY3 10.00
#define BASY_MONEY4 11.20

#define BASY_TIME 40         //基本工作时间
#define EXTR_TIME 1.5         //加班

#define LIN_MONEY1 300       //税率分界线
#define LIN_MONEY2 150       

#define RATE1 0.15            //税率
#define RATE2 0.20
#define RATE3 0.25
int get_first(void);          //创建函数，如果输入为空，则丢弃
int main(void)
{
	char ch;
	double basy_money;
	double hours;
	double sum;           //工资总数
	double rate_money;    //税金
	double income;        //净收入
	printf("*******************************************************\n");
	printf("输入与薪资或操作对应的编号进行操作：\n");
	printf("a) $8.75/hours      \tb) $9.33/hours\n");
	printf("c) $10.00/hours     \td) $11.20/hours\n");
	printf("q) 退出\n");
	printf("*******************************************************\n");
	while ((ch=get_first())!='q')   //调用get_first()函数
	{
		if (ch =='\n')
			continue;
		ch = tolower(ch);       //将大写字母转为小写
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
			printf("请输入a-d进行选择（输入q退出）。\n请输入正确的数字\n"); break;
		}
		printf("输入一周工作小时数：\n");
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
		printf("工资总额是：%.2lf\t税金是：%.2lf\t净收入是：%.2lf\n", sum, rate_money, income);
		printf("输入下一个数字继续\n");
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
}
/*8*/
#include<stdio.h>
#include<ctype.h>
int get_first(void);
float get_num(void);
int main(void)
{
	char ch;
	float first, second;
	printf("输入你想进行运算的选项：\n");
	printf("a.加法\ts.减法\n");
	printf("m.乘法\td.除法\n");
	printf("q.退出\n");
	while ((ch=get_first())!='q')
	{
		ch = tolower(ch);
		if (ch != 'a'&& ch != 's'&& ch != 'm'&& ch != 'd')
		{
			printf("你只能输入a,s,m,d,q中的一个:");
			continue;
		}
		printf("输入第一个数：");
		first = get_num();
		printf("输入第二个数：");
		second = get_num();
		if (ch == 'd')
		{
			while (second == 0)
			{
				printf("输入一个大于0的数：");
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
		printf("输入你想进行运算的选项：\n");
		printf("a.加法\ts.减法\n");
		printf("m.乘法\td.除法\n");
		printf("q.退出\n");
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
		printf("%c不是数字\n请输入例如2.5，-1.78E8，3之类的数字：",ch);
	}
	return input;
}
/*********编程练习9***********/
/*复习题9*/
#include<stdio.h>
void mennu(void);        //菜单函数
int limt(int up, int down);    //上下限函数
int main(void)
{
	int ch;
	mennu();
	while ((ch=limt(4,1))!=4)
	{
		printf("%d一个正确的选择！\n",ch);
		mennu();
	}
	getchar();
	getchar();
	getchar();
	return 0;
}
void mennu(void)
{
	printf("请选择列表中对应的数字：\n");
	printf("1) 复制文件 \t2) 移动文件\n");
	printf("3) 删除文件 \t4) 退出\n");
	printf("输入你选择的数字：\n");
}
int limt(int up, int down)
{
	int input;
	int a=scanf_s("%d", &input);
	while (a==1&&(input > up || input < down))
	{
		printf("输入数值超过限制!\n");
		mennu();
		scanf_s("%d", &input);
	}
	if (a!=1)
	{
		printf("没有数字输入!\n");
		input = 4;
	}
	return input;
}
/*编程练习1*/
#include<stdio.h>
double min(double x, double y);       
int main(void)
{
	double a, b;
	printf("输入两个小数，将输出较小的值（输入q退出）：\n");
	while (scanf_s("%lf %lf", &a, &b)==2)
	{
		printf("%lf和%lf中较小的数是：%lf", a, b, min(a, b));
		printf("继续输入进行比较（输入q退出）：\n");
	}
	getchar();
	return 0;
}
double min(double x, double y)
{
	return x < y ? x : y;
}
/*2*/
#include<stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
	char c;
	int row;
	int clum;
	printf("该程序要求输入一个字符并按输入的行列数打印\n");
	printf("输入你想打印的字符：");
	scanf_s("%c", &c);
	printf("输入你想打印的行和列（用空格分开）：");
	scanf_s("%d %d", &row, &clum);
	printf("\n");
	chline(c, row, clum);
	getchar();
	getchar();
	return 0;
}
void chline(char ch, int i, int j)
{
	for (int x = 0; x < i; x++)
	{
		for (int y = 0; y < j; y++)
			putchar(ch);
		putchar('\n');
	}
}
/*3*/
#include<stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
	char ch;
	int row, clo;
	printf("输入想要打印的字符：");
	while ((ch=getchar())!='#')
	{
		if (ch == '\n')
			continue;
		printf("输入想要打印的次数和行数：");
		if (scanf_s("%d %d", &clo, &row) != 2)
			break;
		chline(ch, clo, row);
		printf("继续输入下一个想打印的字符（输入#退出）：");
	}
	getchar();
	return 0;
}
void chline(char ch, int i, int j)
{
	for (int x = 0; x < i; x++)
			{
				for (int y = 0; y < j; y++)
					putchar(ch);
				putchar('\n');
			}
}
/*4*/
#include<stdio.h>
double Har_average(double num1, double num2);        //调和平均数
int main(void)
{
	double a = 3.14, b = 3.15, c;
	c=Har_average(a, b);
	printf("%lf", c);
	getchar();
	return 0;
}
double Har_average(double num1, double num2)
{
	double down_num1, down_num2, down_avweage;
	down_num1 = 1 / num1;
	down_num2 = 1 / num2;
	down_avweage = 1 / ((down_num1 + down_num2) / 2);
	return down_avweage;
}
/*5*/
#include<stdio.h>
void large_of(double *p1, double *p2);
int main(void)
{
	double a, b;
	printf("输入两个值：");
	while (scanf_s("%lf %lf",&a,&b)==2)
	{
		large_of(&a, &b);
		printf("交换后的值为%lf和%lf\n", a, b);
		printf("继续输入（输入q退出）：");
	}
	getchar();
	return 0;
}
void large_of(double *p1, double *p2)
{
	if (*p1 > *p2)
		*p2 = *p1;
	else
		*p1 = *p2;
}
/*6*/
#include<stdio.h>
void change(double *p1, double *p2, double*p3);
int main(void)
{
	double a, b, c;
	while (scanf_s("%lf %lf %lf", &a, &b,&c) == 3)
			{
				change(&a, &b, &c);
				printf("交换后的值为%lf和%lf和%f\n", a, b,c);
				printf("继续输入（输入q退出）：");
			}
			getchar();
			return 0;
}
void change(double *p1, double *p2, double *p3)
{
	double max, min, mid;
	max = *p1;
	if (max < *p2)
		max = *p2;
	if (max < *p3)
		max = *p3;
	min = *p1;
	if (min > *p2)
		min = *p2;
	if (min > *p3)
		min = *p3;
	mid = *p1 + *p2 + *p3 - max - min;
	*p1 = min;
	*p2 = mid;
	*p3 = max;
}
/*7*/
#include<stdio.h>
#include<ctype.h>
int report(char ch);
int main(void)
{
	char ch;
	int pos;            //数值位置
	printf("请输入字符：");
	while ((ch=getchar())!=EOF)
	{
		if (ch == '\n')
		{
			continue;
		}
		pos = report(ch);
		if (pos == -1)
		{
			printf("%c不是字母！\n", ch);
		}
		else
		{
			printf("%c在字母表中的位置是%d!\n", ch, pos);
		}
		printf("继续输入:");
	}
	getchar();
	return 0;
}
int report(char ch)
{
	if (isalpha(ch))                 //判断是否为字母
	{
		return toupper(ch) - 'A' + 1;       //将小写转换为大写；也可以将大写转换为小写，‘A’要改为‘a’
	}
	else
	{
		return -1;
	}
}
/*8*/
#include<stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;
	printf("输入数字和指数，计算整数幂结果（q退出）：");
	while (scanf_s("%lf %d",&x,&exp)==2)
	{
		xpow = power(x, exp);
		if (xpow == 1)
			continue;
		printf("%.3g的%d次幂为%.5g\n", x, exp, xpow);
		printf("继续输入（q退出）：");
	}
	getchar();
	return 0;
}
double power(double n, int p)
{
	double pow = 1;
	if (p == 0)
	{
		if (n==0)
		{
			printf("0的0次幂未定义，请输入其它值:\n");
		}
		pow = 1;
	}
	else if (p==0)
	{
		pow = 0;
	}
	else if (p>0)
	{
		for (int i = 1; i <= p; i++)
		{
			pow *= n;
		}
	}
	else
	{
		pow = 1 / power(n, -p);     //运用了递归   
        /////////不用递归的写法：for(int i=1; i <= -p; i++)
         ////////////////////       {
////////////////////////////			pow*=n;
////////////////////////////	     }	      //此种方法返回的是 1/pow
	}
	return pow;
}
/*9*/
//////上题所示/////////
/*10*/
#include<stdio.h>
void to_base_n(int x, int system);
int main(void)
{
	int num;
	int system_num;
	int status;
	printf("输入一个整数：");
	while (scanf_s("%d",&num)==1)
	{
		printf("输入进制（2-10）:");
		while ((status=scanf_s("%d",&system_num))==1&&(system_num<2||system_num>10))
		{
			printf("输入进制超过限定值，请输入2-10之间的数字：");
		}
		if (status != 1)
			break;
		to_base_n(num, system_num);
		printf("\n");
		printf("继续输入一个整数（q退出）：");
	}
	getchar();
	return 0;
}
void to_base_n(int x, int system)
{
	int r;
	r = x % system;
	if (x >= system)
	{
		to_base_n(x / system, system);           //递归
	}
	putchar('0' + r);           //因为putchar()函数只能输出字符，我们要输出的是字符，所以运用ASCALL码值加上r
}
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
/********编程练习10**********/
/*1*/
#include<stdio.h>
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
}
/*2*/
#include<stdio.h>
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
}
/*3*/
#include<stdio.h>
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
}
/*4*/
#include<stdio.h>
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
}
/*5*/
#include<stdio.h>
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
}
/*6*/
#include<stdio.h>
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
}
/*8*/
#include<stdio.h>
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
}
/*9*/
#include<stdio.h>
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
}
/*10*/
#include<stdio.h>
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
}
/*11*/
#include<stdio.h>
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
}
/*12*/
#include<stdio.h>
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
}
/*13*/
#include<stdio.h>
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
}
/*14*/
//////////////我的vs2017似乎不支持变长数组，但大致定义如下
#include<stdio.h>
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
}
/************************11章练习********************************/
/***********练习题9-13****************/
/*9*/
#include<stdio.h>
char *s_gets(char *st, int n) 
{
	char *ret_val;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (*st != '\n' && *st != '\0')
			st++;
		if (*st == '\n')
		{
			*st = '\0';
		}
		else
		{
			while (getchar()!='\n')
			{
				continue;
			}
		}
	}
	return ret_val;
}
/*10*/
#include <stdio.h>
int strlen(const char *str)
{
	int count;
	while (str++)
	{
		count++;
	}
	return (count);
}
/*11*/
#include<stdio.h>
#include<string.h>
char *s_gets(char *str, int n)
{
	char ret_val;
	char *find;
	ret_val = fgets(str, n, stdin);
	if (ret_val)
	{
		find = strchr(str, '\n');                //查找换行符
		if (find)
		{
			*find = '\0';
		}
		else {
			while (getchar()!='\n')
			{
				continue;
			}
		}
	}
	return ret_val;
}
/*12*/
#include<stdio.h>
char *s_spac(const char *s)
{
	while (*s !=' ' && *s != '\0')
	{
		*s++;
	}
	if (*s == '\0' )
	{
		return NULL;
	}
	else
	{
		return s;
	}
}
/*13*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ANSWER "GRANT"
#define SIZE 40
char *s_gets(char *s, int n);
void ToUpper(char *str);
int main(void)
{
	char try[SIZE];
	puts("Who is buried in Grant's tomb?");
	s_gets(try, SIZE);
	ToUpper(try);
	while (strcmp(try,ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
		ToUpper(try);
	}
	puts("That's right!");
	getchar();
	return 0;
}
char *s_gets(char *s, int n)
{
	char ret_val;
	ret_val = fgets(s, n, stdin);
	if (ret_val)
	{
		while (*s != '\n' && *s != '\0')
		{
			s++;
		}
		if (*s == '\n')
		{
			*s = '\0';
		}
		else
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	}
	return ret_val;
}
void ToUpper(char *str)
{
	while (*str != '\0')
	{
		*str = toupper(*str);
		str++;
	}
}
/***********************************编程练习11***************************************/
/*1*/
#include<stdio.h>
#define SIZE 10
char *getnchar(char *s, int n);
int main(void)
{
	char input[SIZE];
	char *str;
	puts("输入长度小于40的字符串：");
	str = getnchar(input, SIZE - 1);
	if (str == NULL )
	{
		puts("输入失败！");
	}
	else
	{
		puts(input);
	}

	getchar();
	return 0;
}
char *getnchar(char *s, int n)
{
	int i;
	char ch;
	for ( i = 0; i < n; i++)
	{
		ch = getchar();
		if (ch != EOF)                 
		{
			s[i] = ch;
		}
		else 
		{
			break;
		}
	}
	if (ch == EOF )
	{
		return NULL;
	}
	else
	{
		s[i] = '\0';
		return s;
	}
}
/*2*/
#include<stdio.h>
#define SIZE 10
char *getnchar(char *s, int n);
int main(void)
{
	char input[SIZE];
	char *str;
	puts("输入长度小于10的字符串：");
	str = getnchar(input, SIZE - 1);
	if (str == NULL)
	{
		puts("输入失败！");
	}
	else
	{
		puts(input);
	}

	getchar();
	return 0;
}
char *getnchar(char *s, int n)
{
	int i;
	char ch;
	for (i = 0; i < n; i++)
	{
		ch = getchar();
		if (ch != EOF && ch != ' ' && ch != '\n' && ch != '\t')
		{
			s[i] = ch;
		}
		else
		{
			break;
		}
	}
	if (ch == EOF)
	{
		return NULL;
	}
	else
	{
		s[i] = '\0';
		return s;
	}
}
/*3*/
#include<stdio.h>
#include<ctype.h>
#define SIZE 40
char *getword(char *str);
int main(void)
{
	char input[SIZE];
	while (getword(input) != NULL)
	{
		puts(input);
	}
	getchar();
	return 0;
}
char *getword(char *str)
{
	char ch;
	char *origal = str;
	while ((ch = getchar()) != EOF && isspace(ch))            //跳过第一个非空白字符前的所有空白
	{
		continue;
	}
	if (ch == EOF)
	{
		return NULL;
	}
	else
	{
		*str = ch;       
		*str++;               //单词的首字符
	}
	while ((ch = getchar()) != EOF && !isspace(ch))    //单词剩下的字符
	{
		*str = ch;
		*str++;
	}
	*str = '\0';           //添加字符串结尾字符
	if (ch == EOF)
	{
		return NULL;
	}
	else
	{
		while (ch != '\n')
		{
			ch = getchar();      //舍弃剩下字符
		}
		return origal;
	}
}
/*4*/
#include<stdio.h>
#include<ctype.h>
#define SIZE 40
char *getword(char *str, int n);
int main(void)
{
	char input[SIZE];
	int n;
	puts("输入可读取的最大字符数：");
	scanf_s("%d", &n);
	puts("输入字符串：");
	while (getword(input,n) != NULL)
	{
		puts(input);
		puts("输入可读取的最大字符数：");
		scanf_s("%d", &n);
		puts("输入字符串：");
	}
	getchar();
	return 0;
}
char *getword(char *str, int n)
{
	char ch;
	char *origal = str;
	int count = 0;               //计数器

	while ((ch = getchar()) != EOF && isspace(ch))
	{
		continue;
	}
	if (ch == EOF)
	{
		return NULL;
	}
	else
	{
		*str++ = ch;
		count++;
	}
	while ((ch = getchar()) != EOF && !isspace(ch) && count<n)
	{
		*str++ = ch;
		count++;
	}
	*str = '\0';
	if (ch == EOF)
	{
		return NULL;
	}
	else
	{
		while (ch != '\n')
		{
			ch = getchar();
		}
		return origal;
	}
}
/*5*/
#include<stdio.h>
#include<string.h>
#define SIZE 40
char *get_position(char *str, char ch);
int main(void)
{
	char str[SIZE];
	char ch;
	char *strback;
	puts("输入字符串：");
	while (fgets(str,SIZE,stdin) && str[0] != '\0')
	{
		puts("输入查找字符：");
		ch = getchar();
		while (getchar() != '\n')
		{
			continue;                           //清空缓冲区
		}
		strback = get_position(str, ch);
		if (strback != NULL)
		{
			puts("字符\t地址");
			putchar(*strback);
			printf("\t%p\n", strback);
		}
		else
		{
			puts("字符串中不存在该字符！");
		}
		puts("继续输入字符串：");
	}
	system("pause");
	return 0;
}
char *get_position(char *str, char ch)
{
	while (*str != '\0' )
	{
		if (*str == ch)
		{
			return str;
		}
		str++;
	}
	return NULL;
}
/*6*/
#include<stdio.h>
#include<string.h>
#define SIZE 40
_Bool is_within(const char *str, char ch);
char s_gets(char *st, int n);
int main(void)
{
	char input[SIZE];
	char ch;
	int found;
	puts("输入字符串：");
	while (s_gets(input,SIZE) && input[0] != '\0')
	{
		puts("输入一个字符：");
		ch = getchar();
		while (getchar() != '\n')
			continue;
		found = is_within(input, ch);
		if (found == 0)
		{
			printf("没有找到字符%c。\n", ch);
		}
		else
		{
			printf("字符串%s中找到字符%c\n", input, ch);
		}
		puts("继续输入字符串：");
	}
	system("pause");
	return 0;
}
_Bool is_within(const char *str, char ch)
{
	while (*str != ch && *str != '\0')
		str++;
	return *str;                          //如果知道指针指向'\0'时都没有找到指定字符的时候，将返回空字符的值为0  
}
char s_gets(char *st, int n)
{
	char ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
/*7*/
#include<stdio.h>
#define SIZE 50
char *mystrncpy(char *str1,char *str2, int n);
char *s_gets(char *st, int n);
int main(void)
{
	char str1[SIZE];
	char str2[SIZE];
	int n;
	puts("输入字符串：");
	while (s_gets(str2, SIZE)&&str2[0] != '\0')
	{
		puts("输入你想复制的字符串长度：");
		scanf_s("%d", &n);
		getchar();
		if (n > SIZE)
			n = SIZE;
		mystrncpy(str1, str2, n);
		printf("复制的字符串：%s\n",str1);
		puts("输入字符串：");
		
	}
	system("pause");
	return 0;
}
char *mystrncpy(char *str1, char *str2, int n)
{
	while (n--)
	{
		*str1 = *str2;
		str2++;
		str1++;
	}
	if (n <= 0)
	{
		*str1 = '\0';
	}
	return str1;
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
		{
			st[i] = '\0';
		}
		else {
			while (getchar() != '\n')
			{
				continue;
			}
		}
	}
	return ret_val;
}
/*8*/
#include<stdio.h>
#define SIZE 40
char *string_in(const char *str1,const char *str2);
char *s_gets(char *st, int n);
int main(void)
{
	char origal[SIZE];                         //原始字符串
	char comper[SIZE];                        //用于比较的字符串
	char *find;
	puts("输入原本的字符串：");
	while (s_gets(origal,SIZE) && origal[0] != '\0')
	{
		puts("输入要进行比较的字符串:");
		s_gets(comper, SIZE);
		find = string_in(origal, comper);
		if (find)
		{
			puts("找到字符串了！");
			printf("字符串的地址是：%p\n",find);
		}
		else
		{
			puts("没有找到！");
		}
		puts("输入原本的字符串：");
	}
	system("pause");
	return 0;
}
#include<string.h>
char *string_in(const char *str1,const char *str2)
{
	int len2 = strlen(str2);
	int num;                                   //最大比较次数
	int nomath = 1;                           ////用于判断两个字符是否包含 
	num = strlen(str1) + 1 - len2;
	if (num > 0)
	{
		while ((nomath = strcmp(str1, str2, len2)) && num--)
			str1++;
	}
	if (nomath)
	{
		return NULL;
	}
	else
	{
		return str1;
	}
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
		{
			st[i] = '\0';
		}
		else {
			while (getchar() != '\n')
			{
				continue;
			}
		}
	}
	return ret_val;
}
/*9*/
#include<stdio.h>
#include<string.h>
#define SIZE 40
void reverse(char *str);
char *s_gets(char *st, int n);
int main(void)
{
	char str[SIZE];
	puts("输入字符串排序：");
	while (s_gets(str,SIZE)!= NULL && str[0] != '\0')
	{
		reverse(str);
		puts(str);
		puts("输入字符串排序：");
	}
	system("pause");
	return 0;
}
void reverse(char *str)
{
	char temp;
	int length = strlen(str) - 1;
	for (int i = length ,j= 0; j < length / 2; i--,j++)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

}
char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
/*10*/
#include<stdio.h>
#include<string.h>
#define SIZE 40
int pass_space(char * str);
char * s_gets(char *st, int n);
int main(void)
{
	char origal[SIZE];
	puts("输入小于40的字符串：");
	while (s_gets(origal,SIZE) && origal[0] != '\0')
	{
		pass_space(origal);
		puts(origal);
		puts("输入小于40的字符串：");
	}
	system("pause");
	return 0;
}
int pass_space(char *str)
{
	char * p;
	while (*str)
	{
		if (*str == ' ')
		{
			p = str;
			do
			{
				*p = *(p + 1);
				p++;
			} while (*p);
		}
		else
		{
			str++;
		}
	}
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
			if (find)
			{
				*find = '\0';
			}
			else
			{
				while (getchar() != '\n')
					continue;
			}
	}
	return ret_val;
}
/*11*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 80
#define LIM 10

void print_origal(char *str[], int n);           //源字符串列表打印
void print_ASCII(char *str[], int n);            //ASCII码顺序打印
void print_length(char *str[], int n);           //长度递增顺序打印
int str_firstword_length(char *str);             //查找第一个单词长度
void print_firstword_length(char *str[], int n); //按第一个单词长度打印

char *s_gets(char *st, int n);
int main(void)
{
	char input[LIM][SIZE];
	char *p[LIM];
	char choice;
	int n = 0;


		puts("输入大小不超过10的字符串：");
		do
		{
			if (gets(input[n]) == NULL) break;
			p[n] = input[n];
			n++;
		} while (n < 10);
		puts("输入字符进行选择：");
		puts("a.输出初始字符串列表");
		puts("b.按ASCII顺序输出字符串");
		puts("c.按升序递增顺序输出字符串");
		puts("d.按字符串中第一个单词的长度输出字符串");
		puts("q.退出");
		choice = getchar();
		while (choice != 'q')
		{
			choice = tolower(choice);
			switch (choice)
			{
			case 'a':
				puts("a.输出初始字符串列表"); print_origal(p, n); break;
			case 'b':
				puts("b.按ASCII顺序输出字符串"); print_ASCII(p, n); break;
			case 'c':
				puts("c.按升序递增顺序输出字符串"); print_length(p, n); break;
			case 'd':
				puts("d.按字符串中第一个单词的长度输出字符串"); print_firstword_length(p, n); break;
			default:
				puts("请正确输入字符！");
				break;
			}
			while (getchar() != '\n')
			{
				continue;
			}
			puts("输入字符进行选择：");
			puts("a.输出初始字符串列表");
			puts("b.按ASCII顺序输出字符串");
			puts("c.按升序递增顺序输出字符串");
			puts("d.按字符串中第一个单词的长度输出字符串");
			puts("q.退出");
			choice = getchar();
		}
	system("pause");
	return 0;
}
void print_origal(char *str[], int n)
{
	for (int i = 0; i < n; i++)
	{
		puts(str[i]);
	}
}
void print_ASCII(char *str[], int n)
{
	char *temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n -i- 1; j++)
		{
			if (strcmp(str[j],str[j+1]) > 0)
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}
	print_origal(str, n);
}
void print_length(char *str[], int n)
{
	char *temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (strlen(str[j]) > strlen(str[j+1]))
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}
	print_origal(str, n);
}
int str_firstword_length(char *str)
{
	int i=0;
	for (; !isalpha(*str); str++)
	{
		if (*str == '\0')
			return 0;
	}
	for ( i = 1; isalpha(str[i]); i++)
	{
		continue;
	}
	return i;
}
void print_firstword_length(char *str[], int n)
{
	char *temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (str_firstword_length(str[j]) > str_firstword_length(str[j+1]))
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
		}
	}
	print_origal(str, n);
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
		{
			*find = '\0';
		}
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}
	return ret_val;
}
/*12*/
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(void)
{
	char ch;               //读入字符
	int low_count = 0;      //小写
	int up_count = 0;        //大写
	int num_count = 0;      //数字字符
	int words_count = 0;      //单词
	int marks_count = 0;      //标点符号
	bool inword = false;      //判断是否为一个单词

	puts("输入文本进行分析：");
	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
			low_count++;
		else if (isupper(ch))
			up_count++;
		else if (isdigit(ch))
			num_count++;
		else if (ispunct(ch))
			marks_count++;
		if (!isspace(ch) && !inword)
		{
			inword = true;             //开始一个新单词      
			words_count++;             //计数单词
		}
		if (isspace(ch) && inword)
		{
			inword = false;          //单词词尾
		}
	}
		printf("\n小写字母：%d，大写字母：%d，数字个数：%d，单词个数：%d，标点符号：%d\n",
			low_count, up_count, num_count, words_count, marks_count);
		system("pause");
		return 0;
}
/*13*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 40
char *s_gets(char *st, int n);
int main(void)
{
	char str[SIZE];
	char *p, temp;
	int length, n,i;

	s_gets(str, SIZE);

	for ( i = 0,p = str,n = strlen(str); i < n / 2; i++)      //将整个字符串倒序
	{
		temp = *(p + n - 1 - i);
		*(p + n - 1 - i) = *(p + i);
		*(p + i) = temp;
	}

	p = str;
	length = 0;
	do                               //将字符串中单词倒序
	{ 
		if (isalpha(*p))
			length++;
		else
		{
			if (length > 1)
			{
				for (i = 0; i < length / 2; i++)
				{
					temp = *(p - 1 - i);
					*(p - 1 - i) = *(p - length + i);
					*(p - length + i) = temp;
				}
				length = 0;
			}
		}
	} while (*p++ != '\0');
	puts(str);

	system("pause");
	return 0;
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
/*14*/
#include<stdio.h>
#include<stdlib.h>         //使用atof()函数：将数字转换为double
#include<math.h>           //使用pow()函数，求幂运算
int main(int argc, char *argv[])
{
	double num, exp;
	if (argc != 3)
	{
		printf("用法：%s数字指数\n", argv[0]);
	}
	else
	{
		num = atof(argv[1]);
		exp = atof(argv[2]);
		printf("%lf的%lf次幂 = %g\n", num, exp, pow(num, exp));
	}
	return 0;
}
/*15未完成*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 40
int myatoi(char *str);
char *s_gets(char *st, int n);

int main(void)
{
	char str[SIZE];
	s_gets(str, SIZE);
	myatoi(str);
	puts(str);
	system("pause");
	return 0;
}
int myatoi(char *str)
{
	int n = 0;
	int length = 0;
	while (*str)
	{
		n *= 10;
		if (!isdigit(*str))
		{
			return 0;
		}
		n += *str - '0';
		str++;
	}
	return n;
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
/*16*/
#include<stdio.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
	char mode = 'p';
	int ok = 1;
	int ch;

	if (argc > 2)
	{
		printf("用法：%s [-p | -u | -l]\n", argv[0]);
		ok = 0;
	}
	else if (argc == 2)
	{
		if (argv[1][0] != '-')
		{
			printf("用法：%s [-p | -u | -l]\n", argv[0]);
			ok = 0;
		}
		else
		{
			switch (argv[1][1])
			{
			case 'p':
			case 'u':
			case 'l':mode = argv[1][1]; break;
			default:printf("%s是无效的标志；", argv[1]);
				printf("使用默认标志(-p).\n");
				break;
			}
		}
	}
		if (ok)
		{
			while ((ch = getchar()) != EOF)
			{
				switch (mode)
				{
				case 'p':
					putchar(ch); break;
				case 'u':
					putchar(toupper(ch)); break;
				case 'l':
					putchar(tolower(ch)); break;
				default:
					break;
				}
			}
		}
	system("pause");
	return 0;
}
/****************编程练习12**************************/
/*1*/
#include<stdio.h>

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
}
/*2*/

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
}
/*3*/
/////////////////////////////pe12-3a.h/////////////////////////////////////
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
}
/*4*/
#include<stdio.h>
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
}
/*5*/
#include<stdio.h>
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
}
/*6*/
#include<stdio.h>
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
}
/*7*/
#include<stdio.h>
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
}
/*8*/
//pe12-8.c
#include<stdio.h>
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
}
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
/********************编程练习14*************************/
/*1*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct month                  //结构声明
{
	char name[10];
	char abbrev[4];         //月份名缩写
	int days;
	int mnumber;
};
struct month months[12] =   //初始化结构数组
{
	{"January", "Jan", 31, 1},
	{"February", "Feb", 28, 2},
	{"March", "Mar", 31, 3},
	{"April", "Apr", 30, 4},
	{"May", "May", 31, 5},
	{"June", "Jun", 30, 6},
	{"July", "Jul", 31, 7},
	{"August", "Aug", 31, 8},
	{"September", "Sep", 30, 9},
	{"October", "Oct", 31, 10},
	{"November", "Nov", 30, 11},
	{"December", "Dec", 31, 12},
};

int totaldays(char *Mname);

int main(void)
{
	char input[10];
	int totalday;

	puts("输入月份名：");
	while (scanf_s("%s",input,10) == 1 && input[0] != 'q')
	{
		totalday = totaldays(input);
		if (totalday > 0)
		{
			printf("%s有%d天。\n", input, totalday);
		}
		else
		{
			printf("%s不是合法的输入", input);
		}
		printf("输入下一个月份：\n");
	}
	system("pause");
	return 0;
}
int totaldays(char *Mname)
{
	int total = 0;
	int Mnumber = 0;             //月份编号
	int i;

	Mname[0] = toupper(Mname[0]);        //首字母大写
	for ( i = 1; Mname[i] != '\0'; i++)
	{
		Mname[i] = tolower(Mname[i]);
	}
	for (i = 0; i < 12; i++)
	{
		if (strcmp(Mname, months[i].name) == 0)
		{
			Mnumber = months[i].mnumber;
			break;
		}
	}
	if (Mnumber == 0)
	{
		total = -1;
	}
	else
	{
		for ( i = 0; i < Mnumber; i++)
		{
			total += months[i].days;
		}
	}
	return total;
}
/*2*/
//法一：
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int days(int year, int month, int day);      //求总天数函数
int leadyear(int year);          //求平闰年函数

struct month                  //结构声明
{
	char name[10];
	char abbrev[4];         //月份名缩写
	int days;
	int mnumber;
};
struct month months[12] =   //初始化结构数组
{
	{"January", "Jan", 31, 1},
	{"February", "Feb", 28, 2},
	{"March", "Mar", 31, 3},
	{"April", "Apr", 30, 4},
	{"May", "May", 31, 5},
	{"June", "Jun", 30, 6},
	{"July", "Jul", 31, 7},
	{"August", "Aug", 31, 8},
	{"September", "Sep", 30, 9},
	{"October", "Oct", 31, 10},
	{"November", "Nov", 30, 11},
	{"December", "Dec", 31, 12},
};
int main(void)
{
	int year, month, day;
	char Mname[10];
	int i;

	puts("输入年：");
	while (scanf_s("%d", &year) == 1)
	{
		puts("输入月份：");
		if (scanf_s("%d",&month) ==1)
		{
			printf("\n");
		}
		else
		{
			scanf_s("%s", Mname, 10);
				//首字母大写，其它字母小写
				Mname[0] = toupper(Mname[0]);
				for (i = 1; Mname[i] != '\0'; i++)
					Mname[i] = tolower(Mname[i]);

			for ( i = 0; i < 12; i++)
			{
				//比较输入的月份名和月份名缩写
				if (strcmp(Mname, months[i].name) == 0 || strcmp(Mname, months[i].abbrev) == 0)
				{
					month = months[i].mnumber;
					break;
				}
			}
		}
		puts("输入日期：");
		if (scanf_s("%d",&day) != 1)
		{
			puts("错误！");
			exit(-1);                //当没有输入日期的时候，程序退出
		}
		else
		{
			printf("总天数%d天.\n", days(year, month, day));
		}
		while (getchar()!='\n')
		{
			continue;
		}
		puts("输入下一个年份（q退出）：");
	} 
	system("pause");
	return 0;
}
int days(int year, int month, int day)
{
	int totaldays = 0;
	int i;

	leadyear(year) ? (months[1].days = 29):(months[1].days = 28);  //判断平年和闰年
	for ( i = 0; i < month - 1; i++)       //由于计算天数需要根据某月的某一天，所以范围在该月的前一月
	{
		totaldays += months[i].days;
	}
	return totaldays + day;            //总天数等于该日期前面月数日期总和加上所输入的日期
}
int leadyear(int year)
{
	int i;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 100) == 0)
		return 1;
	else
		return 0;
}
//法二
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int leadyear(int year);
int day_ping(int year, char *pmonths, int days);
int day_run(int year, char *pmonths, int days);

struct month                  //结构声明
{
	char name[10];
	char abbrev[4];         //月份名缩写
	int days;
	int mnumber;
};
const struct month months[12] =   //初始化平年结构数组
{
	{"January", "Jan", 31, 1},
	{"February", "Feb", 28, 2},
	{"March", "Mar", 31, 3},
	{"April", "Apr", 30, 4},
	{"May", "May", 31, 5},
	{"June", "Jun", 30, 6},
	{"July", "Jul", 31, 7},
	{"August", "Aug", 31, 8},
	{"September", "Sep", 30, 9},
	{"October", "Oct", 31, 10},
	{"November", "Nov", 30, 11},
	{"December", "Dec", 31, 12},
};

const struct month months_run[12] =   //初始化闰年结构数组
{
	{"January", "Jan", 31, 1},
	{"February", "Feb", 29, 2},
	{"March", "Mar", 31, 3},
	{"April", "Apr", 30, 4},
	{"May", "May", 31, 5},
	{"June", "Jun", 30, 6},
	{"July", "Jul", 31, 7},
	{"August", "Aug", 31, 8},
	{"September", "Sep", 30, 9},
	{"October", "Oct", 31, 10},
	{"November", "Nov", 30, 11},
	{"December", "Dec", 31, 12},
};
int main(void)
{
	int year, days;
	char month[10];
	int Totaldays;

	puts("输入年份：");
	while (scanf_s("%d",&year) == 1)
	{
		puts("输入月份：");
		scanf_s("%s", month,10);
		puts("输入日期：");
		scanf_s("%d", &days);
		Totaldays = leadyear(year) ? day_run(year, month, days) : day_ping(year, month, days);
		if (Totaldays > 0)
		{
			printf("%d年截至%s月%d号已经经过了%d天。\n", year, month, days,Totaldays);
		}
		else
		{
			printf("输入错误！");
		}
		printf("继续输入年份(q退出)：");
	}
	system("pause");
	return 0;
}
int leadyear(int year)
{
	int i;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 100) == 0)
		return 1;
	else
		return 0;
}
int day_ping(int year, char *pmonths, int days)
{
	int i;
	int totaldays = 0;
	int monthnum = 0;

	if (isalpha(*pmonths))
	{
		pmonths[0] = toupper(pmonths[0]);
		for ( i = 1; pmonths[i] != '\0'; i++)
		{
			pmonths[i] = tolower(pmonths[i]);
		}
	}
	for ( i = 0; i < 12; i++)
	{
		if (strcmp(pmonths, months[i].name) == 0 || strcmp(pmonths, months[i].abbrev) == 0 || atoi(pmonths) == months[i].mnumber)
		{
			monthnum = months[i].mnumber;             
			break;
		}
	}
	if (monthnum == 0)
	{
		totaldays = -1;
	}
	else
	{
		for ( i = 0; i < monthnum - 1; i++)
		{
			totaldays += months[i].days;
		}
	}
	totaldays += days;
	return totaldays;
}

int day_run(int year, char *pmonths, int days)
{
	int i;
	int totaldays = 0;
	int monthnum = 0;

	if (isalpha(*pmonths))
	{
		pmonths[0] = toupper(pmonths[0]);
		for (i = 1; pmonths[i] != '\0'; i++)
		{
			pmonths[i] = tolower(pmonths[i]);
		}
	}
	for (i = 0; i < 12; i++)
	{
		if (strcmp(pmonths, months[i].name) == 0 || strcmp(pmonths, months[i].abbrev) == 0 || atoi(pmonths) == months[i].mnumber)
		{
			monthnum = months[i].mnumber;
			break;
		}
	}
	if (monthnum == 0)
	{
		totaldays = -1;
	}
	else
	{
		for (i = 0; i < monthnum - 1; i++)
		{
			totaldays += months_run[i].days;
		}
	}
	totaldays += days;
	return totaldays;
}
/*3*/
#include<stdio.h>
#include<string.h>

char s_gets(char *st, int n);
void sort_T(struct book *pb[], int n);
void sort_V(struct book *pb[], int n);

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
int main(void)
{
	struct book library[MAXBKS];
	struct book *pbk[MAXBKS];            //定义结构指针用于排序参数
	int count = 0;
	int index;

	printf("输入书名:");
	while (count < MAXBKS && s_gets(library[count].title,MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		printf("输入作者：");
		s_gets(library[count].author, MAXAUTL);
		printf("输入价格:");
		scanf_s("%f", &library[count].value);
		pbk[count] = &library[count];
		count++;
		while (getchar() != '\n')
		{
			continue;
		}
		if (count < MAXBKS)
		{
			printf("输入下一个书名：");
		}
	}
		printf("下面是书的清单(按输入顺序排序)：\n");
		for ( index = 0; index < count; index++)
		{
			printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
		}

		printf("下面是书的清单(按首字母排序)：\n");
		sort_T(pbk, count);
		for ( index = 0; index < count; index++)
		{
			printf("%s by %s:$%.2f\n", pbk[index]->title,pbk[index]->author,pbk[index]->value);
		}
		printf("下面是书的清单(按价格排序)：\n");
		sort_V(pbk, count);
		for ( index = 0; index < count; index++)
		{
			printf("%s by %s:$%.2f\n", pbk[index]->title, pbk[index]->author, pbk[index]->value);
		}

	system("pause");
	return 0;
}
char s_gets(char *st, int n)
{
	char *ret_val;
	char *find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
		{
			*find = '\0';
		}
		else
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	}
	return ret_val;
}
void sort_T(struct book *pb[], int n)
{
	struct book *temp;
	int i, j;

	for ( i = 0; i < n - 1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (strcmp(pb[j]->title,pb[i]->title) < 0)  //如果第二个字符小于第一个字符
			{
				temp = pb[j];                           //交换结果排序
				pb[j] = pb[i];
				pb[i] = temp;
			}
		}
	}
}
void sort_V(struct book *pb[], int n)
{
	struct book *temp;
	int i, j;

	for ( i = 0; i < n-1; i++)
	{
		for ( j = i + 1; j < n; j++)
		{
			if (pb[j]->value < pb[i]->value)    //如果第二个价格小于第一个
			{
				temp = pb[j];                   //交换值进行比较
				pb[j] = pb[i];
				pb[i] = temp;
			}
		}
	}
}
/*4*/
//a.
#include<stdio.h>
#include<string.h>

struct name
{
	char FirstName[20];
	char MiddleName[20];
	char LastName[20];
};
struct identity
{
	char SocialId[20];
	struct name Name;
};

void print(struct identity array[]);

int main(void)
{
	struct identity array[5] = 
	{
		{"302039823", {"Flossie", "Malan", "Dribble"}},
		{"001", {"Fan", "Yi", "Zhu"}},
		{"002", {"Fan", " ", "Long"}},
		{"003", {"Fan", "Nv", "Shao"}},
		{"004", {"Fan", "G", "P"}}
	};
	print(array);
	system("pause");
	return 0;
}
void print(struct identity array[])
{
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(array[i].Name.MiddleName, " ") != 0)      //结构数组中的Name结构中间名与空字符串进行比较
			printf("%s, %s %c. -- %s\n", array[i].Name.LastName, array[i].Name.FirstName, array[i].Name.MiddleName[0], array[i].SocialId);
		else
			printf("%s, %s %c -- %s\n", array[i].Name.LastName, array[i].Name.FirstName, array[i].Name.MiddleName[0], array[i].SocialId);
	}
}
//b.
#include<stdio.h>
#include<string.h>

struct name
{
	char FirstName[20];
	char MiddleName[20];
	char LastName[20];
};
struct identity
{
	char SocialId[20];
	struct name Name;
};

void print(char SocialId[],char FirstName[],char MiddleName[],char LastName[]);

int main(void)
{
	struct identity array[5] =
	{
		{"302039823", {"Flossie", "Malan", "Dribble"}},
		{"001", {"Fan", "Yi", "Zhu"}},
		{"002", {"Fan", " ", "Long"}},
		{"003", {"Fan", "Nv", "Shao"}},
		{"004", {"Fan", "G", "P"}}
	};
	for (int i = 0; i < 5; i++)
	{
		print(array[i].SocialId, array[i].Name.FirstName, array[i].Name.MiddleName, array[i].Name.LastName);
	}
	system("pause");
	return 0;
}
void print(char SocialId[], char FirstName[], char MiddleName[], char LastName[])	
{
		if (strcmp(MiddleName, " ") != 0)      //结构数组中的Name结构中间名与空字符串进行比较
			printf("%s, %s %c. -- %s\n", LastName, FirstName, MiddleName[0], SocialId);
		else
			printf("%s, %s %c -- %s\n", LastName, FirstName, MiddleName[0], SocialId);
}
/*5*/
#include<stdio.h>
#include<string.h>

struct name
{
	char FirstName[20];
	char LastName[20];
};
struct student
{
	struct name Name;
	float grade[3];
	float average;
};

void GetGrade(struct student arr[], int n);
void StrAverage(struct student arr[], int n);
void ShowStr(struct student arr[], int n);
void ClassAverage(struct student arr[], int n);

int main(void)
{
	struct student class[4] =
	{
		{ "Flip", "Snide"},
		{ "Clare", "Voyans"},
		{ "Bingo", "Higgs"},
		{ "Fawn", "Hunter"}
	};

	GetGrade(class, 4);
	StrAverage(class, 4);
	ShowStr(class, 4);
	ClassAverage(class, 4);

	system("pause");
	return 0;

}
void GetGrade(struct student arr[], int n)
{
	int i, j;
	for ( i = 0; i < n; i++)
	{
		printf("输入%s %s 的3个分数：", arr[i].Name.FirstName, arr[i].Name.LastName);
		for ( j = 0; j < 3; j++)
		{
			while (scanf_s("%f", &arr[i].grade[j]) != 1)
			{
				scanf_s("%*s");          //跳过字符串输入
				puts("请输入数字！");
			}
		}
	}
}
void StrAverage(struct student arr[], int n)
{
	int i, j;
	float sum;

	for ( i = 0; i < n; i++)
	{
		for (sum = 0, j = 0; j < 3; j++)
		{
			sum += arr[i].grade[j];
		}
		arr[i].average = sum / 3;
	}
}
void ShowStr(struct student arr[], int n)
{
	int i, j;
	char WholeName[80];

	for ( i = 0; i < n; i++)
	{
		strcpy_s(WholeName, 40, arr[i].Name.FirstName); //用第一个名字填充WholeName
		strcat_s(WholeName, 40, " ");                    //添加个空格便于区分
		strcat_s(WholeName, 40, arr[i].Name.LastName);  //接着在第一个名字之后添加第二个名字
		printf("%27s", WholeName);
		for ( j = 0; j < 3; j++)
		{
			printf("%6.1f", arr[i].grade[j]);      //打印分数
		}
		printf(" 平均分 = %5.2f\n", arr[i].average);
	}
}
void ClassAverage(struct student arr[], int n)
{
	int i, j;
	float total;

	printf("\n%27s: ", "平均分");
	for ( j = 0; j < 3; j++)
	{
		for (total = 0, i = 0; i < n; i++)
			total += arr[i].grade[j];
		printf("%6.2f\n", total / n);
	}
}
/*6*/
#include<stdio.h>
#include<stdlib.h>

struct player
{
	int number;
	char FirstName[10];
	char LastName[10];
	int UpTimes;
	int Hits;
	int Walks;
	int RBI;
	float HitAverage;
};

int main(void)
{
	//判断文件能否成功打开
	FILE *fp;
	errno_t err;

	if ((err = fp = fopen_s(&fp,"text.txt","r")) == NULL)
	{
		fprintf(stderr, "打开文件失败！\n");
		exit(EXIT_FAILURE);
	}

	//初始化结构
	struct player team[20];
	for (int i = 0; i < 20; i++)
	{
		team[i].number = -1;
		team[i].UpTimes = 0;
		team[i].Hits = 0;
		team[i].Walks = 0;
		team[i].RBI = 0;
	}

	int number;
	char FirstName[10];
	char LastName[10];
	int UpTimes;
	int Hits;
	int Walks;
	int RBI;
	int exist = 0;
	int j = 0;


	while (fscanf_s(fp,"%d %s %s %d %d %d %d",&number,FirstName,LastName,&UpTimes,
		                                  &Hits,&Walks,&RBI) == 7)
	{
		for (int i = 0; i < 20; i++)
		{
			if (team[i].number == number)
			{
				exist = 1;
				team[i].UpTimes += UpTimes;
				team[i].Hits += Hits;
				team[i].Walks += Walks;
				team[i].RBI += RBI;
			}
		}

		if (exist == 0)
		{
			team[j].number = number;
			for (int index = 0; index < 20; index++)
				team[j].FirstName[index] = FirstName[index];
			for (int index = 0; index < 20; index++)
				team[index].LastName[index] = LastName[index];
			team[j].UpTimes += UpTimes;
			team[j].Hits += Hits;
			team[j].Walks += Walks;
			team[j].RBI += RBI;
			j++;
		}
		exist = 0;
	}

	int TotalUpTimes = 0;
	int TotalHits = 0;
	int TotalWalks = 0;
	int TotalRBI = 0;

	for (int index = 0; index < j; index++)
	{
		printf("%d %s %s %d %d %d %d %f\n", team[index].number, team[index].FirstName, team[index].LastName,
			team[index].UpTimes, team[index].Hits, team[index].Walks, team[index].RBI,
			team[index].Hits / team[index].UpTimes);
		TotalUpTimes += team[index].UpTimes;
		TotalHits += team[index].Hits;
		TotalWalks += team[index].Walks;
		TotalRBI += team[index].RBI;
	}

	printf("%d %d %d %f\n", TotalUpTimes, TotalHits, TotalWalks, TotalRBI, TotalHits / TotalUpTimes);

	system("pause");
	return 0;
}
/*7*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
#define CONTINUE 0
#define DONE 1

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
struct pack
{
	struct book book;          //两个图书标识符的不同名称空间
	bool delete_me;
};
//策略:与其在每次删除时重新排列结构数组,不如将结构与指示是否标记为删除的数据成员
//组合起来。在程序结束时,只显示和存储那些未标记为要删除的项目。删除信息可以存储在单
//独的数组中,但将其与图书结构一起存储在结构中将信息保存在一起。

char *s_gets(char *st, int n);
int GetLet(const char *s);
int GetBook(struct pack *pb);
void Update(struct pack *item);

int main(void)
{
	struct pack library[MAXBKS];
	int count = 0;
	int index, filecount, open;
	FILE *pbooks;
	int size = sizeof(struct book);
	errno_t err;
	int deleted = 0;

	if ((err = pbooks = fopen_s(&pbooks, "book.dat", "r")) != NULL)
	{                                                      //此处会引发断点错误，未解决！！！！！！！！！！！！！！！！！！！！！！！
		while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
		{
			if (count == 0)
				puts("book.dat文件中当前内容：");
			printf("%s by %s: $%.2f\n", library[count].book.title,
				library[count].book.author, library[count].book.value);
			printf("你想更改或者删除这些数据吗？<y/n>");
			if (GetLet("yn") == 'y')
			{
				printf("输入c以更改，输入d以删除：");
				if (GetLet("cd") == 'd')
				{
					library[count].delete_me = true;
					deleted++;
					puts("标记为删除的条目！");
				}
				else
				{
					Update(&library[count]);
				}
			}
			count++;
		}
		fclose(pbooks);
	}

	filecount = count - deleted;
	if (count == MAXBKS)
	{
		fputs("book.dat文件已满！", stderr);
		exit(EXIT_FAILURE);
	}
	puts("增加新书名(空行结束)：");
	open = 0;
	while (filecount < MAXBKS)
	{
		if (filecount < count)
		{
			while (library[open].delete_me ==false)
			{
				open++;
			}
			if (GetBook(&library[open]) == DONE)
			{
				break;
			}
		}
		else if(GetBook(&library[filecount]) == DONE)
		{
			break;
		}
		filecount++;
		if (filecount < MAXBKS)
		{
			puts("输入下一个书名：");
		}
	}

	puts("下面是书籍清单：");
	for ( index = 0; index < filecount; index++)
	{
		if (library[index].delete_me == false)
			printf("%s by %s: $%.2f\n", library[index].book.title,
				library[index].book.author, library[index].book.value);
	}
	if (( err = pbooks = fopen_s(&pbooks,"book.dat","w")) == NULL)
	{
		fputs("无法为输出打开book.dat文件！\n", stderr);
		exit(EXIT_FAILURE);
	}
	for ( index = 0; index < filecount; index++)
	{
		if (library[index].delete_me == false)
			fwrite(&(library[index].book), size, 1, pbooks);
	}
	fclose(pbooks);

	system("pause");
	return 0;
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
		{
			*find = '\0';
		}
		else
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	}
	return ret_val;
}

int GetLet(const char *s)
{
	char c;

	c = getchar();
	while (strchr(s,c) ==NULL)
	{
		printf("在列表中输入一个字符 %s\n", s);
		while (getchar() != '\n')
		{
			continue;
		}
		c = getchar();
	}
	while (getchar() != '\n')
	{
		continue;
	}
	return c;
}

int GetBook(struct pack *pb)
{
	int status = CONTINUE;
	if (s_gets(pb->book.title,MAXTITL) == NULL || pb->book.title[0] == '\0')
	{
		status = DONE;
	}
	else
	{
		printf("输入作者：");
		s_gets(pb->book.author, MAXAUTL);
		printf("输入价格：");
		while (scanf_s("%f",&pb->book.value) != 1)
		{
			puts("请输入数字！");
			scanf_s("%*s");
		}
		while (getchar() != '\n')
		{
			continue;
		}
		pb->delete_me = false;
	}
	return status;
}
void Update(struct pack *item)
{
	struct book copy;
	char c;

	copy = item->book;
	puts("输入字母代码进行选择：");
	puts("t) 修改标题\ta）修改作者");
	puts("v）修改价格\ts）退出并保存修改");
	puts("q）忽略更改");
	while ((c = GetLet("tavsq")) != 's' && c != 'q')
	{
		switch (c)
		{
		case 't':
			puts("输入新的书名：");
			s_gets(copy.title, MAXTITL); break;
		case'a':
			puts("输入新的作者名：");
			s_gets(copy.author, MAXAUTL); break;
		case'v':
			puts("输入新的价格：");
			while (scanf_s("%f",&copy.value)!= 1)
			{
				puts("请输入数字！");
				scanf_s("%*s");
			}
			while (getchar() != '\n')
			{
				continue;
			}
			break;
		}
		puts("输入字母代码进行选择：");
		puts("t) 修改标题\ta）修改作者");
		puts("v）修改价格\ts）退出并保存修改");
		puts("q）忽略更改");
	}
	if (c == 's')
	{
		item->book = copy;
	}
}
/*8*/
#include<stdio.h>
#include<stdlib.h>
#define EMPTY 0
#define TAKEN 1
#define SEATS 12
#define CONTINUE 1
#define DONE 0

struct PlaneSeats
{
	char seatId;
	char seatStatus;
	char LastName[20];
	char FirstName[20];
};

int GetMenu(void);														 //展示菜单
int GetLet(const char *s);												//获取选择字符
int EmptySeats(const struct pl[], int n);								//查找空位
void ShowEmptySeats(const struct PlaneSeats pl[], int n);				//显示空位
void MakeList(const struct PlaneSeats pl[], char *str, int kind);
void ListAssign(struct PlaneSeats *ps[], int n);
void AssignSeats(struct PlaneSeats pl[], int n);
void DeleteSeats(struct PlaneSeats PL[], int n);
void ShowSeats(const struct PlaneSeats pl[], int n);
void Sort(struct PlaneSeats *array[], int limit);
char *s_gets(char *st, int n);

int main(void)
{
	struct PlaneSeats plane_1[SEATS], *ps[SEATS];
	int choice;
	int i;
	FILE *fp;
	size_t size = sizeof(struct PlaneSeats);
	errno_t err;

	for ( i = 0; i < SEATS; i++)
	{
		ps[i] = &plane_1[i];
	}
	if ((err = fp = fopen_s(&fp,"air.dat","rb")) == NULL)
	{
		for ( i = 0; i < SEATS; i++)
		{
			plane_1[i].seatStatus = EMPTY;
			plane_1[i].seatId = i + 1;
		}
	}
	else
	{              //断点错误！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！!!!!!!!!!!!!!!
		fread_s(&fp,plane_1, size, SEATS, fp);
		fclose(fp);
	}
	while ((choice = GetMenu()) != 'q')
	{
		switch (choice)
		{
		case'o':printf("空位有%d个。\n", EmptySeats(plane_1, SEATS)); break;
		case'e':ShowEmptySeats(plane_1, SEATS); break;
		case'l':ListAssign(ps, SEATS); break;
		case'a':AssignSeats(plane_1, SEATS); break;
		case'd':DeleteSeats(plane_1, SEATS); break;
		default:puts("错误！");
			break;
		}
	}
	if ((err = fp = fopen_s(&fp,"air.dat","wb")) == NULL)
	{
		puts("无法将数据保存到文件中！");
	}
	else
	{
		fwrite(plane_1, size, SEATS, fp);
		fclose(fp);
	}

	system("pause");
	return 0;
}

#define CHOICES 6                                                    //菜单中的6个选项
int GetMenu(void)													 //展示菜单
{
	const char *descript[CHOICES] =
	{
		"显示空着的座位数",
		"显示空座位列表",
		"显示按字母顺序排列的座位分配列表",
		"给顾客安排座位",
		"删除座位分配",
		"退出"
	};

	const char labels[CHOICES + 1] = "oeladq";
	int i;
	for ( i = 0; i < CHOICES; i++)
	{
		printf("%c) %s\n", labels[i], descript[i]);
	}

	return GetLet(labels);
}

int GetLet(const char *s)												//获取选择字符
{
	char c;

	c = getchar();
	while (strchr(s,c) == NULL)
	{
		printf("在列表%s中输入一个字符\n", s);
		while (getchar() != '\n')
		{
			continue;
		}
		c = getchar();
	}
	while (getchar() != '\n')
	{
		continue;
	}

	return c;
}


int EmptySeats(const struct PlaneSeats pl[], int n)								//查找空位
{
	int count = 0;
	int seat;

	for ( seat = 0; seat < n; seat++)
	{
		if (pl[seat].seatStatus == EMPTY)
			count++;
	}

	return count;
}

void ShowEmptySeats(const struct PlaneSeats pl[], int n)				//显示空位
{
	char seating[3 * SEATS];

	if (EmptySeats(pl,n) == 0)
	{
		puts("所有座位已分配！");
	}
	else
	{
		puts("有以下座位：");
		MakeList(pl, seating, EMPTY);
		puts(seating);
	}
}

void MakeList(const struct PlaneSeats pl[], char *str, int kind)
{
	int seat;
	char temp[20];

	str[0] = '\0';
	for ( seat = 0; seat < SEATS; seat++)
	{
		if (pl[seat].seatStatus == kind)
		{
			sprintf_s(temp, "%d", pl[seat].seatId);
			strcat(str, temp);
		}
	}
}

void ListAssign(struct PlaneSeats *ps[], int n)
{
	int i;

	if (EmptySeats(*ps,n) == SEATS)
	{
		puts("所有座位都是空的。");
	}
	else
	{
		Sort(ps, n);
		for ( i = 0; i < SEATS; i++)
		{
			if (ps[i]->seatStatus == TAKEN)
				printf("座位 %d: %s, %s\n", ps[i]->seatId, 
					ps[i]->LastName, ps[i]->FirstName);
		}
	}
}

void AssignSeats(struct PlaneSeats pl[], int n)
{
	char list[3 * SEATS];
	int seat, loop;

	if (EmptySeats(pl,n) == 0)
	{
		puts("所有的座位都分配好了！");
	}
	else
	{
		MakeList(pl, list, EMPTY);
		puts("你想要哪个座位?从此列表中选择:");
		puts(list);
		do
		{
			while (scanf_s("%d",&seat) != 1)
			{
				scanf_s("%*s");
				puts("从这个列表中输入一个数字：");
				puts(list);
			}
			if (seat < 1 || seat > SEATS || pl[seat - 1].seatStatus == TAKEN)
			{
				puts("从这个列表中输入一个数字：");
				puts(list);
				loop = CONTINUE;
			}
			else
			{
				loop = DONE;
			}
		} while (loop == CONTINUE);
		while (getchar() != '\n')
		{
			continue;
		}
		puts("输入第一个名字：");
		s_gets(pl[seat - 1].FirstName, 20);
		puts("输入第二个名字：");
		s_gets(pl[seat - 1].LastName, 20);
		printf("%s %s 的位置是：%d.\n",pl[seat - 1].FirstName,pl[seat -1].LastName,seat);
		puts("输入a接受分配，输入c取消。");
		if (GetLet("ac") == 'a')
		{
			pl[seat - 1].seatStatus = TAKEN;
			puts("乘客座位已分配！");
		}
		else
		{
			puts("乘客座位未分配！");
		}
	}
}

void DeleteSeats(struct PlaneSeats pl[], int n)
{
	int seat, loop;
	char list[3 * SEATS];

	if (EmptySeats(pl,n) == SEATS)
	{
		puts("所有座位已空！");
	}
	else
	{
		ShowSeats(pl, n);
		MakeList(pl, list, TAKEN);
		puts("输入要取消的作为号码：");
		do
		{
			while (scanf_s("%d", &seat) != 1)
			{
				scanf_s("%*s");
				puts("从列表中输入一个数字：");
				puts(list);
			}
			if (seat < 1 || seat > SEATS || pl[seat - 1].seatStatus == EMPTY)
			{
				puts("从列表中输入一个数字：");
				puts(list);
				loop = CONTINUE;
			}
			else
			{
				loop = DONE;
			}
		} while (loop == CONTINUE);
		while (getchar() != '\n')
		{
			continue;
		}
		printf("%s %s 取消了座位 %d。\n", pl[seat - 1].FirstName, pl[seat - 1].LastName, seat);
		puts("输入 d 以删除赋值，输入 a 中止。");
		if (GetLet("da") == 'd')
		{
			pl[seat - 1].seatStatus = EMPTY;
			puts("乘客已删除！");
		}
		else
		{
			puts("乘客保留！");
		}
	}
}

void ShowSeats(const struct PlaneSeats pl[], int n)
{
	int i;

	puts("目前已就做的座位：");
	for ( i = 0; i < SEATS; i++)
	{
		if (pl[i].seatStatus == TAKEN)
		{
			printf("座位 %d: %s, %s\n", pl[i].seatId, pl[i].LastName, pl[i].FirstName);
		}
	}
}

void Sort(struct PlaneSeats *array[], int limit)
{
	int i, j;
	struct PlaneSeats *temp;

	for ( i = 0; i < limit - 1; i++)
	{
		for (j = i + 1; j < limit; j++)
		{
			if (strcmp(array[j]->LastName,array[i]->LastName) < 0)
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
}

char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
		{
			*find = '\0';
		}
		else
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	}
	return ret_val;
}
/*9*/
//占位占位占位占位占位占位占位占位占位占位占位占位占位占位占位占位占位
/*10*/
#include<stdio.h>
#include<math.h>
#define NUM 4

double twice(double x);
double half(double x);
double thrice(double x);
void ShowMenu(void);

int main(void)
{
	double(*pf[NUM])(double) = { twice,half,thrice,sqrt };       //指向函数的指针
	double val;
	double ans;
	int sel;

	printf("输入一个数字：");
	while (scanf_s("%lf",&val) && val >= 0)
	{
		ShowMenu();
		while (scanf_s("%d",&sel) && sel >= 0 && sel <=3)
		{
			ans = (*pf[sel])(val);        //用函数指针调用函数计算val
			printf("answer = %f\n", ans);
			ans = pf[sel](val);              //处理重复操作
			printf("重复，answer = %f\n", ans);
			ShowMenu();
		}
		printf("输入下一个数字：");
	}
	system("pause");
	return 0;
}

double twice(double x)
{
	return 2.0 * x;
}

double half(double x)
{
	return x / 2.0;
}

double thrice(double x)
{
	return 3.0 * x;
}

void ShowMenu(void)
{
	puts("输入一个下列的选项：");
	puts("0）双倍值		1）将值减半");
	puts("2）三倍值		3）求值的平方根");
	puts("4）下一个数字");
}
/*11*/
#include<stdio.h>
#include<math.h>
#define NUM 2

double transform(double source[], double target[], int num, double pf(double));
double halve(double n);
double triple(double n);

int main(void)
{
	double source[NUM] = { 3.14159 / 2.0,0 };
	double target[NUM];

	printf("源号码是：");
	for (int i = 0; i < NUM; i++)
	{
		printf(" %.2lf", source[i]);
	}
	puts("");

	transform(source, target, NUM, sin);              //调用函数计算sin值
	printf("求sin后目标号码是：");
	for (int i = 0; i < NUM; i++)
	{
		printf(" %.2lf", target[i]);
	}
	puts("");

	transform(source, target, NUM, cos);               //调用函数计算cos值
	printf("求cos后目标号码是：");
	for (int i = 0; i < NUM; i++)
	{
		printf(" %.2lf", target[i]);
	}
	puts("");

	transform(source, target, NUM, halve);              //调用自定义函数计算减半值
	printf("除以二后目标号码是：");
	for (int i = 0; i < NUM; i++)
	{
		printf(" %.2lf", target[i]);
	}
	puts("");

	transform(source, target, NUM, triple);              //调用自定函数计算三倍值
	printf("增大三倍后目标号码是：");
	for (int i = 0; i < NUM; i++)
	{
		printf(" %.2lf", target[i]);
	}
	puts("");

	system("pause");
	return 0;
}
double transform(double source[], double target[], int num, double pf(double))
{
	for (int i = 0; i < num; i++)
	{
		target[i] = (*pf)(source[i]);
	}
}

double halve(double n)
{
	return n / 2;
}

double triple(double n)
{
	return n * 3;
}
/****************************编程练习15***********************************/
/*1*/
#include<stdio.h>
#include<stdbool.h>              //for bool() 提供判断是否只有0和1的组合
//#include<limits.h>              //for CHAR_BIT
#include<string.h>              //for strchr()
#define SLEN 32+1
int binary_decimal(const char *pbin);
bool check_val(const char *pbin);
char s_gets(char *st, int n);

int main(void)
{
	//const size_t SLEN = CHAR_BIT * sizeof(int) + 1;              //加一存放'\0'字符
	char value[SLEN];

	printf("输入一个最多有%d位的二进制数：", SLEN - 1);
	while (s_gets(value,SLEN) && value[0] != '\0')
	{
		if (!check_val(value))
			puts("输入的非二进制数！");
		else
			printf("%s = %d\n", value, binary_decimal(value));
		printf("输入下一个二进制数（q退出）：");
	}

	system("pause");
	return 0;
}
int binary_decimal(char *pbin)
{
	int value = 0
		;

	while (*pbin != '\0')
	{
		value = 2 * value + (*pbin++ - '0');
	}
	return value;
}
bool check_val(const char *pbin)
{
	bool value = true;

	while (value && *pbin != '\0')
	{
		if (*pbin != '0' && *pbin != '1')
			value = false;
		++pbin;
	}
	return value;
}

char s_gets(char *st, int n)
{
	char *ret_val;
	char *find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
		{
			*find = '\0';
		}
	}
	else
	{
		while (getchar() != '\n')
		{
			continue;
		}
	}
	return ret_val;
}
/*2*/
/////未解决！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！1111
/*3*/
#include<stdio.h>
#include<limits.h>

char * itobs(int n, char *ps);       //将整数转化为二进制字符串
int bit_count(int num);

int main(void)
{
	int value;
	char bstr[CHAR_BIT * sizeof(int) + 1];

	printf("输入一个数字（q退出）：");
	while (scanf_s("%d",&value))
	{
		printf("%d(%s)有%d位打开。\n", value, itobs(value, bstr), bit_count(value));
		printf("输入下一个值：");
	}
	system("pause");
	return 0;
}

char * itobs(int n, char *ps)
{
	int i;
	const static int size = CHAR_BIT * sizeof(int);

	for ( i = size - 1; i >= 0; i--, n>>=1)
	{
		ps[i] = (1 & n) + '0';
	}
	ps[size] = '\0';
	return ps;
}

int bit_count(int num)
{
	static const int size = CHAR_BIT * sizeof(int);
	int ct = 0;
	int i;

	for ( i = 0; i < size; i++,num >>= 1)
	{
		if ((1 & num) == 1)
			ct++;
	}
	return ct;
}
/*4*/
#include<stdio.h>
#include<limits.h>

int *itobs(int n, char *ps);
int check_pos(int val, int pos);

int main(void)
{
	int value, bit_pos;
	char bstr[CHAR_BIT * sizeof(int) + 1];

	printf("输入一个数字和位的位置（q退出）：");
	while (scanf_s("%d %d",&value,&bit_pos))
	{
		printf("%d(%s)第%d位上为%d\n", value, itobs(value,bstr),
			bit_pos, check_pos(value, bit_pos));
		printf("输入下一个数字和下一个位的位置（q退出）：");
	}
	system("pause");
	return 0;
}

int *itobs(int n, char *ps)
{
	int i;
	const static int size = CHAR_BIT * sizeof(int);

	for ( i = size - 1; i >= 0; i--, n >>= 1)
	{
		ps[i] = (1 & n) + '0';
	}
	ps[size] = '\0';

	return ps;
}

int check_pos(int val, int pos)
{
	for (int i = 0; i < pos; i++)
	{
		val >>= 1;
	}
	return (1 & val);
}
/*5*/
#include<stdio.h>
#include<limits.h>

unsigned int rotate_1(unsigned int n, unsigned int b);
char *itobs(int n, char*ps);

int main(void)
{
	unsigned int value;
	unsigned int places;
	unsigned int rot;
	char bstr1[CHAR_BIT * sizeof(int) + 1];
	char bstr2[CHAR_BIT * sizeof(int) + 1];

	puts("输入一个值：");
	while (scanf_s("%d",&value))
	{
		puts("输入要旋转的位数：");
		if (scanf_s("%d", &places) != 1)
			break;
		rot = rotate_1(value, places);
		itobs(value, bstr1);
		itobs(rot, bstr2);
		printf("%u 旋转后是 %u.\n", value, rot);
		printf("%s 旋转后是 %s.\n", bstr1, bstr2);
		puts("输入下一个值（q退出）:");
	}
	system("pause");
	return 0;
}

unsigned int rotate_1(unsigned int n, unsigned int b)
{
	static const int size = CHAR_BIT * sizeof(int);
	unsigned int overflow;

	b %= size;                                       //使b保持有效值
	overflow = n >> (size - b);                     //保存移出的位

	return (n << b) | overflow;
}

char *itobs(int n, char*ps)
{
	int i;
	static const int size = CHAR_BIT * sizeof(int);

	for ( i = size - 1; i >= 0; i--, n >>= 1)
	{
		ps[i] = (1 & n) + '0';
	}
	ps[size] = '\0';

	return ps;
}
/*6*/
#include<stdio.h>
#include<stdbool.h>
#define LEFT 0
#define CENTER 1
#define RIGHT 2
#define ID_MASK 0xFF                 //掩码id
#define SIZE_MASK 0x7F

struct Font
{
	unsigned int font_id   : 8;
	unsigned int font_size : 7;
	unsigned int           : 1;
	unsigned int alignment : 2;
	bool bold              : 1;
	bool italic            : 1;
	bool underline         : 1;
};

int main(void)
{
	struct Font font = { 1,12,LEFT };
	
	puts("\t字体ID\t字体大小\t对齐\t加粗\t斜体\t下划线");
	printf("%10d %11d", font.font_id, font.font_size);
	if (font.alignment == 0)
	{
		printf("\t\t居左\t");
	}
	else if (font.alignment == 1)
	{
		printf("\t居中\t");
	}
	else
	{
		printf("\t居右\t");
	}

	if (font.bold)
	{
		printf("开\t");
	}
	else
	{
		printf("关\t");
	}
	if (font.italic)
	{
		printf("开\t");
	}
	else
	{
		printf("关\t");
	}
	if (font.underline)
	{
		printf(" 开\t");
	}
	else
	{
		printf(" 关\t");
	}
	putchar('\n');

	puts("f）更改字体\ts）更改字体大小\ta）更改对齐方式");
	puts("b）字体加粗\ti）斜体\tu）下划线");
	puts("q）退出");

	char choice;
	scanf_s("%c", &choice);
	getchar();
	while (choice != 'q')
	{
		switch (choice)
		{
		case 'f': printf("输入字体id（0-255）:");
				  int input_id;
				  scanf_s("%d", &input_id);
				  font.font_id = input_id & ID_MASK;
				  getchar();
				  break;
		case 's': printf("输入字体大小（0-127）：");
			      int input_size;
				  scanf_s("%d", &input_size);
				  font.font_size = input_size & SIZE_MASK;
				  getchar();
				  break;
		case 'a': puts("选择对齐方式：");
			      puts("l）居左\tc）居中\tr）居右");
				  char input_alignment;
				  scanf_s("%c", &input_alignment);
				  if (input_alignment == 'l')
				  {
					  font.alignment = 0;
				  }
				  else if (input_alignment = 'c')
				  {
					  font.alignment = 1;
				  }
				  else
				  {
					  font.alignment = 2;
				  }
				  getchar();
				  break;
		case 'b': font.bold = ~font.bold;
			      break;
		case 'i': font.italic = ~font.italic;
			      break;
		case 'u': font.underline = ~font.underline;
			      break;
		default:  puts("请输入相应的字母编号！");
			      break;
		}

		puts("\t字体ID\t字体大小\t对齐\t加粗\t斜体\t下划线");
		printf("%10d %11d", font.font_id, font.font_size);
		if (font.alignment == 0)
		{
			printf("\t\t居左\t");
		}
		else if (font.alignment == 1)
		{
			printf("\t居中\t");
		}
		else
		{
			printf("\t居右\t");
		}

		if (font.bold)
		{
			printf("开\t");
		}
		else
		{
			printf("关\t");
		}
		if (font.italic)
		{
			printf("开\t");
		}
		else
		{
			printf("关\t");
		}
		if (font.underline)
		{
			printf(" 开\t");
		}
		else
		{
			printf(" 关\t");
		}
		putchar('\n');

		puts("f）更改字体\ts）更改字体大小\ta）更改对齐方式");
		puts("b）字体加粗\ti）斜体\tu）下划线");
		puts("q）退出");
		scanf_s("%c", &choice);
		getchar();
	}

	system("pause");
	return 0;
}
/*7*/
#include<stdio.h>
#define ID_MASK     0xFF
#define SIZE_MASK   0x7F00
#define LEFT        0x00000
#define CENTER      0x08000
#define RIGHT       0x10000
#define ALIGN_MASK  0x18000
#define REGULAR     0x00000
#define BOLD		0x20000
#define ITALIC		0x40000
#define UNDERLINE	0x80000
#define STYLE_MASK  0xE0000
#define SIZE_SHIFT  8

typedef unsigned long font;

char do_menu(font * f);
char get_choice(const char *);
void show_menu(void);
void show_font(font f);
void eatline(void);
void get_id(font * f);
void get_size(font * f);
void get_align(font * f);

int main(void)
{
	font sample = 1 | (12 << SIZE_SHIFT) | LEFT | ITALIC;

	while (do_menu(&sample) != 'q')
		continue;
	puts("Bye!");

	system("pause");
	return 0;
}

char do_menu(font * f)
{
	char response;

	show_font(*f);
	show_menu();
	response = get_choice("fsabiuq");
	switch (response)
	{
	case 'f': get_id(f); break;
	case 's': get_size(f); break;
	case 'a': get_align(f); break;
	case 'b': *f ^= BOLD; break;
	case 'i': *f ^= ITALIC; break;
	case 'u': *f ^= UNDERLINE; break;
	case 'q': break;
	default: fprintf(stderr, "menu problem\n");
	}

	return response;
}

char get_choice(const char * str)
{
	char ch;

	ch = getchar();
	ch = tolower(ch);
	eatline();
	while (strchr(str, ch) == NULL)
	{
		printf("Please enter one of the following: %s\n",
			str);
		ch = tolower(getchar());
		eatline();
	}
	return ch;
}

void eatline(void)
{
	while (getchar() != '\n')
		continue;
}

void show_menu(void)
{
	puts("f)change font s)change size a)change alignment");
	puts("b)toggle bold i)toggle italic u)toggle underline");
	puts("q)quit");
}

void show_font(font f)
{
	printf("\n%4s %4s %9s %3s %3s %3s\n",
		"ID", "SIZE", "ALIGNMENT", "B", "I", "U");
	printf("%4lu %4lu", f & ID_MASK, (f & SIZE_MASK) >> SIZE_SHIFT);
	switch (f & ALIGN_MASK)
	{
	case LEFT: printf("%7s", "left"); break;
	case RIGHT: printf("%7s", "right"); break;
	case CENTER: printf("%7s", "center"); break;
	default: printf("%7s", "unknown"); break;
	}
	printf("%8s %3s %3s\n\n", (f & BOLD) == BOLD ? "on" : "off",
		(f & ITALIC) == ITALIC ? "on" : "off",
		(f & UNDERLINE) == UNDERLINE ? "on" : "off");
}

void get_id(font * f)
{
	int id;

	printf("Enter font ID (0-255): ");
	scanf_s("%d", &id);
	id = id & ID_MASK;
	*f |= id;
	eatline();
}

void get_size(font * f)
{
	int size;

	printf("Enter font size (0-127): ");
	scanf_s("%d", &size);
	*f |= (size << SIZE_SHIFT) & SIZE_MASK;
	eatline();
}

void get_align(font * f)
{
	puts("Select alignment:");
	puts("l)left c)center r)right");
	switch (get_choice("lcr"))
	{
	case 'l': *f &= ~ALIGN_MASK; *f |= LEFT; break;
	case 'c': *f &= ~ALIGN_MASK; *f |= CENTER; break;
	case 'r': *f &= ~ALIGN_MASK; *f |= RIGHT; break;
	default: fprintf(stderr, "alignment problem\n");
	}
}