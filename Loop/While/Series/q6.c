#include<stdio.h>
void main()
{
    int a=1,n=5,c;
    while(a<=n)
    {
        c=c+a;
        printf("%d\n",a);
        a++;
    }

    printf("total=%d",c);

}