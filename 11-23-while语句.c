#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 1;

	while(i<=10)
	{
		if(i == 5)
			continue;/*��ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ���е�continue��ߵĴ��벻ִ�У�
					ֱ����while��������һ���жϡ�*/
	
		printf("%d ",i);
		i++;

	}

	return 0;
}