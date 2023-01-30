#include<stdio.h>
void main()
{
  int a=65,n=122;
    do{
        if(a<=90)
        {
            printf("%c\t",a);
            a=a+34;
        }
        else
        {
            printf("%c\t",a);
            a=a-30;
        }
    }
    while(a<=n);
}