#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//函数实现
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	
//	}
//	return count;
//
//}

//递归实现
//把大事化小
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0
//3
int my_strlen(char* str)
{
	if(*str !='\0')
		return 1+my_strlen(str+1);
	else
		return 0;
}

int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);//求字符串长度
	//printf("%d\n",len);

	//模拟实现一个strlen函数。
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("len = %d\n", len);

	return 0;
}