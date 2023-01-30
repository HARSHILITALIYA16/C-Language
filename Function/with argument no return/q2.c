#include<stdio.h>
void sub(int,int);
void main()
{
    sub(10,5);
}
void sub(int a,int b)
{
   int c=a-b;
   printf("%d",c);
}