#include<stdio.h>
void main()
{
    int a[10][10],i,j,f=0,s=0;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(f<a[i][j])
                {
                    s=f;
                    f=a[i][j];
                }
                else if(s<a[i][j])
                {
                    s=a[i][j];
                }
            }
        }
        printf("first number =%d",f);
        printf("second number =%d",s);
}