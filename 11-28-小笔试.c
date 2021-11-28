#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main ()
{
	int i = 0;
	int k = 0;
	for(i = 0, k = 0;k = 0;i++,k++)//不循环，其中k = 0；为赋值，表达式为假，不循环
		k++;

	return 0;
}//