#include<stdio.h>
void main()
{
    int i,j,s,n,m;
    scanf("%d",&n);
     m=n/2;
     m++;
    for(i=1;i<=m;i++)
    {
        for(j=i;j<=m-1;j++)
        {
            printf(" ");
        }
        for(s=1;s<=(i*2)-1;s++)
        {
            printf("%d",s);
        }
        printf("\n");
        
    }
    for(i=m-1;i>=1;i--)
    {
        for(j=m-1;j>=i;j--)
        {
            printf(" ");
        }
        for(s=1;s<=(i*2)-1;s++)
        {
            printf("%d",s);
        }
        printf("\n");
    }
}