#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//����ʹ��goto���
//while ѭ�����������


int main()
{
	char input [20] = {0};
	//shutdown -s -t 60
	//system()-ִ��ϵͳ����

	system("shutdown -s -t 60");
	while(1)
	{
	//again:
	printf("�����ػ���ȡ�������룺NO\n������");
	scanf("%s",input);
	if(strcmp(input,"NO") == 0)//�Ƚ������ַ���-strcmp
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