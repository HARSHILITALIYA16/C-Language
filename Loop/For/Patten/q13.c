#include<stdio.h>
void main()
{
    int i,j,a=5;
    for(i=1;j<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",a);
            a--;
        }
        printf("\n");
        a=a+i;

    }

}