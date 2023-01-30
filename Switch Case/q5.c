#include<stdio.h>
void main()
{
    int a=6;
    switch(a%2==0)
    {
        case 1:
        printf("%d is even number",a);
        break;

        default :
        printf("%d is odd number",a);
        break;
    }
}