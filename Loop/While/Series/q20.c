#include<stdio.h>
void main()
{
    int a=0,i=2,n=0;
    if(n==0 || n==1)
     a=1;
     while(i<=n/2)
     {
        if(n%i==0)
        {
           a=1;
        }
        i++;
     }
     if(a==0)
     {
         printf("prime");
     }
     else
     {
         printf("not prime");
     }
}
