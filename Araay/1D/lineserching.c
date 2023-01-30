#include<stdio.h>
void main()
{
    int a[100]={1,1,2,2,3},i,j=0,b;
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        if(j==0)
        {
            if(b==a[i])
            {
              printf("a[%d]",i);
              j++;                     //break;
            }
        }
    }


}