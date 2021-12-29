#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int x,y,z;

	do{
	//初学存在的问题，在输入的时候注意scanf用法，%d之间不用，号，无法输入
		scanf("%d%d%d",&x,&y,&z);
		//对于与运算符&&成立条件，以及运算关系符>=,即“=”一直在右边，不存在a=<b这种写法
		if(x>=0&&x<=100&&y>=0&&y<=100&&z>=0&&z<=100)
			break;
	}while(1);

	printf("score1=%d,score2=%d,score3=%d",x,y,z);


	return 0;
}