#include<stdio.h>
void main()
{
    int a=1,n=100,b=1;
    while(b<=n)
    {
           if(a%4==0)
           {
            b=a*a;
            printf("%d\n",b);
           }
           a++;
    }
}