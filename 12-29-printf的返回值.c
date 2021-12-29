#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h> 
int main() 
{ 
	int a=printf("Hello world!"); 
	printf("\n"); 
	printf("%d",a) ; 

	return 0;
}
//事实上，我们看到，首先，我们定义一个a，
//在定义的同时，我们发现此时已经会打印一个helloworld！，
//另外，转行的\n要单独拿出来，否则会影响返回值。