#include<stdio.h>
void main()
{
    int a=1,n=200;
    do{
        if(a%4==0)
        {printf("%d, ",a*a);}
        a++;
    }
    while(a<=n);

}