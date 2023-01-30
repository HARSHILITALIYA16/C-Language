#include<stdio.h>
void main()
{
    int a=10,b=5,c=30;
    if(a<b)
    {
        if(a<c)
        {
            printf("A");
        }
        else
        {
            printf("c");
        }
    }
    else
    {
        if(b<c)
        {
            printf("B");
        }
        else
        {
            printf("c");
        }
    }
}