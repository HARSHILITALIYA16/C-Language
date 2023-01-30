#include<stdio.h>
void main()
{
    int i,j,a=-2,n=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++,n+=2)
        {
           
            printf("%d ",n);
        
        }
        printf("\n");
        a+=2;
        n=n-a;
    }
}