#include<stdio.h>
void main()
{
    int a=1,n=50;
    do{
        if(a%2==0)
        {
            printf("%d\n",a*a);
        }
        else{
            printf("%d\n",a);
        }
        a++;
    }
    while(a<=n);
}