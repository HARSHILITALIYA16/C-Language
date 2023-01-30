#include<stdio.h>
void odd();
void main()
{
    odd();
}
void odd()
{    int a;
    scanf("%d",&a);
    if(a%2==1)
    {
        printf("odd number");
    }
    else
    {
        printf("even number");
    }

}