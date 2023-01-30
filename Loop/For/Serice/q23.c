#include<stdio.h>
void main()
{
    int a,b=1,n=5,c=0;
    for(a=1;b<=n;b++)
    {
        c=a*b;
        a=c;
    }
    printf("%d",c);
}