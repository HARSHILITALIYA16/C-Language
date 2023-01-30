#include<stdio.h>
void main()
{
    int a=3,b=1,c=4,d=2;
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("A");
            }
            else
            {
                printf("D");

            }
        }
        else
        {
            if(c>d)
            {
             printf("C");
            }
            else
            {
            printf("D");
            }
            
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("B");
            }
            else
            {
                printf("d");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c");

            }
            else
            {
                printf("D");
            }
        }
    
        
        
    }
}

