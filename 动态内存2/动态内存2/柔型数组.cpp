#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
//柔性数组
struct S
{
	int n;
	int arr[];//数组大小是可变的
};//n,arr在连续的内存上
void Test5(void)
{
	struct S s;
	printf("%d\n", sizeof(s));
	struct S* p = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	//+后面的大小就是arr的大小
	if (p == NULL)
	{
		printf("内存不足");
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