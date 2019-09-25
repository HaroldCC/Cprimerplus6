/****************************�����ϰ15***********************************/
/*1*/
/*#include<stdio.h>
#include<stdbool.h>              //for bool() �ṩ�ж��Ƿ�ֻ��0��1�����
//#include<limits.h>              //for CHAR_BIT
#include<string.h>              //for strchr()
#define SLEN 32+1
int binary_decimal(const char *pbin);
bool check_val(const char *pbin);
char s_gets(char *st, int n);

int main(void)
{
	//const size_t SLEN = CHAR_BIT * sizeof(int) + 1;              //��һ���'\0'�ַ�
	char value[SLEN];

	printf("����һ�������%dλ�Ķ���������", SLEN - 1);
	while (s_gets(value,SLEN) && value[0] != '\0')
	{
		if (!check_val(value))
			puts("����ķǶ���������");
		else
			printf("%s = %d\n", value, binary_decimal(value));
		printf("������һ������������q�˳�����");
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
}*/
/*2*/
/////δ���������������������������������������������������������������������1111
/*3*/
/*#include<stdio.h>
#include<limits.h>

char * itobs(int n, char *ps);       //������ת��Ϊ�������ַ���
int bit_count(int num);

int main(void)
{
	int value;
	char bstr[CHAR_BIT * sizeof(int) + 1];

	printf("����һ�����֣�q�˳�����");
	while (scanf_s("%d",&value))
	{
		printf("%d(%s)��%dλ�򿪡�\n", value, itobs(value, bstr), bit_count(value));
		printf("������һ��ֵ��");
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
}*/
/*4*/
/*#include<stdio.h>
#include<limits.h>

int *itobs(int n, char *ps);
int check_pos(int val, int pos);

int main(void)
{
	int value, bit_pos;
	char bstr[CHAR_BIT * sizeof(int) + 1];

	printf("����һ�����ֺ�λ��λ�ã�q�˳�����");
	while (scanf_s("%d %d",&value,&bit_pos))
	{
		printf("%d(%s)��%dλ��Ϊ%d\n", value, itobs(value,bstr),
			bit_pos, check_pos(value, bit_pos));
		printf("������һ�����ֺ���һ��λ��λ�ã�q�˳�����");
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
}*/
/*5*/
/*#include<stdio.h>
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

	puts("����һ��ֵ��");
	while (scanf_s("%d",&value))
	{
		puts("����Ҫ��ת��λ����");
		if (scanf_s("%d", &places) != 1)
			break;
		rot = rotate_1(value, places);
		itobs(value, bstr1);
		itobs(rot, bstr2);
		printf("%u ��ת���� %u.\n", value, rot);
		printf("%s ��ת���� %s.\n", bstr1, bstr2);
		puts("������һ��ֵ��q�˳���:");
	}
	system("pause");
	return 0;
}

unsigned int rotate_1(unsigned int n, unsigned int b)
{
	static const int size = CHAR_BIT * sizeof(int);
	unsigned int overflow;

	b %= size;                                       //ʹb������Чֵ
	overflow = n >> (size - b);                     //�����Ƴ���λ

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
}*/
/*6*/
/*#include<stdio.h>
#include<stdbool.h>
#define LEFT 0
#define CENTER 1
#define RIGHT 2
#define ID_MASK 0xFF                 //����id
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
	
	puts("\t����ID\t�����С\t����\t�Ӵ�\tб��\t�»���");
	printf("%10d %11d", font.font_id, font.font_size);
	if (font.alignment == 0)
	{
		printf("\t\t����\t");
	}
	else if (font.alignment == 1)
	{
		printf("\t����\t");
	}
	else
	{
		printf("\t����\t");
	}

	if (font.bold)
	{
		printf("��\t");
	}
	else
	{
		printf("��\t");
	}
	if (font.italic)
	{
		printf("��\t");
	}
	else
	{
		printf("��\t");
	}
	if (font.underline)
	{
		printf(" ��\t");
	}
	else
	{
		printf(" ��\t");
	}
	putchar('\n');

	puts("f����������\ts�����������С\ta�����Ķ��뷽ʽ");
	puts("b������Ӵ�\ti��б��\tu���»���");
	puts("q���˳�");

	char choice;
	scanf_s("%c", &choice);
	getchar();
	while (choice != 'q')
	{
		switch (choice)
		{
		case 'f': printf("��������id��0-255��:");
				  int input_id;
				  scanf_s("%d", &input_id);
				  font.font_id = input_id & ID_MASK;
				  getchar();
				  break;
		case 's': printf("���������С��0-127����");
			      int input_size;
				  scanf_s("%d", &input_size);
				  font.font_size = input_size & SIZE_MASK;
				  getchar();
				  break;
		case 'a': puts("ѡ����뷽ʽ��");
			      puts("l������\tc������\tr������");
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
		default:  puts("��������Ӧ����ĸ��ţ�");
			      break;
		}

		puts("\t����ID\t�����С\t����\t�Ӵ�\tб��\t�»���");
		printf("%10d %11d", font.font_id, font.font_size);
		if (font.alignment == 0)
		{
			printf("\t\t����\t");
		}
		else if (font.alignment == 1)
		{
			printf("\t����\t");
		}
		else
		{
			printf("\t����\t");
		}

		if (font.bold)
		{
			printf("��\t");
		}
		else
		{
			printf("��\t");
		}
		if (font.italic)
		{
			printf("��\t");
		}
		else
		{
			printf("��\t");
		}
		if (font.underline)
		{
			printf(" ��\t");
		}
		else
		{
			printf(" ��\t");
		}
		putchar('\n');

		puts("f����������\ts�����������С\ta�����Ķ��뷽ʽ");
		puts("b������Ӵ�\ti��б��\tu���»���");
		puts("q���˳�");
		scanf_s("%c", &choice);
		getchar();
	}

	system("pause");
	return 0;
}*/
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