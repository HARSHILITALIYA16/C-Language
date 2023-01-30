 #include<stdio.h>
 void main()
 {
    int a=5,b=1,n=10;
    do{
        printf("%d*%d=%d\n",a,b,a*b);
        b++;
    }
    while(b<=n);
 }