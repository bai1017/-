#define _CRT_SECURE_NO_WARNINGS 1
#include<stdint.h>
int main()
{
	char ch = 'w';
	char* p = &ch;
	printf("%s", ch);
	printf("%s", p);
	char arr[] = "abcdef";
	char* pq = arr;
	printf("%s", arr);
	printf("%s", pq);
	return 0;
}