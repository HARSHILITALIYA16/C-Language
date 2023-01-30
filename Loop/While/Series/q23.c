#include<stdio.h>
void main()
{
    int a=1,n=5,b=1,c;
    while(b<=n)
    {   
        c=a*b;
        a=c;
        b++;
    }
    printf("%d\n",c);

}