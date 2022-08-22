#include <stdio.h>


/*  month_name : returns month's name for a given month number  */
char *month_name(int n){
    static char *name[] = {
        "Illegal Input", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    return (n > 0 && n <= 12) ? name[n] : name[0];
}


int main(){

    printf("Name of the %d-th month: %s\n", 12, month_name(12));
    printf("Name of the %d-th month: %s\n", 7, month_name(7));
    printf("Name of the %d-th month: %s\n", 13, month_name(13));


    return 0;
}