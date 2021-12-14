#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//Swap1未能实现交换
//
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	//int tmp = 0;

	printf("a=%d b=%d\n",a,b);
	//Swap1(a,b);
	Swap2(&a,&b);
	//tmp = a;
	//a = b;
	//b = tmp;
	printf("a=%d b=%d\n",a,b);

	return 0;
}

