#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<errno.h>
//自编strlen函数（指针
int my_strlen(const char* str)
{
	int i = 0;
	assert(str != NULL);
	while (str)
	{
		str++;
		i++;
	}
	return i;
}
//自编strlen函数（递归
int my_strlen1(const char* str)
{
	assert(str != NULL);
	if (str != 0)
	{
		return 1 + my_strlen1(str + 1);
	}
}
//自编strcpy函数
char* my_strcpy(char* str,const char* str1)
{
	assert(str != NULL);
	assert(str1 != NULL);
	char* p = str;
	while (*str++ = *str1++) { ; }
	//while (str1)
	//{
	//	*str++ = *str1++;
	///*	*str = *str1;
	//	str++;
	//	str1++;*/
	//}
	return p;//返回目的空间的起始地址
}
//自编strcat函数
char* my_strcat(char* aa1,const char* aa2)
{
	char* p = aa1;
	assert(aa1 != NULL);
	assert(aa2);
	while (*aa1 != '\0')
	{
		aa1++;
	}
	while (*aa1++ = *aa2++) { ; }
	return p;
}
//自编strcmp函数
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\n')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
//自编strstr函数
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);
	char* s1 = (char*)str1;
	char* s2 = (char*)str2;
	char* s3 = (char*)str1;
	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*s3)
	{
		s1 = s3;
		s2 = (char*)str2;
		while((*s1 !='\0')&&(*s2 != '\0')&&(*s1==*s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return s3;
		}
		if (*s1 == '\0')
		{
			return NULL;
		}
		s3++;
	}
	return NULL;
}
int main()
{
	//strlen函数:求字符串长度
	char arr[] = { 'a','b','c','e' };
	int len = strlen("abcdrf");//strlen传递的是无符号数，相减为负数时也是无符号数
	int lenn = my_strlen("abcdefg");//自己编译的strlen代码
	int mmn = strlen(arr);//得到的是随机值
	printf("%d\n", len);
	printf("%d\n", lenn);
	//strcpy函数：字符串拷贝
	char arr1[] = "abcdefg";//目标字符串的空间一定要比元字符串大，且必须可变
	char arr2[] = "wd";//拷贝的原字符串必须含有\0，
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	strcpy(arr1, arr2);//将arr2的字符拷贝到arr1里，包括\0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	my_strcpy(arr1, arr2);//将arr2的字符拷贝到arr1里，包括\0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//strcat函数：字符串的追加
	char a1[30] = "xiaobai,\0wfwgrg";//目标字符必须足够大，从\n开始追加替换
	char a2[] = "i love you";//strcat(a1, a2);//将a2追加到a1后面，//printf("%s\n", a1);
	my_strcat(a1, a2);
	printf("%s\n", a1);
    //strcmp函数：字符串的比较
	const char* b1 = "adijvejfq";
	const char* b2 = "jhfjeqqq";
	int nnn = strcmp(b1, b2);//比较字符串函数的首字符的大小，若相等，比较下一位，若b1>b2,返回一个大于0的数，b1<b2，返回小于0的数
	int mmm = my_strcmp(b1, b2);
	printf("%d\n", mmm);
	if (nnn > 0)
	{
		printf("b1>b2\n");
	}
	else if (nnn == 0)
	{
		printf("b1=b2\n");
	}
	else if (nnn < 0)
	{
		printf("b1<b2\n");
	}
	//strstr函数：查找字符串
	const char *q1 = "fehghrenbbbcyhmnt";
	const char* q2 = "bbc";//const char* qf = strstr(q1, q2);//在q1里面找q2的地址
	char* qf = my_strstr(q1, q2);
	if (qf == NULL)
	{
		printf("字串不存在\n");
	}
	else
	{
		printf("%s\n", qf);
	}
	//strtok函数：切割字符串
	char arr[] = "22264585@qq.com";
	const char* p = "@ .";
	char arr1[1017] = { 0 };
	strcpy(arr1, arr);
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) 
	{
		printf("%s\n", ret);
	}
	char* ret = strtok(arr, p);//以p为界限来切割arr，但是strtok会改变掉原字符串的元素，将p内分节符滞空，故将原字符串拷贝后使用拷贝后字符串
	printf("%s\n", ret);
	ret = strtok(NULL, p);//切割第二段时，第一段填入滞空，不用写arr是因为strtok会记忆
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	//strerror函数：错误报告函数
	char* mko = strerror(errno);//0,no error//1,peration not permitted//2,No such file or directory//errno是一个错误的全局变量，当c语言在执行函数的过程中，发生了错误，就会把对应的错误码赋值到errno中
	printf("%s\n", mko);
	FILE* pf= fopen("text.txt","r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open");
	}
	return 0;
}