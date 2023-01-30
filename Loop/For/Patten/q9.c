#include<stdio.h>
void main()
{
    char i,j,a=65;
    for(i='A';i<=69;i++)
    {
        for(j='A';j<=69;j++)
        {
            printf("%c\t",a);
            a++;
        }
        printf("\n");
    }
}