#include<stdio.h>
void main()
{
    int i,a[100];
    for(i=0;i<3;i++)
    {
        printf("enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("\na[%d] = %d  ",i,a[i]);
       
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>50)
        {
            printf("maximum number =%d",a[i]);
        }
    }
}