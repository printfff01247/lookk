#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//�ṹ��
//char int doublie  ...
//�� = 3
//�� - ���Ӷ���
//���� + ��� +���� + ���֤����+....

//����һ���ṹ������
struct Book   //��������һ����
{
	char name[20];	//��������  C���Գ������
	short price;	//����һ����ļ۸�  55

};		//���Ų����٣���ʾ�������Ͷ���
int main ()
{
	//���ýṹ������-����һ���ṹ�����
	struct Book b1 = {"C���Գ������",55};
	strcpy (b1.name,"C++");	//	strcpy -string copy -�ַ�������-�⺯��- ��Ҫͷ�ļ�<string.h>  �ַ������Ͳ���������Ҫ��strcpy

	printf("%s\n",b1.name);
	//ָ�����͵Ľṹ��
	//struct Book* pb = &b1;

	//printf("%s\n",pb ->name);	//  ->Ϊָ���ʶ
	//printf("%d\n",pb->price);

	//printf("������%s\n",(*pb).name);
	//printf("�۸�%dԪ\n",(*pb).price);
	//printf("����:%s\n",b1.name);
	//printf("�۸�:%dԪ\n",b1.price);

	//b1.price = 15; //�޸Ľṹ�����

	//printf("�޸ĺ�ļ۸�:%dԪ\n",b1.price);

	return 0;
}