#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 2;
	if(a == 1)
		if(b == 2)
			printf("hehe\n");
	else
		printf("haha\n");

	return 0;

}
/*此语句无输出
 *else 只与最近的if 相匹配
 *第一if条件不成立 不执行第二if语句，所以无输出
 *注意悬空if 语句

 *if  else  语句关键点
 *if（unm = 5） 打印输出5 ， 因为 = 为赋值符号
 *if (5 == num)  常量 和变量的比较 常量在 == 左边是比较好的方式 不出错 逻辑清晰
 */
