#include<stdio.h>
void main()
{
    int a[100],i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
       int c=0;
       for(j=0;j<5;j++)
       {
        if(i!=j)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
       }
       if(c==0)
       {
        printf("answer : %d\n",a[i]);
       }
    }
}