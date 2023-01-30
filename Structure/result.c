#include<stdio.h>
struct student
{
    int student_id;
    char student_name[100];
    int mark1,mark2,mark3;
};
void main()
{
    struct student s1[100];
    int total;
    double pr[100];
    int n;
    int temp;
    printf("ENTER YOUR STUDENT DETAIL :-");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("----STUDENT DETAILS:-%d----\n",i+1);
        
        printf("\nStudent id:-");
        scanf("%d",&s1[i].student_id);

        printf("Student name:-");
        scanf("%s",&s1[i].student_name);
    
        printf("mark1:-");
        scanf("%d",&s1[i].mark1);
        
        printf("mark2:-");
        scanf("%d",&s1[i].mark2);

        printf("mark3:-");
        scanf("%d",&s1[i].mark3);
    }
    
    for(int i=0;i<n;i++)
    {
        //printf("*********************************      \n");
        //printf("STUDENT_ID:-%d\n",s1[i].student_id);
        //printf("STUDENT NAME:-%s\n",s1[i].student_name);
        //printf("MARKS 1:-%d\n",s1[i].mark1);
        //printf("MARKS 2:-%d\n",s1[i].mark2);
        //printf("MARKS 3:-%d\n",s1[i].mark3);
        total=s1[i].mark1+s1[i].mark2+s1[i].mark3;
        //printf("TOTAL:- %d\n",total);
        pr[i]=total/3;
        //printf("PERCENTAGE=%.2lf\n",pr[i]);
        if(s1[i].mark1<33 || s1[i].mark2<33 || s1[i].mark3<33)
        {
            printf("Fail");
        }
        else if(80<pr[i])
        {
          printf("A grade");
        }
        else if(60<pr[i])
        {
            printf("B grade");
        }
        else if(40<pr[i])
        {
            printf("C grade");
        }
        else
        {
            printf("Fail");
        }
        printf("\n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(pr[i].pr>pr[j].pr)
            {
               temp=pr[i];
               pr[i]=pr[j];
               pr[j]=temp;
            }
        }
    }
    }
   /* for(int i=0;i<n;i++)
    {
        pr[i]=s1[i].mark1+s1[i].mark2+s1[i].mark3/3;
    }*/
    printf("\n Dessending : ");
    for(int i=0;i<n;i++)
    {
        printf("*********************************      \n");
        printf("STUDENT_ID:-%d\n",s1[i].student_id);
        printf("STUDENT NAME:-%s\n",s1[i].student_name);
        printf("MARKS 1:-%d\n",s1[i].mark1);
        printf("MARKS 2:-%d\n",s1[i].mark2);
        printf("MARKS 3:-%d\n",s1[i].mark3);
        //total=s1[i].mark1+s1[i].mark2+s1[i].mark3;
        printf("TOTAL:- %d\n",total);
        //pr[i]=total/3;
        printf("PERCENTAGE=%.2lf\n",pr[i]);
    }
}