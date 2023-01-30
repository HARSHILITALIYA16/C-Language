#include<stdio.h>
int main()
{
    int a=1,n;
    printf("n :");
    scanf("%d",&n);
         do
        {
            printf("%d\n",a);
            a++;
        }
        while(a<=n);
}