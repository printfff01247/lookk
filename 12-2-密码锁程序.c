#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for(i=0;i<3;i++)
	{
		printf("����������:>");
		scanf("%s",password);
		if(strcmp(password, "123456") == 0)// ==���������Ƚ������ַ����Ƿ���ȣ�Ӧ����һ���⺯�� strcmp
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	
	}
	if(i == 3)
		printf("������������˳�����\n");


	return 0;
}