#include<stdio.h>
int fec(int);
void main()
{
    int a=5;
    printf("%d",fec(a));
}
int fec(int a)
{
    if(a>1)
    {
        return a*fec(a-1);
    }
}