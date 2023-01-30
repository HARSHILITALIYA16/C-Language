#include<stdio.h>
int patten();
void abc();
void main()
{
   int a= patten();
   for(i=0;i<5;i++)

  { printf("%d",a[i]);}
    abc();
}
 int patten()

{ 
   int i,j;
   for(i=1;i<=5;i++)
   {
    for(j=1;j<=i;j++)
    {
        int c=j;
        return c;
    }
    printf("\n");
   }
   printf("\n");
}
void abc()
{
    int i,j,m=65,n=66;
    for(i=1;i<=4;i++)
    {
       for(j=1;j<=5;j++)
       {
        if(i%2==1)
        {
          
            printf("%c ",m);
              m+=2;
        }
        else{
            printf("%c ",n);
            n+=2;
        }
       }
       printf("\n");
    }

}
