#include<stdio.h>
void main()
{
    int i,j=1,k=2;
    for(i=1;i<=5;i++)
    {
        if(i%2==0)
          {k=2;}
          else
         { k=1;}
          for(j=1;j<=i;j++)
          {
  
            printf("%d ",k);
            k+=2;
          }
printf("\n");    
    }

}