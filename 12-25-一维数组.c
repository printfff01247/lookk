#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
//	char arr [] = "abcdef";//[a][b][c]][d][e][f][\0]
//	//printf("%c\n",arr[3]);
//	//全部打印用循环输出
//	int i = 0;
//	int len = strlen(arr);
//	for(i=0;i<len;i++)
//	{
//		printf("%c ",arr[i]);
//	}
//
//	return 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int sz = sizeof(arr)/sizeof(arr[0]);//数组大小的计算方式
	int i = 0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}/*数组大小，字节的计算方式：int sz = sizeof(arr)/sizeof(arr[0])*/