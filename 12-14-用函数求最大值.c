#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//定义函数
int get_max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;

}

int main()
{
	int a = 10;
	int b = 20;

	//函数的使用场景
	int max = get_max(a,b);
	printf("max = %d\n",max);

	max = get_max(100,300);
	printf("max = %d\n", max);

	return 0;
}
