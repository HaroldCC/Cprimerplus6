/*************************************编程练习17***********************************************/
/*1*/
//递归方法
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TSIZE 45

struct film
{
	char title[TSIZE];
	int rating;
	struct film * next;                 //指向链表的下一个结构
};

void show_rec(const struct film * pf);            //递归函数
char s_gets(char * st, int n);

int main(void)
{
	struct film * head = NULL;
	struct film * prev = NULL, *current;
	char input[TSIZE];
	//收集信息
	puts("输入第一个电影的名字：");
	while (s_gets(input,TSIZE) != NULL && input[0] != '\0')
	{
		current = (struct film *)malloc(sizeof(struct film));
		if (head == NULL)
		{
			head = current;
		}
		else
		{
			prev->next = current;
		}
		current->next = NULL;
		strcpy_s(current->title,45, input);
		puts("输入评级（1 - 10）：");
		scanf_s("%d", &current->rating);
		while (getchar() != '\n')
		{
			continue;
		}
		puts("输入下一个电影的名字（空行以停止）:");
		prev = current;
	}
	//显示列表
	if (head == NULL)
	{
		printf("没有数据！\n");
	}
	else
	{
		printf("以下是电影列表：\n");
	}
	current = head;
	while (current != NULL)
	{
		printf("电影：%s 评级：%d\n", current->title, current->rating);
		current = current->next;
	}
	//逆序显示
	if (head != NULL)
	{
		printf("\n以下是逆序的电影列表：\n");
		show_rec(head);
	}

	system("pause");
	return 0;
}

void show_rec(const struct film * pf)
{
	if (pf->next != NULL)
	{
		show_rec(pf->next);
	}
	printf("电影：%s 评级：%d\n", pf->title, pf->rating);
}

char s_gets(char * st, int n)
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
}*/
//双向遍历列表
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TSIZE 45

struct film
{
	char title[TSIZE];
	int rating;
	struct film * next;
	struct film * prev;
};

char s_gets(char * st, int n);

int main(void)
{
	struct film *head = NULL;
	struct film *prev = NULL,*current;
	char input[TSIZE];

	puts("输入第一部电影的名字：");
	while (s_gets(input,TSIZE) != NULL && input[0] != '\0')
	{
		current = (struct film *) malloc(sizeof(struct film));
		if (head == NULL)
		{
			head = current;
			head->prev = NULL;
		}
		else
		{
			prev->next = current;
			current->prev = prev;
		}
		current->next = NULL;
		strcpy_s(current->title, 45, input);
		puts("输入评级：");
		scanf_s("%d", &current->rating);
		while (getchar() != '\n')
		{
			continue;
		}
		puts("输入下一部电影名（空行退出）：");
		prev = current;
	}
	if (head == NULL)
	{
		printf("无数据！\n");
	}
	else
	{
		printf("以下为电影列表：\n");
	}
	current = head;
	while (current != NULL)
	{
		printf("电影：%s 评级：%d\n", current->title, current->rating);
		current = current->next;
	}
	//逆序
	if (head != NULL)
	{
		printf("\n以下逆序的电影列表：\n");
		current = prev;
		while (current != NULL)
		{
			printf("电影：%s 评级：%d\n", current->title, current->rating);
			current = current->prev;
		}
	}
	system("pause");
	return 0;
}

char s_gets(char * st, int n)
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
}*/
/*2*/
//#include<stdio.h>
//
//int main(void)
//{
//
//
//	system("pause");
//	return 0;
//}
#include<stdio.h>
int main(void)
{
	int num[10];
	int temp, i, j;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &num[i]);
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}
	system("pause");
	return 0;
}