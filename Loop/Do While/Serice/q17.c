#include<stdio.h>
void main()
{
    int a=65,b=90;
    do{
        if(a%2!=0)
        {
            printf("%c\n",a);
        }
        a++;
    }
    while(a<=b);
}