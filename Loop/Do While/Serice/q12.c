#include<stdio.h>
void main()
{
    int a=1,n=20;
    do{
        if(a%4==0)
        printf("#");
        else
        printf("*");
        a++;
    }
    while(a<=n);
}