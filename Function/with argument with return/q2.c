#include<stdio.h>
int sub(int,int);
void main()
{
    int a=sub(10,5);
    printf("%d",a);
}
int sub(int a,int b)
{
    int c=a-b;
    return c;
}