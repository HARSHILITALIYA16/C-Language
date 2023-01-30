#include<stdio.h>
void main()
{
    int a=0;
    switch(a>=1)
    {
        case 1:
        printf("positive");
        break;
        case 2:

        switch(a<0){
        case 1:
        printf("negative");
        break;
        case 0:
        printf("Zero");
        break;
        }
    }
}