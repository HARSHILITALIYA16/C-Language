#include<stdio.h>
void main()
{
    int a,b=0,n=50,c;
    for(a=1;a<=n;)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",a);
    }
}