/*************************************�����ϰ17***********************************************/
/*1*/
//�ݹ鷽��
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TSIZE 45

struct film
{
	char title[TSIZE];
	int rating;
	struct film * next;                 //ָ���������һ���ṹ
};

void show_rec(const struct film * pf);            //�ݹ麯��
char s_gets(char * st, int n);

int main(void)
{
	struct film * head = NULL;
	struct film * prev = NULL, *current;
	char input[TSIZE];
	//�ռ���Ϣ
	puts("�����һ����Ӱ�����֣�");
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
		puts("����������1 - 10����");
		scanf_s("%d", &current->rating);
		while (getchar() != '\n')
		{
			continue;
		}
		puts("������һ����Ӱ�����֣�������ֹͣ��:");
		prev = current;
	}
	//��ʾ�б�
	if (head == NULL)
	{
		printf("û�����ݣ�\n");
	}
	else
	{
		printf("�����ǵ�Ӱ�б�\n");
	}
	current = head;
	while (current != NULL)
	{
		printf("��Ӱ��%s ������%d\n", current->title, current->rating);
		current = current->next;
	}
	//������ʾ
	if (head != NULL)
	{
		printf("\n����������ĵ�Ӱ�б�\n");
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
	printf("��Ӱ��%s ������%d\n", pf->title, pf->rating);
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
//˫������б�
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

	puts("�����һ����Ӱ�����֣�");
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
		puts("����������");
		scanf_s("%d", &current->rating);
		while (getchar() != '\n')
		{
			continue;
		}
		puts("������һ����Ӱ���������˳�����");
		prev = current;
	}
	if (head == NULL)
	{
		printf("�����ݣ�\n");
	}
	else
	{
		printf("����Ϊ��Ӱ�б�\n");
	}
	current = head;
	while (current != NULL)
	{
		printf("��Ӱ��%s ������%d\n", current->title, current->rating);
		current = current->next;
	}
	//����
	if (head != NULL)
	{
		printf("\n��������ĵ�Ӱ�б�\n");
		current = prev;
		while (current != NULL)
		{
			printf("��Ӱ��%s ������%d\n", current->title, current->rating);
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