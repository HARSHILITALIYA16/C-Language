#include<stdio.h>
void main()
{
    int a=0,i=2,n=98;
    for(i=2;i<=n/2;i++)
    {
    if(n==0 || n==1)
     a=1;
    
        if(n%i==0)
        {
        a=1;
        }
    }
    if(a==0)
    {
        printf("value is prime number");
    }
    else
    {
        printf("value is not prime number");
    }

}