#include<stdio.h>
void main()
{
    double salary = 5000,total;
    if(salary<=2500)
    {
        total=salary*0/100;
        printf("%.2f",total);
    }
    else if(salary>2500 && salary<=5000)
    {
        salary=salary-2500;
        total=salary*0.10;
        printf("tax = %.2f",total);
    }
    else if (salary>5000 && salary<=10000)
    {
        salary=salary-5000;
        total=salary*0.20;
        total=total+250;
        printf("tax = %.2f",total);
    }
    else if(salary>10000)
    {
        salary=salary-10000;
        total=salary*0.30;
        total=total+1250;
        printf("tax = %.2f",total);
    }
    else
        {
            printf("0");
        }
}