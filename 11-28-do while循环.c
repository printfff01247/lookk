#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main ()
{
	//1-10
	int i = 1;
	do
	{	if(i == 5)
		continue;
		printf("%d\n",i);
		i++;
	}
	while(i<=10);


	return 0;
}/* do语句的特点
  * 循环至少执行一次，使用的场景有限，所以不经常使用，
  * break， continue，在语句中可以使用。*/