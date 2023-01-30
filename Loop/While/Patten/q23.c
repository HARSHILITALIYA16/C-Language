#include<stdio.h>
void main()
{
    int i=1,a=1;
    while(i<=7)
    {
        int j=1;
        while(j<=5)
        {
            if(a%4==0)
            printf("#");
            else
            printf("*");
             a++;
            j++;
        }
        printf("\n");
         i++;
       
    }
    
}