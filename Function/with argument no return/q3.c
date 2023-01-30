#include<stdio.h>
void mul(int,int);
void main()
{
    mul(10,20);
}
void mul(int a,int b)
{
    int c=a*b;
    printf("%d",c);
}