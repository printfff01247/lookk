#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main ()
{
	//1-10
	int i = 1;
	do
	{	if(i == 5)
		continue;
		printf("%d\n",i);
		i++;
	}
	while(i<=10);


	return 0;
}/* do�����ص�
  * ѭ������ִ��һ�Σ�ʹ�õĳ������ޣ����Բ�����ʹ�ã�
  * break�� continue��������п���ʹ�á�*/