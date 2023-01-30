#include<stdio.h>
void main()
{
    int i,j,a=0,b=1,c;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            c=a+b;
            a=b;
            b=c;
            printf("%d\t",a);
        }
        printf("\n");
    }
}
