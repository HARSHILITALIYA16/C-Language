#include<stdio.h>
void main()
{
    int a,b=0,n=30;
    for(a=1;a<=n;a++)
    {
        if(a%2==0)
        {printf("%d\t",a*a);}
        else{
            printf("%d\t",a);
        }
    }
}