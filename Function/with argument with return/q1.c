#include<stdio.h>
int sum(int,int);
void main()
{
    int a=sum(10,20);
    printf("%d",a);
}
int sum(int a,int b)
{
    int c=a+b;
    return c;
}    