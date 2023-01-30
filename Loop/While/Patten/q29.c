#include<stdio.h>
void main()
{
    int i=1,a=0;
    while(i<=5)
    {
        int j=1;
        while(j<=i)
        {
            printf("%d\t",a+=2);
            j++;
        }
        printf("\n");
        i++;
    }
}