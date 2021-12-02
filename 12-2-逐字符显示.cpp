#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "welcome to bit !!!!";
	char arr2[] = "###################";
	int left = 0;
	//int right = sizeof(arr1)/sizeof(arr1[0]-2); 此代码不容易理解，-2其中有\0字符；
	int right = strlen(arr1)-1;

	while(left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n",arr2);

		//延时显示一秒
		Sleep(1000);
		system("cls");//执行系统命令的一个函数。
		left++;
		right--;

	}
	printf("%s\n",arr2);
	return 0;
}
