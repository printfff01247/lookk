#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	int count = 0;
	//sqrt ��ƽ������ѧ�⺯��
	for(i = 101;i <= 200;i+=2)
	{
		//�ж�1�Ƿ�Ϊ����
		//�����жϹ���
		//1.�Գ���
		int j = 0;
		for(j = 2;j <=sqrt(i);j++)
		{
			if(i%j == 0)
			{
				break;
			}
		}
		if(j >sqrt(i) )
		{
			count++;
			printf("%d ",i);
		
		}

	}
	printf("\ncount = %d\n", count);

	return 0;

	//�������Ч�ʵĴ���

}