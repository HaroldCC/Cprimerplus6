/************************11����ϰ********************************/
/***********��ϰ��9-13****************/
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
		find = strchr(str, '\n');                //���һ��з�
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
/***********************************�����ϰ***************************************/
/*1*/
/*#include<stdio.h>

#define SIZE 10
char *getnchar(char *s, int n);
int main(void)
{
	char input[SIZE];
	char *str;
	puts("���볤��С��40���ַ�����");
	str = getnchar(input, SIZE - 1);
	if (str == NULL )
	{
		puts("����ʧ�ܣ�");
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
	puts("���볤��С��10���ַ�����");
	str = getnchar(input, SIZE - 1);
	if (str == NULL)
	{
		puts("����ʧ�ܣ�");
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
	while ((ch = getchar()) != EOF && isspace(ch))            //������һ���ǿհ��ַ�ǰ�����пհ�
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
		*str++;               //���ʵ����ַ�
	}
	while ((ch = getchar()) != EOF && !isspace(ch))    //����ʣ�µ��ַ�
	{
		*str = ch;
		*str++;
	}
	*str = '\0';           //����ַ�����β�ַ�
	if (ch == EOF)
	{
		return NULL;
	}
	else
	{
		while (ch != '\n')
		{
			ch = getchar();      //����ʣ���ַ�
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
	puts("����ɶ�ȡ������ַ�����");
	scanf_s("%d", &n);
	puts("�����ַ�����");
	while (getword(input,n) != NULL)
	{
		puts(input);
		puts("����ɶ�ȡ������ַ�����");
		scanf_s("%d", &n);
		puts("�����ַ�����");
	}
	getchar();
	return 0;
}
char *getword(char *str, int n)
{
	char ch;
	char *origal = str;
	int count = 0;               //������

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
	puts("�����ַ�����");
	while (fgets(str,SIZE,stdin) && str[0] != '\0')
	{
		puts("��������ַ���");
		ch = getchar();
		while (getchar() != '\n')
		{
			continue;                           //��ջ�����
		}
		strback = get_position(str, ch);
		if (strback != NULL)
		{
			puts("�ַ�\t��ַ");
			putchar(*strback);
			printf("\t%p\n", strback);
		}
		else
		{
			puts("�ַ����в����ڸ��ַ���");
		}
		puts("���������ַ�����");
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
	puts("�����ַ�����");
	while (s_gets(input,SIZE) && input[0] != '\0')
	{
		puts("����һ���ַ���");
		ch = getchar();
		while (getchar() != '\n')
			continue;
		found = is_within(input, ch);
		if (found == 0)
		{
			printf("û���ҵ��ַ�%c��\n", ch);
		}
		else
		{
			printf("�ַ���%s���ҵ��ַ�%c\n", input, ch);
		}
		puts("���������ַ�����");
	}
	system("pause");
	return 0;
}
_Bool is_within(const char *str, char ch)
{
	while (*str != ch && *str != '\0')
		str++;
	return *str;                          //���֪��ָ��ָ��'\0'ʱ��û���ҵ�ָ���ַ���ʱ�򣬽����ؿ��ַ���ֵΪ0  
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
	puts("�����ַ�����");
	while (s_gets(str2, SIZE)&&str2[0] != '\0')
	{
		puts("�������븴�Ƶ��ַ������ȣ�");
		scanf_s("%d", &n);
		getchar();
		if (n > SIZE)
			n = SIZE;
		mystrncpy(str1, str2, n);
		printf("���Ƶ��ַ�����%s\n",str1);
		puts("�����ַ�����");
		
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
	char origal[SIZE];                         //ԭʼ�ַ���
	char comper[SIZE];                        //���ڱȽϵ��ַ���
	char *find;
	puts("����ԭ�����ַ�����");
	while (s_gets(origal,SIZE) && origal[0] != '\0')
	{
		puts("����Ҫ���бȽϵ��ַ���:");
		s_gets(comper, SIZE);
		find = string_in(origal, comper);
		if (find)
		{
			puts("�ҵ��ַ����ˣ�");
			printf("�ַ����ĵ�ַ�ǣ�%p\n",find);
		}
		else
		{
			puts("û���ҵ���");
		}
		puts("����ԭ�����ַ�����");
	}
	system("pause");
	return 0;
}
#include<string.h>
char *string_in(const char *str1,const char *str2)
{
	int len2 = strlen(str2);
	int num;                                   //���Ƚϴ���
	int nomath = 1;                           ////�����ж������ַ��Ƿ���� 
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
	puts("�����ַ�������");
	while (s_gets(str,SIZE)!= NULL && str[0] != '\0')
	{
		reverse(str);
		puts(str);
		puts("�����ַ�������");
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
	puts("����С��40���ַ�����");
	while (s_gets(origal,SIZE) && origal[0] != '\0')
	{
		pass_space(origal);
		puts(origal);
		puts("����С��40���ַ�����");
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

void print_origal(char *str[], int n);           //Դ�ַ����б��ӡ
void print_ASCII(char *str[], int n);            //ASCII��˳���ӡ
void print_length(char *str[], int n);           //���ȵ���˳���ӡ
int str_firstword_length(char *str);             //���ҵ�һ�����ʳ���
void print_firstword_length(char *str[], int n); //����һ�����ʳ��ȴ�ӡ

char *s_gets(char *st, int n);
int main(void)
{
	char input[LIM][SIZE];
	char *p[LIM];
	char choice;
	int n = 0;


		puts("�����С������10���ַ�����");
		do
		{
			if (gets(input[n]) == NULL) break;
			p[n] = input[n];
			n++;
		} while (n < 10);
		puts("�����ַ�����ѡ��");
		puts("a.�����ʼ�ַ����б�");
		puts("b.��ASCII˳������ַ���");
		puts("c.���������˳������ַ���");
		puts("d.���ַ����е�һ�����ʵĳ�������ַ���");
		puts("q.�˳�");
		choice = getchar();
		while (choice != 'q')
		{
			choice = tolower(choice);
			switch (choice)
			{
			case 'a':
				puts("a.�����ʼ�ַ����б�"); print_origal(p, n); break;
			case 'b':
				puts("b.��ASCII˳������ַ���"); print_ASCII(p, n); break;
			case 'c':
				puts("c.���������˳������ַ���"); print_length(p, n); break;
			case 'd':
				puts("d.���ַ����е�һ�����ʵĳ�������ַ���"); print_firstword_length(p, n); break;
			default:
				puts("����ȷ�����ַ���");
				break;
			}
			while (getchar() != '\n')
			{
				continue;
			}
			puts("�����ַ�����ѡ��");
			puts("a.�����ʼ�ַ����б�");
			puts("b.��ASCII˳������ַ���");
			puts("c.���������˳������ַ���");
			puts("d.���ַ����е�һ�����ʵĳ�������ַ���");
			puts("q.�˳�");
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
	char ch;               //�����ַ�
	int low_count = 0;      //Сд
	int up_count = 0;        //��д
	int num_count = 0;      //�����ַ�
	int words_count = 0;      //����
	int marks_count = 0;      //������
	bool inword = false;      //�ж��Ƿ�Ϊһ������

	puts("�����ı����з�����");
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
			inword = true;             //��ʼһ���µ���      
			words_count++;             //��������
		}
		if (isspace(ch) && inword)
		{
			inword = false;          //���ʴ�β
		}
	}
		printf("\nСд��ĸ��%d����д��ĸ��%d�����ָ�����%d�����ʸ�����%d�������ţ�%d\n",
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

	for ( i = 0,p = str,n = strlen(str); i < n / 2; i++)      //�������ַ�������
	{
		temp = *(p + n - 1 - i);
		*(p + n - 1 - i) = *(p + i);
		*(p + i) = temp;
	}

	p = str;
	length = 0;
	do                               //���ַ����е��ʵ���
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
#include<stdlib.h>         //ʹ��atof()������������ת��Ϊdouble
#include<math.h>           //ʹ��pow()��������������
int main(int argc, char *argv[])
{
	double num, exp;
	if (argc != 3)
	{
		printf("�÷���%s����ָ��\n", argv[0]);
	}
	else
	{
		num = atof(argv[1]);
		exp = atof(argv[2]);
		printf("%lf��%lf���� = %g\n", num, exp, pow(num, exp));
	}
	return 0;
}*/
/*15δ���*/
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
		printf("�÷���%s [-p | -u | -l]\n", argv[0]);
		ok = 0;
	}
	else if (argc == 2)
	{
		if (argv[1][0] != '-')
		{
			printf("�÷���%s [-p | -u | -l]\n", argv[0]);
			ok = 0;
		}
		else
		{
			switch (argv[1][1])
			{
			case 'p':
			case 'u':
			case 'l':mode = argv[1][1]; break;
			default:printf("%s����Ч�ı�־��", argv[1]);
				printf("ʹ��Ĭ�ϱ�־(-p).\n");
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