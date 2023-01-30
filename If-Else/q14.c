#include<stdio.h>
void main()
{
    int  rollno=05,acc=92,stat=90,eco=65,ba=75,sp=90,total;
    double pr;
    printf("roll no=%d\n",rollno);
    total=acc+stat+eco+ba+sp;  
    printf("total=%d\n",total);
    pr=total/5;
    printf("pr=%.2f\n",pr);
    
    if(acc<33||stat<33||eco<33||ba<33||sp<33)   
    {
      printf("fai");  
    }
    else if (pr>81)
    {
    printf("first calss"); 
    }

    else if (pr>61 && pr<80)
{
    printf("second class");
}
else if (pr>41 && pr<60)
{
    printf("third class");
}
else
{
 printf("fail");
}
}