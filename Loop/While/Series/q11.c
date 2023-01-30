#include<stdio.h>
void main()
{
    int a=1,n=1000;
    while(a<=n)
    {
        if(a%2==0)
        {
            printf("1");
        }
        else{
            printf("0");
        }
        a++;
    }
    
}