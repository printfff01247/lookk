#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main ()
{
	double d = 3.14;
	double* pd = &d;

	printf("%d\n",sizeof(pd));
	printf("%lf\n",d); //字节打印字符为 lf
	printf("%lf\n",*pd);//*类型也以为打印表达式


	return 0;

}
