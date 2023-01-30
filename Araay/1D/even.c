#include<stdio.h>
void main()
{
    int c=0,b=0,i,a[100];
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=10; i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else
        {
            b++;
        }
    }
    printf("even number =%d\n",c);
    printf("odd number =%d",b);

}