#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//结构体
//char int doublie  ...
//人 = 3
//书 - 复杂对象
//名字 + 身高 +年龄 + 身份证号码+....

//创建一个结构体类型
struct Book   //例：定义一本书
{
	char name[20];	//定义名字  C语言程序设计
	short price;	//定义一本书的价格  55

};		//；号不能少，表示结束类型定义
int main ()
{
	//利用结构体类型-创建一个结构体变量
	struct Book b1 = {"C语言程序设计",55};
	strcpy (b1.name,"C++");	//	strcpy -string copy -字符串拷贝-库函数- 需要头文件<string.h>  字符串类型操作更改需要用strcpy

	printf("%s\n",b1.name);
	//指针类型的结构体
	//struct Book* pb = &b1;

	//printf("%s\n",pb ->name);	//  ->为指针标识
	//printf("%d\n",pb->price);

	//printf("书名：%s\n",(*pb).name);
	//printf("价格：%d元\n",(*pb).price);
	//printf("书名:%s\n",b1.name);
	//printf("价格:%d元\n",b1.price);

	//b1.price = 15; //修改结构体变量

	//printf("修改后的价格:%d元\n",b1.price);

	return 0;
}