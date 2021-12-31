#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>                     
int main()
{
    int a=0, b=0 ,c=0;
    scanf("%d%d%d", &a, &b, &c);//3个输入，三个%d，少无法完成。
    if(a >= 0 && a <= 100 && b>=0 && b<=100 && c>=0 && c<=100)
    {
    printf("score1=%d,score2=%d,score3=%d", a, b, c);
        
    }
    return 0;
}
