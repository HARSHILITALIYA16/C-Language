#include<stdio.h>
void main()
{
    int a=1,n=100;
    do{
        if(a%2==0)
        {
            printf("%d\t ",a);
        }
        a++;
    }
    while(a<=n);
}