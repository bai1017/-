#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//整型提升
{
	char a = 3;
	char b = 127;
	char c=a+b;
	printf("%d", c);
}

//int main()//下标引用，函数调用和结构成员
//{
//	//[]下标引用操作符
//	/*int arr[10] ;
//	arr[1] = 0;*/
//	//函数调用操作符     main（）
//	//结构成员
//
//	return 0;
//}

//int main()//逗号表达式exp1,exp2,exp3,......
//{
//	int a = 0;
//	int b = 0;
//	int c = (a > b, a = b + 10, a, b = a + 1);//最后的输出结果是最后一个表达式的内容
//	printf("%d\n", c);
//	return 0;
//}

//int main()//三目操作符
//{
//	int a = 0;
//	int b = 0;
//	b = (a > 4 ? 3: 4);
//	/*if (a > 4)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = 4;
//	}*/
//}

//int main()//逻辑，i=0为假就不执行；
//{
//	int i = 0, a = 0, b = 0, c = 3, d = 4;
//	i =a||b||++c ;
//	printf("a= %d\nb = % d\nc = % d\nd = % d\n",a,b,c,d);
//	return 0;
//}