#include<stdio.h>
int prim(int,int);
int main()
{
    int n=97,i=0;
    if( prim(n,2)==0)
    {
      printf("prime number"); 
    }
    else
    {
        printf("not primenumber");
    }
}
int prim(int n,int i)
{
    if(n==i)
    {
       return 0;
    }
    else if(n%i==0)
    {
       return 1;
    }
    else{
       return prim(n,i+1);
    
    }

}