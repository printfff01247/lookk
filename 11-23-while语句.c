#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 1;

	while(i<=10)
	{
		if(i == 5)
			continue;/*终止本次循环的，也就是本次循环中的continue后边的代码不执行，
					直接跳while，进行下一次判断。*/
	
		printf("%d ",i);
		i++;

	}

	return 0;
}