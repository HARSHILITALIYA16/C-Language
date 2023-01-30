#include<stdio.h>
void main()
{
    float a=-0.5,b=1;
    while(a<=10)
    {
        
        b=b+a;
        printf("%.1f  ",b);
        a++;
    }
}