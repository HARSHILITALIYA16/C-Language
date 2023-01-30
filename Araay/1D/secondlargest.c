#include<stdio.h>
int main()
{
    int a[100],i,f=0,s=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<3;i++)
    {
        if(f<a[i])
        {
            s=f;
            f=a[i];
        }
       else if(s<a[i])
        {
            s=a[i];
        }
        
     
    }
    printf("first=%d",f);
    printf("second=%d",s);

}
