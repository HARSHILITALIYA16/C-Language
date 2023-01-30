#include<stdio.h>
void main()
{
    int i=1;
    while(i<=10)
    {
        int j=1;
        while(j<=i)
        {
            printf("%d ",i);
            j+=2;
        }
        printf("\n");
        i+=2;
    }
}