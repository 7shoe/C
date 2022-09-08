#include <stdio.h>
#include <string.h>


int main(){

    // sprintf
    char name[100] = "Alfred PennyWorth";
    char position[] = ", Buttler";
    int alfred_age = 66;
    int salary = 5000;

    sprintf(name, ", Age: %d, Salary: %d", alfred_age, salary);  // (!) name will be overwritten by the latter string

    printf("Info: \n%s", name);

    // memc

    

    return 0;
}