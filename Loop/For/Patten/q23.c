#include<stdio.h>
void main()
{
int i,j,a=1;
for(i=1;i<=7;i++)
{
    for(j=1;j<=5;j++,a++)
    {
        if(a%4==0)
        {
            printf("#");
        }
        else{
            printf("*");
        }
    }
    printf("\n");
}
}