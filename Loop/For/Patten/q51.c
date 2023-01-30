#include<stdio.h>
void main()
{
    int a,b,c,d=1,e=5;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=e-1;b++)
        {
            printf(" ");
        }
        for(c=1;c<=(2*a)-1;c++)
        {
            printf("%d",d);
            d++;
        }
        e--;
        printf("\n");
    }
}