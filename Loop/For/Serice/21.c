#include<stdio.h>
void main()
{
    int a,n=122;
    for(a=65;a<n;)
    {
        if(a<90)
        {
            printf("%c",a);
            a=a+34;
        }
        else
        {
            printf("%c",a);
            a=a-30;
        }
    }
}