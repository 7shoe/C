#include <stdio.h>

static char daytab[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},    // leap year
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},    // non-leap year
    };

/* isLeap : return if a given year is a leap year */
int isLeap(int year){
    if((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
        return 1;
    return 0;
}
/* day_of_year : set day from month & day */
int day_of_year(int year, int month, int day){
    int i, leap, sum;

    leap = isLeap(year);
    sum = 0;
    i = 0;

    while(i < month)
        sum += daytab[leap][i++];

    return sum + day;

}


int main(){


    printf("Day of the year: %d\n", day_of_year(2022, 8, 22));


} 