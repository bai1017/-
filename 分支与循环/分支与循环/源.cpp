#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main() {
	int i = 0;
	char password[20] = { 0 };
	char arr1[] = "I LOVE YOU";
	char arr2[] = "          ";
	int left = 0;
	int right = strlen(arr1)-1;
	for (i = 0; i <= 3; i++)
	{
		printf("ÇëÊäÈëµÇÂ¼ÃÜÂë:");
		scanf("%s", password);
		if (strcmp(password, "021209") == 0)
		{
			printf("µÇÂ¼³É¹¦\n");
			system("cls");
			while (left<right) {
				arr2[left] = arr1[left];
				arr2[right] = arr1[right];
				printf("%s\n",arr2);
				Sleep(1000);
				left++;
				right--;
			}
			break;
		}
		else {
			printf("µÇÂ¼Ê§°Ü\n");
		}
		if (i == 3) {
			printf("³¢ÊÔ´ÎÊý¹ý¶àÕËºÅÒÑËøËÀ\n");
		}
	}
	return 0;
}
//int main() {
//	int x=0;
//	while (x<=100)
//	{
//		if (x % 2 == 1)
//        printf("x=%d\n", x);
//		x++;
//	}
//	return 0;
//}