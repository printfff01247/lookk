#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	scanf("%d%d",&m,&n);
	while(r=m%n)//两个代码都可以，此方法简捷，效率。
	{
		//r = m%n;
		m = n;
		n = r;
	
	}
	printf("%d\n",n);

	return 0;
}