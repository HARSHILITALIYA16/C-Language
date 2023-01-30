#include<stdio.h>
void main()
{
    int a=1,b=0,n=4;
    for(a;a<=n;a++)
    {
        b=a+b;
        printf("%d\n",a);
    }
    printf("Total=%d",b);
}