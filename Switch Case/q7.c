#include<stdio.h>
void main()
{
    int x=100,y=5,a,s,m;
    double d;
    switch (4)
    {
        case 1:
        printf("addition=%d",a=x+y);
        break;

        case 2:
        printf("substaction =%d",s=x-y);
        break;

        case 3:
        printf("multiplication =%d",m=x*y);
        break;

        case 4:
        printf("division =%.2lf",d=x/y);
        break;

        default :
        printf("invalid");
        break;
    }
}