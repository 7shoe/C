#include <stdio.h>


int isleapYear(int yyyy){
    if((yyyy % 4 == 0) && ((yyyy % 100 != 0) || (yyyy % 400 == 0))){
        return 1; 
    }
    return 0; 
    
}


int main(){

    printf("Some years...\n\n");

    printf("Year 2000. Was is a leap year? \t%d\n", isleapYear(2000));

    printf("Year 2003. Was is a leap year? \t%d\n", isleapYear(2003));

    printf("Year 2012. Was is a leap year? \t%d\n", isleapYear(2012));

    printf("Year 2014. Was is a leap year? \t%d\n", isleapYear(2014));

    printf("Year 2016. Was is a leap year? \t%d\n", isleapYear(2016));

    printf("Year 2024. Was is a leap year? \t%d\n", isleapYear(2024));

    printf("Year 2100. Will it be a leap year? \t%d\n", isleapYear(2100));

    printf("Year 2400. Will it be a leap year? \t%d\n", isleapYear(2400));




    return 0;
}