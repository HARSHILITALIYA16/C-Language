#include<stdio.h>
void main()
{
    int a=50,b=30;
    switch(a>b)
    {
        case 1:
        printf("a=%d",a);
        break;

        default :
        printf("b=%d",b);
        break;
    }
}