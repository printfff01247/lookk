#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "bit";
	char arr2[20] ="#########";

	strcpy(arr2,arr1);//会拷贝4个字符最后放 \0 .
	printf("%s\n",arr2);

	//strcpy -string copy  -字符串拷贝

	//strlen - string length -字符串长度有关



	return 0;
}