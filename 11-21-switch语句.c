#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// switch {����Ϊ���α���}
// case	  �����Ϊ���γ������ʽ��
// break; ��switch����У�û�а취ֱ��ʵ�ַ�֧������break����ʵ�������ķ�֧��

int main ()
{
	int day = 0;
	int n = 1;
	scanf ("%d", &day);
	switch(day)
	{
	case 1:
		if(1 == n)
			printf("�Ǻǣ�\n");
	case 2:
		
	case 3:
		
	case 4:
		
	case 5:
		printf("������\n");
		break;
	case 6:
		
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}/*��ÿ�� switch ����ж���һ�� default �������һ����ϰ�ߣ�
 ���������ں���ټ�һ��break*/
