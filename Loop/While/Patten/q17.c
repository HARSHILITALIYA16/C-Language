#include<stdio.h>
void main()
{
    int i=1,a=1,n=-2;
    while(i<=5)
    {
        int j=1;
        while(j<=i)
        {
            printf("%d ",a);
            a+=2;
            j++;
        }
        printf("\n");
        n+=2;
        a=a-n;
        i++;
    }
}