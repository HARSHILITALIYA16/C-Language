#include<stdio.h>
int mul();
void main()
{
    int a =mul();
    printf("%d",a);
}
int mul()
{
    int a=10,b=20;
    int c=a*b;
    return c;
}