#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void bubble_sort(int arr[],int sz) {
	//ȷ��ð�ݵ�����,10��������9��
	int i = 0;
	for (i = 0; i < sz-1; i++) {
		//ÿһ��ð������
		int mayw = 1;
		int j = 0;
		for (j = 0; j <sz-1- i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				mayw = 0;//���������ʱ������˽���
			}
		}
		if (mayw == 1) {
			break;
		}
	}
}//ð�����򣬱Ƚ��������ڵ�Ԫ�أ���˳�򽻻�
int main() {
	int arr[] = {56,451,41,515,451,31,4552,1017,15,115,121,12};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	//������Ϊ����ʵ��ð������,��ð�ݺ���
	/*int arr[] = {1,2,3,4,5,6,7,8,9};
	int se = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i <se; i++) {
		printf("&arr[%d]=%p\n" ,i,& arr[i]);
	}*/
	//Ѱ�������ַ
	/*int arr3[3] = { 1,2,3 };
	char arr1[3] = { 'a','b' ,'c'};
	char arr2[3] = "ac";*/
	//��������
	/*char arr[] = "abcdefg";
	int i = 0;
	for (i = 0; i < (int)strlen(arr); i++) {
		printf("%c\n", arr[i]);
	}*/
	//��ӡ����
	/*printf("%d\n",sizeof(arr3));
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr3));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));*/
	//��û��Ԫ��ֵʱ��������˶��پ��Ƕ��ٸ�

	return 0;
}