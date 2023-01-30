#include<stdio.h>
void main()
{
    
    int a[100],i,temp,j;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }    
    }
    for(int k=0;k<3;k++)
    {
        printf(" \t %d",a[k]);
    }
}