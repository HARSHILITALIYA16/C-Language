#include<stdio.h>
void main()
{
    int i=5;
    while(i>0)
    {
        int j=5;
        while(j>0)
        {
            printf("%d ",j);
            j--;
        }
        printf("\n");
        i--;
    }
}