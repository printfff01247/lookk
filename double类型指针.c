#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main ()
{
	double d = 3.14;
	double* pd = &d;

	printf("%d\n",sizeof(pd));
	printf("%lf\n",d); //�ֽڴ�ӡ�ַ�Ϊ lf
	printf("%lf\n",*pd);//*����Ҳ��Ϊ��ӡ���ʽ


	return 0;

}
