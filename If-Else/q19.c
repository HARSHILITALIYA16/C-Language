#include<stdio.h>
int main()
{
    int a,b,remainder;
    double div;
    printf("a :");
    scanf("%d",&a);
    printf("b :");
    scanf("%d",&b);
    div=a/b;
    remainder=a%b;
       printf("division : %lf\n",div);
        printf("remainder : %d",remainder);
}