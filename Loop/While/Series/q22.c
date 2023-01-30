#include<stdio.h>
void main()
{
    int a=0,n=10,b=1,c=0;
     printf("%d\n",a);
    printf("%d\n",b);
    while(a<=n)
    { 
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",b);
    }
   
}