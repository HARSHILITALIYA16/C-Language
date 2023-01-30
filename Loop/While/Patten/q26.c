#include<stdio.h>
void main()
{
    int i=1,a=0,b=1,c;
    while(i<=5)
    {
        int j=1;
        while(j<=5)
        {
            printf("%d\t",b);
            c=a+b;
            a=b;
            b=c;
            j++;
        }
        printf("\n");
        i++;
    }

}