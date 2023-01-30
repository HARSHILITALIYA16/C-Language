#include<stdio.h>
void main()
{
 int a,b=0,n=10;
 for(a=1;a<=n;a+=2)
 {
    b=a+b;
    printf("%d\n",a);
 }
 printf("total=%d",b);
}