#include<stdio.h>
void main()
{
    int a[10],i,j,min;

    for(i=0;i<10;i++)
    {
        printf("\n Enter a[%d]",i);
        scanf("%d",&a[i]);
        min=a[0];
    }
    for(i=0;i<10;i++)
    {
        printf("\t a[%d]: %d",i,a[i]);
    }
    for(i=1;i<10;i++)
    if(min>a[i])
    {
        min=a[i];
    }
    printf("\nminimum value is =%d",min);
}