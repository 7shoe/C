#include <stdio.h>



int main(){

    enum months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

    enum months currentMonth;
    currentMonth = AUG;

    printf("Current Month is the %d-th month of the year! ", currentMonth);


    return 0;
}