#include<stdio.h>
int main()
{
    char b='H';
    double gstno=526598253065014,incomeno =10,date=20,price=500,quontity=5,gst=18,total,a;
    total=price*quontity;
    gst=total*0.18;-
    printf("customber name \t\tgst no\t\t\tincome no\tdate\t\tprice\t\tquontity\tgst\t\ttotal\n");
    printf("%c\t\t\t%.2f\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f",b,gstno,incomeno,date,price,quontity,gst,total);
}