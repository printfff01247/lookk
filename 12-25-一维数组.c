#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
//	char arr [] = "abcdef";//[a][b][c]][d][e][f][\0]
//	//printf("%c\n",arr[3]);
//	//ȫ����ӡ��ѭ�����
//	int i = 0;
//	int len = strlen(arr);
//	for(i=0;i<len;i++)
//	{
//		printf("%c ",arr[i]);
//	}
//
//	return 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int sz = sizeof(arr)/sizeof(arr[0]);//�����С�ļ��㷽ʽ
	int i = 0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}/*�����С���ֽڵļ��㷽ʽ��int sz = sizeof(arr)/sizeof(arr[0])*/