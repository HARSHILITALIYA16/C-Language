#include <stdio.h>
int main()
{
    int d = 600, year, month, week, day;

    year = d / 365;
    printf("year=%d\n", year);
    d = d - year * 365;
    month = d / 30;
    printf("month=%d\n", month);
    d = d - month * 30;
    week = d / 7;
    printf("week=%d\n", week);
    day = d - week * 7;
    printf("day=%d", day);
}
