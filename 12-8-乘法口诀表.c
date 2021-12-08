#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	//确定打印9行
	for(i = 1;i <= 9;i++)
	{
		//打印一行
		int j = 1;
		for(j = 1;j <= i;j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j);//%2d代表打印2位数（左对齐），没有第二位用空格补齐
		
		}
		printf(" \n");

	}

	return 0;
}