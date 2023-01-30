#include<stdio.h>
void main()
{
   int  a=1,b=1,c,n=5;
    do{
        c=a*b;
        a=c;
        b++;
    }
    while (b<=n);
  printf("%d",c);
}