#include<stdio.h>
void main()
{
    char a[100]={"hello "},b[100]="world";
    int i,j;
    for( i=0;a[i]!=0;i++);
    {
    for( j=0;b[j]!=0;j++)
    {
      a[i]=b[j];
      i++; 
    }
   printf("%s",a);
   }
}