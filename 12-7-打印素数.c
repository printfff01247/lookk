#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	int count = 0;
	//sqrt 开平方的数学库函数
	for(i = 101;i <= 200;i+=2)
	{
		//判断1是否为素数
		//素数判断规则
		//1.试除法
		int j = 0;
		for(j = 2;j <=sqrt(i);j++)
		{
			if(i%j == 0)
			{
				break;
			}
		}
		if(j >sqrt(i) )
		{
			count++;
			printf("%d ",i);
		
		}

	}
	printf("\ncount = %d\n", count);

	return 0;

	//更合理简单效率的代码

}