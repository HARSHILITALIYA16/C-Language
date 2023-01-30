#include<stdio.h>
void main()
{
    int n=6,s=-6,i,j;
    for(i=1;i<=7;i++,n+=2,s+=2)
    {
        for(j=1;j<=7;j++)
        {
            if(i==j || i+n==j || i==j+s)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}