#include<stdio.h>
void main()
{
    int a,b=0,c,n=500;
    c=n;
    do{
        a=n%10;
        b=(b*10)+a;
        n=n/10;
    }
    while(n>0);
    if(c==b)
    {
    printf("number is pelidrown");
    }
    else
    {
    printf("number is not pelidrown");
    }

}