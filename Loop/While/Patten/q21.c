#include<stdio.h>
void main()
{
    int i=1,a=1;
    while(i<=5)
    {
        int j=1;
        while(j<=5)
        {
            printf("%d\t",a);
            a+=2;
            j++;
        }
        printf("\n");
        i++;
    }
}