#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
//��������
struct S
{
	int n;
	int arr[];//�����С�ǿɱ��
};//n,arr���������ڴ���
void Test5(void)
{
	struct S s;
	printf("%d\n", sizeof(s));
	struct S* p = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	//+����Ĵ�С����arr�Ĵ�С
	if (p == NULL)
	{
		printf("�ڴ治��");
	}
	else
	{
		p->n = 100;
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			p->arr[i] = i;
			printf("%d  ", p->arr[i]);
		}
		struct S* ps = (struct S*)realloc(p, 44);
		printf("\n");
		if (ps != NULL)
		{
			p = ps;
		}
		for (i = 5; i < 10; i++)
		{
			p->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d  ", p->arr[i]);
		}
	}
	free(p);
	p = NULL;
}