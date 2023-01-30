#include<stdio.h>
void main()
{
    int i,j,a;
    for(i=4;i>=1;i--)
    {    a=8;
        for(j=1;j<=8;j++)
        {
            if(j<=4)
            {
                if(i<j)
                printf("*");
                else
                printf("%d",j);
            }
            else
            {
                if(a>i)
                printf("*");
                else
                printf("%d",a);
            }
            a--;
        }
        printf("\n");
    }
}