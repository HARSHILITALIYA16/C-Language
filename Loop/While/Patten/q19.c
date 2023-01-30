#include<stdio.h>
void main()
{
    int i=1;
    while(i<=5)
    {
        int j=1;
        while(j<=10)
        {
            printf("%d ",j);
            j+=2;
        }
        printf("\n");
        i++;
    }

}