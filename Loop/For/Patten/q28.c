#include<stdio.h>
void main()
{
    int i,j;
    for(i=2;i<=10;i+=2)
    {
        for(j=2;j<=10;j+=2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}