#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	//10循环
	//10次打印
	//10个元素
	for(i = 0; i <10; i++) //前闭后开区间的写法。
	{
		printf("%d ", arr[i]);
	
	}

	return 0;
}