#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int x,y,z;

	do{
	//��ѧ���ڵ����⣬�������ʱ��ע��scanf�÷���%d֮�䲻�ã��ţ��޷�����
		scanf("%d%d%d",&x,&y,&z);
		//�����������&&�����������Լ������ϵ��>=,����=��һֱ���ұߣ�������a=<b����д��
		if(x>=0&&x<=100&&y>=0&&y<=100&&z>=0&&z<=100)
			break;
	}while(1);

	printf("score1=%d,score2=%d,score3=%d",x,y,z);


	return 0;
}