#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=5;i>0;i--)
    {
        k=i;
        for(j=1;j<=5;j++)
        {
            if(k<=5)
            {
                printf("%d",k);
            }
            else{
                printf("5");
            }
            k++;
        }
        printf("\n");
    }
}