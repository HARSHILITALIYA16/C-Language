#include<stdio.h>
void main()
{
    int i=1;
    while(i<=5)
    {
        int j=1,a=5;
        while(j<=i)
        {
            printf("%d ",a);
            a--;
            j++;
        }
        printf("\n");
        i++;
    }
}