#include<stdio.h>
void main()
{
    int i,j,k,n=9,m=9;
    for(i=1;i<=m-7;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1)
            {
                if(j==1 || j==m ||m-6<j&&j<m-2)
                printf("  ");
                else
                printf("* ");
            }
            else if(m-5<j && j<m-3)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }

        }
        printf("\n");
    }
    for(i=1;i<=n;i+=2)
    {
        for(k=i;k>1;k-=2)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");

    }
}