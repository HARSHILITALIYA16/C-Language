#include<stdio.h>
void main()
{
    int i=1;
    while(i<=5)
    {
        int j=1,a=1;
        while(j<=5)
        {
            int c=0,k=1;
            while(a%k==0)
            {
                c=1;
                k++;
            }
            if(c==2)
            {
            printf("%d",a);
            j++;
            }
            a++;
            j++;
        }
        printf("\n");
        i++;
    }
}