#include<stdio.h>
void main()
{
    int a[10][10],i,j,c=0,k,b[10];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d",a[i][j]); 
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        
        for(j=0;j<=i;j++)
        {
            b[k]==a[i][j];
        }
        i=0;
        c=0;
        for(i=0;i<2;i++)
        {
           
           for(j=0;j<2;j++)
           {
             if(i!=j)
               { 
                    if(b[k]==a[i][j])
                    {
                     c++;
                    }
                }
           }
          
        }
         if(c==0)
           {
            printf("answer : %d\n",a[k][k]);
           }
         
    }
}