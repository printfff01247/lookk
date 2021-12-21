#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};
	printf("%d\n",sizeof(arr1));
	printf("%d\n",sizeof(arr2));
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));  //结果为随机值，因为没有遇到\0结束符号


	return 0;
}