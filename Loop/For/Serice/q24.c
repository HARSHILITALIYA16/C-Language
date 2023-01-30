#include<stdio.h>
void main()
{
    int a=1,b=0,c,n=100;
    c=n;
    for(n=100;n>0;)
    {
        a=n%10;
        b=(b*10)+a;
        n=n/10;
    }
    if(c==b)
    {
        printf("pelidrown number");
    }
    else{
        printf("not pelidrown number");
    }
}