#include<stdio.h>
void main()
{
    int a=1,n=100,b=1;
    while(b<n)
    {
         b=a*a;
        printf("%d\n",b);
       
        a++;
    }
}