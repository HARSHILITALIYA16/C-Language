#include<stdio.h>
void main()
{
    char a[100],i,max=0;
    for(i=0;i<3;i++)
    {
        printf("enter value=a[%d]",i);
        scanf("%d",&a[i]);

        max=a[0]; 
    }
    for(i=1;i<3;i++)
    {
        if(max<a[i])
        {
        max=a[i];
        }

    }
    printf(" maximum value is =%d",max);
 

}