#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int is_leap_year(int y)
{
	if((y%4==0&&y%100!=0) ||(y%400==0))  //������жϷ�ʽ
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for(year = 1000;year<=2000;year++)
	{
		//�ж�year�Ƿ�Ϊ����
		if(1 == is_leap_year(year))
		{
			printf("%d ",year);
		
		}
	
	}

	return 0;
}