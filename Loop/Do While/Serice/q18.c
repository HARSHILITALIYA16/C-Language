#include<stdio.h>
void main()
{
    double a=0.5,b=0.5,n=50;
    do{
        printf("%.1f ,",a);
        a=a+b;
        b++;
    }
    while(a<=n);
}