#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
	int j = 0;
	for(j=2;j<=sqrt(n);j++)
	{
		if(n%j == 0)
			return 0;
	
	}
	return 1;

}

int main()
{
	//打印100-100之间的素数
	int i = 0;
	int n = 0;
	for(i=100;i<=200;i++)
	{
		//判断i是否为素数
		if(is_prime(i) == 1)
			printf("%d ",i);
	
	}

	return 0;
}