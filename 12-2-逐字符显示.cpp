#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "welcome to bit !!!!";
	char arr2[] = "###################";
	int left = 0;
	//int right = sizeof(arr1)/sizeof(arr1[0]-2); �˴��벻������⣬-2������\0�ַ���
	int right = strlen(arr1)-1;

	while(left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n",arr2);

		//��ʱ��ʾһ��
		Sleep(1000);
		system("cls");//ִ��ϵͳ�����һ��������
		left++;
		right--;

	}
	printf("%s\n",arr2);
	return 0;
}
