#include<stdio.h>
void main()
{
    int i,j,a=5;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
           if(i<=3)
           {
            printf("%d ",i);
           }
           else{
            printf("%d ",a);
           }
        }
        printf("\n");
        a--;
       
    }
}