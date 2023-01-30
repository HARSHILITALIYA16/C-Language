#include<stdio.h>
int main()
{
    int a=10,b=8,c=5,d=1;
    if(a<b&&a<c&&a<d)
    {
        printf("A");
    }
    else if(b<c&&b<d)
    {
        printf("B");
    }
    else if(c<d)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }

}