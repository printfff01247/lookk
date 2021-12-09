#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//谨慎使用goto语句
//while 循环语句可以替代


int main()
{
	char input [20] = {0};
	//shutdown -s -t 60
	//system()-执行系统命令

	system("shutdown -s -t 60");
	while(1)
	{
	//again:
	printf("即将关机，取消请输入：NO\n请输入");
	scanf("%s",input);
	if(strcmp(input,"NO") == 0)//比较两个字符串-strcmp
	{
		system("shutdown -a");
		break;
	}


	}

//	/*else
//	{
//		goto again;
//	}
//*/
	return 0;
}