#include<stdio.h>
void prime();
void main()
{
    prime();
}
void prime()
{
    int i,j,a=1,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;)
        {
             int c=0;
            for(k=1;k<=a;k++)
            {
                if(a%k==0)
                {
                    c++;
                }
            }    
                if(c==2)
                {
                    printf("%d ",a);
                    j++;
                }
                a++;
        }
         printf("\n");
    }
}