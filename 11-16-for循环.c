#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int i = 0;
	//初始化   判断   调整
	for(i = 1;i <= 10;i++) //基本语法
	{
		if( i == 5)
			//break;
			//continue; for循环中的break和continue在循环中意义一样，但是还是有差异。
		printf("%d ", i);
	
	}

	return 0;
}