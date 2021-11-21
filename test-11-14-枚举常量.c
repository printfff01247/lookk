#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//枚举 就是一一列举
//枚举关键字 ---enum


enum Sex    //性别
{
	MALE,   //男
	FEMALE, //女
	SECRET  //保密
};          //注意标点符号
int main()
{
	//enum Sex s = FEMALE;
	printf("%d\n",MALE);	//0
	printf("%d\n",FEMALE);	//1
	printf("%d\n",SECRET);	//2

	return 0;

}