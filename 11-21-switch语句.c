#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// switch {必须为整形表达句}
// case	  后必须为整形常量表达式：
// break; 在switch语句中，没有办法直接实现分支，搭配break才能实现真正的分支。

int main ()
{
	int day = 0;
	int n = 1;
	scanf ("%d", &day);
	switch(day)
	{
	case 1:
		if(1 == n)
			printf("呵呵！\n");
	case 2:
		
	case 3:
		
	case 4:
		
	case 5:
		printf("工作日\n");
		break;
	case 6:
		
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}/*在每个 switch 语句中都放一条 default 子语句是一个好习惯，
 甚至可以在后边再加一个break*/
