#include<stdio.h>
void main()
{
    int i,j,m,n;
   printf("enter size :");
    scanf("%d",&m);
    {
        n=m/2;
        n++;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(j==1&&i<=n ||  i==n ||j==n ||i==1&&j>=n || i==m&&j<=n || j==m&&i>=n)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
  /*  for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j==n|| i==n-1 && j<=n || j==m)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    */
}