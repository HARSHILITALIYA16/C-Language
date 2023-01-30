#include<stdio.h>
int sum();
void main()
{
    int a=sum();
    printf("%d",a);
}
int sum()
{
    int a=10,b=20;
    int c=a+b;
    return c;
}