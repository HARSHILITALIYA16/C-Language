#include<stdio.h>
void main()
{
    int i,j,a=65,b=84;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(a<=74)
            {
                printf("%c ",a);
                a+=2;
            }
            else
            {
                printf("%c ",b);
                b+=2;
            }
        }
        
        if(a<=75)
       { a=a-9;
        printf("\n");}
        else
        {b=b-9;
        printf("\n");}
    }
}