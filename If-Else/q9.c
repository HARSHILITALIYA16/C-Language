#include<stdio.h>
int main()
{
    char n='b',c,s;
    if(n<=90)
    {
        s=n+32;
        printf("%c",s);
    }
    else
    {
        c=n-32;
        printf("%c",c);
    }
}