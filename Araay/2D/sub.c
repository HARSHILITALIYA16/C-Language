#include<stdio.h>
void main()
{
    int m[10][10],n[10][10],sub[10][10],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&n[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sub[i][j]=m[i][j]-n[i][j];
            printf("%d",sub[i][j]);
        }
        printf("\n");
    }

}