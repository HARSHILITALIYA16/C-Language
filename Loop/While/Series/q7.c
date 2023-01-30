#include<stdio.h>
void main()
{
    int a=1,n=10,c;
    while(a<=n)
    {
        if(a%2==0)
        {
            c=c+a;
            printf("%d\n",a);
        }
         a=a+1;

    }
     printf("total = %d",c);
}