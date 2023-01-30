#include<stdio.h>
void main()
{
    int i,j,n=25,m;
    m=n/2;
    m++;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==m || i==m || i+j==m+1 || j-i==m-1 || i-j==m-1 || i+j==n+m)
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