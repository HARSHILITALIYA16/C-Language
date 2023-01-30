#include<stdio.h>
void main()
{
    int i,j,a=2,k;
    for(i=3;i<=11;i+=2)
    {
        for(k=i;k<11;k+=2)
        {
            printf(" ");
        }
        for(j=1;j<i;j++)
        {
            if(j==a)
            {
                printf(" * ");
            }
            if(j<a)
            {
                printf("(");
            }
            else
            {
                printf(")");
            }
        }
        printf("\n");
        a++;
    }
}