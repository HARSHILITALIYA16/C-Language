#include<stdio.h>
void main()
{
   int a=1,n=20;
   do{
    if(a%2==0)
    printf("1");
    else
    printf("0");
    a++;
   }
   while(a<=n);

}