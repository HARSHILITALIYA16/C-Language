#include<stdio.h>
void  main()
{
    int a=65,n=122;
    while(a<n)
    {
        if(a<90)
        {
        printf("%c\n",a);
        a=a+34;
        }
        else
        {
            printf("%c\n",a);
            a=a-30;
        }

    }
}