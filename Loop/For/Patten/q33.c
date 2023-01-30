#include<stdio.h>
void main()
{
    int i,j,a=0;
    for(i=5;i>0;i--)
    {
        a++;
        for(j=5;j>0;j--)
        {
            if(j==a)
            printf("*");
            else
            printf("%d",j);
        }

        printf("\n");
    }
}