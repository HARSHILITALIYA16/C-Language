#include<stdio.h>
void main()
{
    int a=1,n=10,b;
    while(a<=n)
    {
        if(a%2==0)
        {
            b=a*a;
            printf("%d\n",b);

        }
        else
        {
            printf("%d\n",a);
        }
        
        a++;
        
    }
}