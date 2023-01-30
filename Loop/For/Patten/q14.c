#include<stdio.h>
void main()
{
    int i,j,a=5,n=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;a++,j++)
        {
            printf("%d ",a);
        }
           printf("\n");
           n++;
           a=a-n;
    } 
}