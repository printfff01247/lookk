#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main ()
{
	int i = 0;
	int n = 0;
	int ret = 1;

	scanf("%d",&n);// Î´¿¼ÂÇÒç³öÇé¿ö
	for(i = 1; i<= n; i++)
	{
		ret = ret *i;
	}

	printf("ret = %d\n", ret);


	return 0;
}