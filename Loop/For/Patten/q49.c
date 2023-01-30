#include<stdio.h>
void main()
{
    int i,j,a=11,b=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
        a=a-b;
        b++;
    }
}