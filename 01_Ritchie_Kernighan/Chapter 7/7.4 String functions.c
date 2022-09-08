#include <stdio.h>
#include <string.h>


int main(){

    // sprintf
    char name[100];
    char position[] = ", Buttler";
    int alfred_age = 66;
    int salary = 5000;

    sprintf(name, ", Age: %d, Salary: %d", alfred_age, salary);

    printf("Info: \n", name);

    

    return 0;
}