#include<stdio.h>
void main ()
{
    int Rs=198578,Rs2000,Rs500,Rs200,Rs100,Rs50,Rs20,Rs10,Rs5,Rs1 ;
    Rs2000=Rs/2000 ;
    printf("Rs2000=%d",Rs2000);
    Rs = Rs-Rs2000*2000 ;
    Rs500=Rs/500 ;
    printf("\nRs500=%d",Rs500);
    Rs = Rs-Rs500*500 ;
    Rs200=Rs/200 ;
    printf("\nRs200=%d",Rs200);
    Rs = Rs-Rs200*200 ; 
    Rs100=Rs/100 ;
    printf("\nRs100=%d",Rs100);
    Rs = Rs-Rs100*100 ;
    Rs50=Rs/50 ;
    printf("\nRs50=%d",Rs50);
    Rs = Rs-Rs50*50 ;
    Rs20=Rs/20 ;
    printf("\nRs20=%d",Rs20);
    Rs = Rs-Rs20*20 ;
    Rs10=Rs/10 ;
    printf("\nRs10=%d",Rs10);
    Rs = Rs-Rs10*10 ;
    Rs5=Rs/5 ;
    printf("\nRs5=%d",Rs5);
    Rs = Rs-Rs5*5 ;
    Rs1=Rs5/1 ;
    printf("\nRs1=%d",Rs/1);

}