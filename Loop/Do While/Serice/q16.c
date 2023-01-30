#include<stdio.h>
void main()
{
    int a=1,b=1,c=1,n=100;
    do{
        printf("%d\n",c);
        a=a*2;
        b++;
        c=a*b;
    }
    while(a<=n);
}