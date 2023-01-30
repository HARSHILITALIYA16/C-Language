#include<stdio.h>
void main()
{
    int a,b=0,c;
    string n="606";
    c=n;
    while(n>0)
    {
        a=n%10;
        b=(b*10)+a;
        n=n/10;
    }
    if(c==b)
    {
        printf("pelindrome number");
    }
    else
    {
        printf("not pelidrome number");
    }
}