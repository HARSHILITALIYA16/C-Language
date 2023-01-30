#include<stdio.h>
int divi(int,int);
void main()
{
    int a=divi(10,5);
    printf("%d",a);
}
int divi(int a,int b)
{
    int c=a/b;
    return c;
}