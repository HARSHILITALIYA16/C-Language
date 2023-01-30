#include<stdio.h>
struct cricket
{
    int player_id;
    char player_name[100];
    char team_name[100];
    double betting_average;
};
void main()
{
    struct cricket c1[100];
    for(int i=0;i<1;i++)
    {
        printf("----ENTER CRICKET PLAYER :-%d----\n",i+1);
        printf("PLAYER ID:-");
        scanf("%d",&c1[i].player_id);

        printf("\nPLAYER NAME :-");
        scanf("%s",&c1[i].player_name);

         printf("\nTEAM NAME :-");
        scanf("%s",&c1[i].team_name);

         printf("\nBETTING AVERAGE :-");
        scanf("%lf",&c1[i].betting_average);
    }
    for(int i=0;i<1;i++)
    {
        printf("\n**********************\n");
        printf("PLAYER ID :-%d\n",c1[i].player_id);
        printf("PLAYER NAME :-%s\n",c1[i].player_name);
        printf("TEAM NAME :-%s\n",c1[i].team_name);
        printf("BETTING AVERAGE :-%.2lf\n",c1[i].betting_average);
    }

}