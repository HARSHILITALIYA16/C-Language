#include<stdio.h>
void main()
{
    char a,n='Z';
    for(a='A';a<=n;a++)
    {
        if(a%2!=0)
        {
            printf("%c\t",a);
        }
    }
}