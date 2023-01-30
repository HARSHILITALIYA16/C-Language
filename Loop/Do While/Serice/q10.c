#include<stdio.h>
void main()
{
    int a=5000,b=0;
    do{
        a=a/10;
        b++;
    }
    while(a!=0);
    printf("%d",b);
}