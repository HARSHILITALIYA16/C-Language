#include<stdio.h>
void main()
{
    int i,a[100],lar;
    for(i=0;i<3;i++)
    {
        printf("enter value a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("value=a[%d]= %d\t",i,a[i]);
    }
}