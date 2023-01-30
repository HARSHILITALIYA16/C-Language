#include<stdio.h>
void main()
{
    int x,y;
    printf("your value x :");
    scanf("%d",&x);
    printf("your value y :");
    scanf("%d",&y);
    
     if(x<2000 || x>3000)    
    {
        printf("X\n");
    }

     if(y>100 && y<500)
    {
        printf("Y");
    }
    
}