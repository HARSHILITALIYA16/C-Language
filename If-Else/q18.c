#include<stdio.h>
int main()
{
    int cost,sell,p;
    printf("cost price :");
    scanf("%d",&cost);
    printf("sell price : ");
    scanf("%d",&sell);
    
    p=sell-cost;
    if(p>0)
    {
        printf("profit :=%d",p);
    }
    else
    {
        printf("loss :=%d",p);
    }
}