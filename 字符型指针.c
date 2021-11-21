#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main ()
{
	char ch = 'a';
	char* pc = &ch;
	printf ("%d\n",sizeof(char*)); //¼ÆËãÒ»¸öÄÚ´æµÄ×Ö½Ú
	printf ("%d\n",sizeof(short*));
	printf ("%d\n",sizeof(int*));
	printf ("%d\n",sizeof(double*));
	


	*pc = 'a';

	printf("%c\n",ch);

	return 0;
}
