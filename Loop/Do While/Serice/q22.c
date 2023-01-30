#include<stdio.h>
void main()
{
    int a=1,b=0,c,n=50;
    do{
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",a);
    }
    while(a<=n);
}