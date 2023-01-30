#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=(i*2)-1;j++)
        {
            if(j%2==0)
            printf("*");
            else
            printf("%d",i);
        }
        printf("\n");
    }
}