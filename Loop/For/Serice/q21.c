#include<stdio.h>
void main()
{
    int a=65;
    for( a=65;a<=122;)
    {
        if(a<=90)
        {
            printf("%c\t",a);
            a+=34;
        }
        else
        {
            printf("%c\t",a);
            a-=30;
        }
    }
}