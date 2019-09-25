/************************11章练习********************************/
/***********练习题9-13****************/
/*9*/
/*#include<stdio.h>
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
}*/
/*10*/
/*#include <stdio.h>
int strlen(const char *str)
{
	int count;
	while (str++)
	{
		count++;
	}
	return (count);
}*/
/*11*/
/*#include<stdio.h>
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
}*/
/*12*/
/*#include<stdio.h>
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
}*/
/*13*/
/*#include<stdio.h>
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
}*/
/***********************************编程练习***************************************/
/*1*/
/*#include<stdio.h>

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
}*/
/*2*/
/*#include<stdio.h>
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
}*/
/*3*/
/*#include<stdio.h>
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
}*/
/*4*/
/*#include<stdio.h>
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
}*/
/*5*/
/*#include<stdio.h>
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
}*/
/*6*/
/*#include<stdio.h>
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
}*/
/*7*/
/*#include<stdio.h>
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
}*/
/*8*/
/*#include<stdio.h>
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
}*/
/*9*/
/*#include<stdio.h>
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
}*/
/*10*/
/*#include<stdio.h>
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
}*/
/*11*/
/*#include<stdio.h>
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
}*/
/*12*/
/*#include<stdio.h>
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
}*/
/*13*/
/*#include<stdio.h>
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
}*/
/*14*/
/*#include<stdio.h>
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
}*/
/*15未完成*/
/*#include<stdio.h>
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
}*/
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