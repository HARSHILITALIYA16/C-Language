#include<stdio.h>
void main()
{
    int a=1,n=100;
    while(a<=n)
    {
        if(a%4==0)
        {
            printf("#");
        }
        else
        {
            printf("*");
        }
        a++;
    }
}