/********************�����ϰ14*************************/
/*1*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct month                  //�ṹ����
{
	char name[10];
	char abbrev[4];         //�·�����д
	int days;
	int mnumber;
};
struct month months[12] =   //��ʼ���ṹ����
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

	puts("�����·�����");
	while (scanf_s("%s",input,10) == 1 && input[0] != 'q')
	{
		totalday = totaldays(input);
		if (totalday > 0)
		{
			printf("%s��%d�졣\n", input, totalday);
		}
		else
		{
			printf("%s���ǺϷ�������", input);
		}
		printf("������һ���·ݣ�\n");
	}
	system("pause");
	return 0;
}
int totaldays(char *Mname)
{
	int total = 0;
	int Mnumber = 0;             //�·ݱ��
	int i;

	Mname[0] = toupper(Mname[0]);        //����ĸ��д
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
//��һ��
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int days(int year, int month, int day);      //������������
int leadyear(int year);          //��ƽ���꺯��

struct month                  //�ṹ����
{
	char name[10];
	char abbrev[4];         //�·�����д
	int days;
	int mnumber;
};
struct month months[12] =   //��ʼ���ṹ����
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

	puts("�����꣺");
	while (scanf_s("%d", &year) == 1)
	{
		puts("�����·ݣ�");
		if (scanf_s("%d",&month) ==1)
		{
			printf("\n");
		}
		else
		{
			scanf_s("%s", Mname, 10);
				//����ĸ��д��������ĸСд
				Mname[0] = toupper(Mname[0]);
				for (i = 1; Mname[i] != '\0'; i++)
					Mname[i] = tolower(Mname[i]);

			for ( i = 0; i < 12; i++)
			{
				//�Ƚ�������·������·�����д
				if (strcmp(Mname, months[i].name) == 0 || strcmp(Mname, months[i].abbrev) == 0)
				{
					month = months[i].mnumber;
					break;
				}
			}
		}
		puts("�������ڣ�");
		if (scanf_s("%d",&day) != 1)
		{
			puts("����");
			exit(-1);                //��û���������ڵ�ʱ�򣬳����˳�
		}
		else
		{
			printf("������%d��.\n", days(year, month, day));
		}
		while (getchar()!='\n')
		{
			continue;
		}
		puts("������һ����ݣ�q�˳�����");
	} 
	system("pause");
	return 0;
}
int days(int year, int month, int day)
{
	int totaldays = 0;
	int i;

	leadyear(year) ? (months[1].days = 29):(months[1].days = 28);  //�ж�ƽ�������
	for ( i = 0; i < month - 1; i++)       //���ڼ���������Ҫ����ĳ�µ�ĳһ�죬���Է�Χ�ڸ��µ�ǰһ��
	{
		totaldays += months[i].days;
	}
	return totaldays + day;            //���������ڸ�����ǰ�����������ܺͼ��������������
}
int leadyear(int year)
{
	int i;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 100) == 0)
		return 1;
	else
		return 0;
}
//����
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int leadyear(int year);
int day_ping(int year, char *pmonths, int days);
int day_run(int year, char *pmonths, int days);

struct month                  //�ṹ����
{
	char name[10];
	char abbrev[4];         //�·�����д
	int days;
	int mnumber;
};
const struct month months[12] =   //��ʼ��ƽ��ṹ����
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

const struct month months_run[12] =   //��ʼ������ṹ����
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

	puts("������ݣ�");
	while (scanf_s("%d",&year) == 1)
	{
		puts("�����·ݣ�");
		scanf_s("%s", month,10);
		puts("�������ڣ�");
		scanf_s("%d", &days);
		Totaldays = leadyear(year) ? day_run(year, month, days) : day_ping(year, month, days);
		if (Totaldays > 0)
		{
			printf("%d�����%s��%d���Ѿ�������%d�졣\n", year, month, days,Totaldays);
		}
		else
		{
			printf("�������");
		}
		printf("�����������(q�˳�)��");
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
	struct book *pbk[MAXBKS];            //����ṹָ�������������
	int count = 0;
	int index;

	printf("��������:");
	while (count < MAXBKS && s_gets(library[count].title,MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		printf("�������ߣ�");
		s_gets(library[count].author, MAXAUTL);
		printf("����۸�:");
		scanf_s("%f", &library[count].value);
		pbk[count] = &library[count];
		count++;
		while (getchar() != '\n')
		{
			continue;
		}
		if (count < MAXBKS)
		{
			printf("������һ��������");
		}
	}
		printf("����������嵥(������˳������)��\n");
		for ( index = 0; index < count; index++)
		{
			printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
		}

		printf("����������嵥(������ĸ����)��\n");
		sort_T(pbk, count);
		for ( index = 0; index < count; index++)
		{
			printf("%s by %s:$%.2f\n", pbk[index]->title,pbk[index]->author,pbk[index]->value);
		}
		printf("����������嵥(���۸�����)��\n");
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
			if (strcmp(pb[j]->title,pb[i]->title) < 0)  //����ڶ����ַ�С�ڵ�һ���ַ�
			{
				temp = pb[j];                           //�����������
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
			if (pb[j]->value < pb[i]->value)    //����ڶ����۸�С�ڵ�һ��
			{
				temp = pb[j];                   //����ֵ���бȽ�
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
		if (strcmp(array[i].Name.MiddleName, " ") != 0)      //�ṹ�����е�Name�ṹ�м�������ַ������бȽ�
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
		if (strcmp(MiddleName, " ") != 0)      //�ṹ�����е�Name�ṹ�м�������ַ������бȽ�
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
		printf("����%s %s ��3��������", arr[i].Name.FirstName, arr[i].Name.LastName);
		for ( j = 0; j < 3; j++)
		{
			while (scanf_s("%f", &arr[i].grade[j]) != 1)
			{
				scanf_s("%*s");          //�����ַ�������
				puts("���������֣�");
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
		strcpy_s(WholeName, 40, arr[i].Name.FirstName); //�õ�һ���������WholeName
		strcat_s(WholeName, 40, " ");                    //��Ӹ��ո��������
		strcat_s(WholeName, 40, arr[i].Name.LastName);  //�����ڵ�һ������֮����ӵڶ�������
		printf("%27s", WholeName);
		for ( j = 0; j < 3; j++)
		{
			printf("%6.1f", arr[i].grade[j]);      //��ӡ����
		}
		printf(" ƽ���� = %5.2f\n", arr[i].average);
	}
}
void ClassAverage(struct student arr[], int n)
{
	int i, j;
	float total;

	printf("\n%27s: ", "ƽ����");
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
	//�ж��ļ��ܷ�ɹ���
	FILE *fp;
	errno_t err;

	if ((err = fp = fopen_s(&fp,"text.txt","r")) == NULL)
	{
		fprintf(stderr, "���ļ�ʧ�ܣ�\n");
		exit(EXIT_FAILURE);
	}

	//��ʼ���ṹ
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
	struct book book;          //����ͼ���ʶ���Ĳ�ͬ���ƿռ�
	bool delete_me;
};
//����:������ÿ��ɾ��ʱ�������нṹ����,���罫�ṹ��ָʾ�Ƿ���Ϊɾ�������ݳ�Ա
//����������ڳ������ʱ,ֻ��ʾ�ʹ洢��Щδ���ΪҪɾ������Ŀ��ɾ����Ϣ���Դ洢�ڵ�
//����������,��������ͼ��ṹһ��洢�ڽṹ�н���Ϣ������һ��

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
	{                                                      //�˴��������ϵ����δ�������������������������������������������������
		while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
		{
			if (count == 0)
				puts("book.dat�ļ��е�ǰ���ݣ�");
			printf("%s by %s: $%.2f\n", library[count].book.title,
				library[count].book.author, library[count].book.value);
			printf("������Ļ���ɾ����Щ������<y/n>");
			if (GetLet("yn") == 'y')
			{
				printf("����c�Ը��ģ�����d��ɾ����");
				if (GetLet("cd") == 'd')
				{
					library[count].delete_me = true;
					deleted++;
					puts("���Ϊɾ������Ŀ��");
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
		fputs("book.dat�ļ�������", stderr);
		exit(EXIT_FAILURE);
	}
	puts("����������(���н���)��");
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
			puts("������һ��������");
		}
	}

	puts("�������鼮�嵥��");
	for ( index = 0; index < filecount; index++)
	{
		if (library[index].delete_me == false)
			printf("%s by %s: $%.2f\n", library[index].book.title,
				library[index].book.author, library[index].book.value);
	}
	if (( err = pbooks = fopen_s(&pbooks,"book.dat","w")) == NULL)
	{
		fputs("�޷�Ϊ�����book.dat�ļ���\n", stderr);
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
		printf("���б�������һ���ַ� %s\n", s);
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
		printf("�������ߣ�");
		s_gets(pb->book.author, MAXAUTL);
		printf("����۸�");
		while (scanf_s("%f",&pb->book.value) != 1)
		{
			puts("���������֣�");
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
	puts("������ĸ�������ѡ��");
	puts("t) �޸ı���\ta���޸�����");
	puts("v���޸ļ۸�\ts���˳��������޸�");
	puts("q�����Ը���");
	while ((c = GetLet("tavsq")) != 's' && c != 'q')
	{
		switch (c)
		{
		case 't':
			puts("�����µ�������");
			s_gets(copy.title, MAXTITL); break;
		case'a':
			puts("�����µ���������");
			s_gets(copy.author, MAXAUTL); break;
		case'v':
			puts("�����µļ۸�");
			while (scanf_s("%f",&copy.value)!= 1)
			{
				puts("���������֣�");
				scanf_s("%*s");
			}
			while (getchar() != '\n')
			{
				continue;
			}
			break;
		}
		puts("������ĸ�������ѡ��");
		puts("t) �޸ı���\ta���޸�����");
		puts("v���޸ļ۸�\ts���˳��������޸�");
		puts("q�����Ը���");
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

int GetMenu(void);														 //չʾ�˵�
int GetLet(const char *s);												//��ȡѡ���ַ�
int EmptySeats(const struct pl[], int n);								//���ҿ�λ
void ShowEmptySeats(const struct PlaneSeats pl[], int n);				//��ʾ��λ
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
	{              //�ϵ���󣡣���������������������������������������������������������!!!!!!!!!!!!!!
		fread_s(&fp,plane_1, size, SEATS, fp);
		fclose(fp);
	}
	while ((choice = GetMenu()) != 'q')
	{
		switch (choice)
		{
		case'o':printf("��λ��%d����\n", EmptySeats(plane_1, SEATS)); break;
		case'e':ShowEmptySeats(plane_1, SEATS); break;
		case'l':ListAssign(ps, SEATS); break;
		case'a':AssignSeats(plane_1, SEATS); break;
		case'd':DeleteSeats(plane_1, SEATS); break;
		default:puts("����");
			break;
		}
	}
	if ((err = fp = fopen_s(&fp,"air.dat","wb")) == NULL)
	{
		puts("�޷������ݱ��浽�ļ��У�");
	}
	else
	{
		fwrite(plane_1, size, SEATS, fp);
		fclose(fp);
	}

	system("pause");
	return 0;
}

#define CHOICES 6                                                    //�˵��е�6��ѡ��
int GetMenu(void)													 //չʾ�˵�
{
	const char *descript[CHOICES] =
	{
		"��ʾ���ŵ���λ��",
		"��ʾ����λ�б�",
		"��ʾ����ĸ˳�����е���λ�����б�",
		"���˿Ͱ�����λ",
		"ɾ����λ����",
		"�˳�"
	};

	const char labels[CHOICES + 1] = "oeladq";
	int i;
	for ( i = 0; i < CHOICES; i++)
	{
		printf("%c) %s\n", labels[i], descript[i]);
	}

	return GetLet(labels);
}

int GetLet(const char *s)												//��ȡѡ���ַ�
{
	char c;

	c = getchar();
	while (strchr(s,c) == NULL)
	{
		printf("���б�%s������һ���ַ�\n", s);
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


int EmptySeats(const struct PlaneSeats pl[], int n)								//���ҿ�λ
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

void ShowEmptySeats(const struct PlaneSeats pl[], int n)				//��ʾ��λ
{
	char seating[3 * SEATS];

	if (EmptySeats(pl,n) == 0)
	{
		puts("������λ�ѷ��䣡");
	}
	else
	{
		puts("��������λ��");
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
		puts("������λ���ǿյġ�");
	}
	else
	{
		Sort(ps, n);
		for ( i = 0; i < SEATS; i++)
		{
			if (ps[i]->seatStatus == TAKEN)
				printf("��λ %d: %s, %s\n", ps[i]->seatId, 
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
		puts("���е���λ��������ˣ�");
	}
	else
	{
		MakeList(pl, list, EMPTY);
		puts("����Ҫ�ĸ���λ?�Ӵ��б���ѡ��:");
		puts(list);
		do
		{
			while (scanf_s("%d",&seat) != 1)
			{
				scanf_s("%*s");
				puts("������б�������һ�����֣�");
				puts(list);
			}
			if (seat < 1 || seat > SEATS || pl[seat - 1].seatStatus == TAKEN)
			{
				puts("������б�������һ�����֣�");
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
		puts("�����һ�����֣�");
		s_gets(pl[seat - 1].FirstName, 20);
		puts("����ڶ������֣�");
		s_gets(pl[seat - 1].LastName, 20);
		printf("%s %s ��λ���ǣ�%d.\n",pl[seat - 1].FirstName,pl[seat -1].LastName,seat);
		puts("����a���ܷ��䣬����cȡ����");
		if (GetLet("ac") == 'a')
		{
			pl[seat - 1].seatStatus = TAKEN;
			puts("�˿���λ�ѷ��䣡");
		}
		else
		{
			puts("�˿���λδ���䣡");
		}
	}
}

void DeleteSeats(struct PlaneSeats pl[], int n)
{
	int seat, loop;
	char list[3 * SEATS];

	if (EmptySeats(pl,n) == SEATS)
	{
		puts("������λ�ѿգ�");
	}
	else
	{
		ShowSeats(pl, n);
		MakeList(pl, list, TAKEN);
		puts("����Ҫȡ������Ϊ���룺");
		do
		{
			while (scanf_s("%d", &seat) != 1)
			{
				scanf_s("%*s");
				puts("���б�������һ�����֣�");
				puts(list);
			}
			if (seat < 1 || seat > SEATS || pl[seat - 1].seatStatus == EMPTY)
			{
				puts("���б�������һ�����֣�");
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
		printf("%s %s ȡ������λ %d��\n", pl[seat - 1].FirstName, pl[seat - 1].LastName, seat);
		puts("���� d ��ɾ����ֵ������ a ��ֹ��");
		if (GetLet("da") == 'd')
		{
			pl[seat - 1].seatStatus = EMPTY;
			puts("�˿���ɾ����");
		}
		else
		{
			puts("�˿ͱ�����");
		}
	}
}

void ShowSeats(const struct PlaneSeats pl[], int n)
{
	int i;

	puts("Ŀǰ�Ѿ�������λ��");
	for ( i = 0; i < SEATS; i++)
	{
		if (pl[i].seatStatus == TAKEN)
		{
			printf("��λ %d: %s, %s\n", pl[i].seatId, pl[i].LastName, pl[i].FirstName);
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
//ռλռλռλռλռλռλռλռλռλռλռλռλռλռλռλռλռλ
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
	double(*pf[NUM])(double) = { twice,half,thrice,sqrt };       //ָ������ָ��
	double val;
	double ans;
	int sel;

	printf("����һ�����֣�");
	while (scanf_s("%lf",&val) && val >= 0)
	{
		ShowMenu();
		while (scanf_s("%d",&sel) && sel >= 0 && sel <=3)
		{
			ans = (*pf[sel])(val);        //�ú���ָ����ú�������val
			printf("answer = %f\n", ans);
			ans = pf[sel](val);              //�����ظ�����
			printf("�ظ���answer = %f\n", ans);
			ShowMenu();
		}
		printf("������һ�����֣�");
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
	puts("����һ�����е�ѡ�");
	puts("0��˫��ֵ		1����ֵ����");
	puts("2������ֵ		3����ֵ��ƽ����");
	puts("4����һ������");
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

	printf("Դ�����ǣ�");
	for (int i = 0; i < NUM; i++)
	{
		printf(" %.2lf", source[i]);
	}
	puts("");

	transform(source, target, NUM, sin);              //���ú�������sinֵ
	printf("��sin��Ŀ������ǣ�");
	for (int i = 0; i < NUM; i++)
	{
		printf(" %.2lf", target[i]);
	}
	puts("");

	transform(source, target, NUM, cos);               //���ú�������cosֵ
	printf("��cos��Ŀ������ǣ�");
	for (int i = 0; i < NUM; i++)
	{
		printf(" %.2lf", target[i]);
	}
	puts("");

	transform(source, target, NUM, halve);              //�����Զ��庯���������ֵ
	printf("���Զ���Ŀ������ǣ�");
	for (int i = 0; i < NUM; i++)
	{
		printf(" %.2lf", target[i]);
	}
	puts("");

	transform(source, target, NUM, triple);              //�����Զ�������������ֵ
	printf("����������Ŀ������ǣ�");
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
