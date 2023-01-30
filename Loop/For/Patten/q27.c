#include<stdio.h>
void main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
    for(j=1;j<=5;)
    {
        int c=0;
        for(int k=1;k<=a;k++)
        {
         if(a%k==0)
         {
            c++;
         }
        }
        if(c==2)
        {
            printf("%d ",a);
            j++;
        }
        a++;
    }
        printf("\n");
    
    }
} 