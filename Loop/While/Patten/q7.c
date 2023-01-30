#include<stdio.h>
void main()
{
    int i=1,a=11;
    while(i<=5)
    {
        int j=1;
        while(j<=5)
        {
            printf("%d\t",a);
            a++;
            j++;
        }
        printf("\n");
        i++;
        a=a+5;
    }
}