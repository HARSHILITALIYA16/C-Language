#include<stdio.h>
void main()
{
    double unit=350,Rs,tex;
    if(unit<=100)
    {
        Rs=unit*0.60;
        Rs=Rs+50;
        printf("rs=%.2f",Rs);
    }
    else if(unit>100 && unit<=300)
    {
         unit=unit-100;
         Rs=unit*0.80;
         Rs=Rs+110;      
         printf("rs=%.2f",Rs);
    }
    else if(unit>300)
    {
        unit=unit-300;
        Rs=unit*0.90;
        Rs=Rs+50+220;
        if(Rs>300)
        {
            tex=Rs*0.15;
            Rs=Rs+tex;
            printf("rs=%.2f",Rs);
        }
        else
        {
            printf("rs=%.2f,Rs");
        }
    }
    
}