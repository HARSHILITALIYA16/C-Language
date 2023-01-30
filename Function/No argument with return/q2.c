#include<stdio.h>
int sub();
void main()
{
    int a =sub();
    printf("%d",a);
}
int sub()
{
    int a=20,b=10;
    int c=a-b;
    return c;
}