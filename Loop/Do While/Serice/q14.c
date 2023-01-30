#include<stdio.h>
void main()
{
    int a=1,n=10,b;
    do{
        b=a*a;
        printf("%d\n",b);
        a++;
    }
    while(a<=n);
}