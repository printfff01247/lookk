#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//ö�� ����һһ�о�
//ö�ٹؼ��� ---enum


enum Sex    //�Ա�
{
	MALE,   //��
	FEMALE, //Ů
	SECRET  //����
};          //ע�������
int main()
{
	//enum Sex s = FEMALE;
	printf("%d\n",MALE);	//0
	printf("%d\n",FEMALE);	//1
	printf("%d\n",SECRET);	//2

	return 0;

}