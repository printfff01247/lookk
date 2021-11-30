#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	
	for(n = 1;n <=10;n++)
	{	

		{
			ret = ret * n;
		
		}//n的阶乘
		sum = sum + ret;
	
	} //阶乘之后相加
	printf("sum = %d\n",sum);

	//for(n = 1;n <= 3;n++)
	//{	
	//	ret = 1;//每一次要从起始位置乘
	//	for(i = 1; i <= n;i++)
	//	{
	//		ret = ret * i;
	//	
	//	}//n的阶乘
	//	sum = sum + ret;
	//
	//} //阶乘之后相加
	//printf("sum = %d\n",sum);

	return 0;
}//优化后的代码效率要高，少一层循环。