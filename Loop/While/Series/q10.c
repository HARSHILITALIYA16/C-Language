#include<stdio.h>
void main()
{
    int a=3520302,b=0;
    while(a!=0)
    {
        a=a/10;
        b++;
    }
    printf("%d",b);
}

 