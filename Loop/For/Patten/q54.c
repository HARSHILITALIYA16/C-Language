#include<stdio.h>
void main()
{
    int i,j,a=4,b=4,c=2,d=6;
    {
        for(i=1;i<=4;i++,a--,b++)
        {
            for(j=1;j<=7;j++)
            {
                if(a==j || b==j)
                {
                printf("%d",i);
                }
               else
                {
                     printf(" ");
                }     
            }
            printf("\n");
          
        }
        for(i=3;i>0;i--,c++,d--)
        {
            for(j=1;j<=7;j++)
            {
                if(c==j || d==j)
                {
                    printf("%d",i);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}