#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
struct S
{
	int n;
	int *arr;
};//n,arr�����������ڴ���
void Test6(void)
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	//+����Ĵ�С����arr�Ĵ�С
	if (ps == NULL)
	{
		printf("�ڴ治��");
	}
	else
	{
		ps->n = 100;
		ps->arr = (int *)malloc(5 * sizeof(int));
		if (ps->arr == NULL)
		{
			printf("�ڴ治��");
		}
		else
		{
			int i = 0;
			for (i = 0; i < 5; i++)
			{
				ps->arr[i] = i;
				printf("%d  ", ps->arr[i]);
			}
			struct S* ptr = (struct S*)realloc(ps->arr, 10 * sizeof(int));
			printf("\n");
			if (ptr != NULL)
			{
				ps->arr = (int*)ptr;
			}
			for (i = 5; i < 10; i++)
			{
				ps->arr[i] = i;
			}
			for (i = 0; i < 10; i++)
			{
				printf("%d  ", ps->arr[i]);
			}
		}
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
}