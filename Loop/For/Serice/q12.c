#include<stdio.h>
void main()
{
    int a,n=10;
    for(a=1;a<=n;a++)
    {
        if(a%4==0)
        {
            printf("#");
        }
        else
        {
            printf("*");
        }
    }
}