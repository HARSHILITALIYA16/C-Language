#include<stdio.h>
void main()
{
    int i,j,a=5;
    for(i=5;i>0;i--)
    {
        a=a-i;
        for(j=1;j<=i;j++)
        {
            a++;
            printf("%d",a);
        }
        printf("\n");
    }
}