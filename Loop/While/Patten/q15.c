#include<stdio.h>
void main()
{
    int i=2;
    while(i<=10)
    {
        int j=2;
        while(j<=i)
        {
            printf("%d ",j);
            j+=2;
        }
        printf("\n");
        i+=2;
    }
}