#include<stdio.h>
#include<string.h>
void main()
{
    char i,j,a[100]={'M','B','C','D','E'},len;
   // printf("enter your name : ");
  /*  for(i=1;i<=5;i++)
    {
    scanf("%c",&a[i]);
    } */
    len =strlen(a);
    for(i=0;i<=len;)
    {

      if(a[i]=='A')
        {
            for(i=1;i<=7;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(i>1&&j==1 || i>1&&j==5 || i==1&&j>1&&j<5 || i==4&&j>1&&j<5)
                    {
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("\n");   
            }
        }
    
        else if(a[i]=='B')
        {
            for(i=1;i<=7;i++)
            {
                for(j=1;j<=5;j++)
                {
                   if(j==1 || i==1&&j<=4 || i==4&&j<=4 || i==7&&j<5 ||j==5)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='C')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(j==1 || i==1 || i==5)
                    {
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
       else if(a[i]=='D')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(j==1 || i==1&&j<5 || j==5 || i==5&&j<5)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='E')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(j==1 || i==1 || i==3 || i==5)
                    {
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
         if(a[i]=='F')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(j==1 || i==1 || i==3&&j<5)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='G')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(i==1 || j==1 || i==5&&j<5 || j==4&&i>=3 ||i==3&&j==5)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='H')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(i==3 || j==1 || j==5)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='I')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(j==3 || i==1 || i==5)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='J')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(i==1 ||i<5&&j==5 || i==5&&j>1&&j<5 || i==4&&j==2)
                    {
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='K')
        {
            for(i=1;i<=7;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(j==1 || i+j==6 || i-j==2 )
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='L')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(j==1 || i==5)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='M')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=10;j++)
                {
                    if(j==1 || i==1 || j==5 || j==10)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='N')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    if(j==1 || i==j&&i<5 || j==4&&i<5)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            } 
        }
        else if(a[i]=='O')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=6;j++)
                {
                    if(i==1&&j<5&&j>1 ||j==1&&i<5&&i>1 || i==5&&j<5&&j>1 || j==6&&i<5&&i>1 )
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else if(a[i]=='P')
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=4;j++)
                {
                    if(j==1 || i==1 ||j==4&&i<=3 || i==3 )
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
    
    }
}