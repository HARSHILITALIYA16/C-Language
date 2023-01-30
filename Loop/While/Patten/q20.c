#include<stdio.h>
void main()
{
    int i=1;
    while(i<=5)
    {
        int j=1;
        while(j<=5)
        {
            if(j%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("* ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}