#include<stdio.h>
void main()
{
    int i,a[100],b=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        b+=a[i];
    }
    printf("%d",b);
}