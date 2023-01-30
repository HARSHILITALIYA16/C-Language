#include<stdio.h>
void main()
{
    int i=1,a=65,b=84;
    while(i<=4)
    {
        int j=1;
        while(j<=5)
        {
            if(a<=74)
            {
                printf("%c",a);
                a+=2;
            }
            else{
                printf("%c",b);
                b+=2;
            }
            j++;
        }
        if(a<=75)
        {
            a=a-9;
            printf("\n");
             i++;
        }
        else
        {
            b-=9;
            printf("\n");
             i++;
        }

    }
}