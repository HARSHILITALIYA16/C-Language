#include<stdio.h>
void main()
{
    int a=1010;
        if(a<=9 || a%11==0 || a%101==0 || a%1001==0 || a%10001==0 || a%100001==0 || a%1000001==0 )
        {
            printf("teriton number");
        }
        else
        {
            printf("not teriton number");
        }

}