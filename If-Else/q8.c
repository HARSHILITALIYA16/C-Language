#include<stdio.h>
void main()
{
    double salary=12000,HRA,DA,gross;
    if(salary<=5000)
    {
        HRA=salary*0.08;
        DA=salary*0.2;
    }
    else if(salary>5000 && salary<=10000)
    {
        HRA=salary*0.12;
        DA=salary*0.30;
    }
    else if(salary>10000 && salary<=15000)
    {
         HRA=salary*0.15;
        DA=salary*0.40;
    }
    else
    {
         HRA=salary*0.20;
        DA=salary*0.50;
    }
    gross=salary+HRA+DA;
    {
        printf("gross salary : =%.2f",gross);
    }
}