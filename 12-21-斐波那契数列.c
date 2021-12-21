#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);//斐波那契 计算公式
//
//}
//此代码不效率，重复计算。
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(n>2)
	{
		c = a+b;
		a = b;
		b = c;
		n--;
	
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	//TDD-测试驱动开发的方式编写代码
	//
	
	ret = Fib(n);
	printf("ret = %d\n", ret);
	
	return 0;
}
/*TDD：测试驱动开发（Test-Driven Development）
测试驱动开发是敏捷开发中的一项核心实践和技术，也是一种设计方法论。
TDD的原理是在开发功能代码之前，先编写单元测试用例代码，测试代码确定需要编写什么产品代码。
TDD的基本思路就是通过测试来推动整个开发的进行，但测试驱动开发并不只是单纯的测试工作，
而是把需求分析，设计，质量控制量化的过程。
TDD首先考虑使用需求（对象、功能、过程、接口等），
主要是编写测试用例框架对功能的过程和接口进行设计，
而测试框架可以持续进行验证。

TDD 的定义和步骤看起来很简单：
需求被转化成一系列明确的测试例，然后我们撰写代码使测试依此通过，
最后重构使得增量代码和存量代码和平共处，
满足设计规范和原则（比如说 DRY，OCP，...）。
然后周而复始，不断迭代，直至整个项目完成。*/
