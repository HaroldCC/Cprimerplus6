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
