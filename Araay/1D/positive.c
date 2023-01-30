#include<stdio.h>
void main()
{
    int i,a[10];
    int p=0,n=0;
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=5;i++)
    {
        if(a[i]>=0)
        {
            p++;
        }
        else{
            n++;
        }
    }
    printf("positive number=%d",p);
    printf("negative number=%d",n);
}