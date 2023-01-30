#include<stdio.h>
int fib(int);
void main()
{
    int a=5,i=0;
    for(int c=0;c<=a;c++)
    {
        printf("%d",fib(i));
        i++;
    }
}
int fib(int a)
{
    
    if(a==0)
    {
       return 0;
    }
    else if(a==1)
    {
        return 1;
    }
    else
    {
       return fib(a-1)+fib(a-2);
    }

}