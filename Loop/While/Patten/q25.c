#include<stdio.h>
void main()
{
    int i=1,a=1,n=-1;
    while(i<=5)
    {
        int j=1;
        while(j<=i)
        {
           printf("%d ",a);
           j++;
           a++;
        }
        printf("\n");
        i++;
        n++;
        a=a-n;
    }
}