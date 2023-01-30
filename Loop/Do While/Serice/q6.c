#include<stdio.h>
void main()
{
    int a=1,b=0,n=10;
    do{
        b=a+b;
        a++;
    }
    while(a<=n);
           printf("%d",b);
}