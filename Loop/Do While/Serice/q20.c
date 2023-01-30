#include<stdio.h>
void main()
{
    int a=0,i=2,n=100;
    if(n==0 || n==1)
    a=1;
    do{
        if(n%i==0)
        {a=1;}
        i++;
    }
    while(i<=n/2);
    if(a==0)
    printf("primr number");
    else
    printf("not prime number");


}