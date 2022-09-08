#include <stdio.h>
#include <string.h>


int main(){

    // sprintf
    char name[100] = "Alfred PennyWorth";
    char position[] = ", Buttler";
    int alfred_age = 66;
    int salary = 5000;

    sprintf(name, ", Age: %d, Salary: %d", alfred_age, salary);  // (!) name will be overwritten by the latter string

    printf("Info: \n%s\n", name);

    // strcpy
    char original[100] = "Bruce Wayne";
    char copy[100];
    char limitedCopy[12];

    strcpy(copy, original);
    strcpy(limitedCopy, original);
    printf("The Original  : %s\n", original);
    printf("The Copy      : %s\n", copy);
    printf("Limited Copy  : %s\n\n", limitedCopy);
    
    // strcat
    char part1[50], part2[50];

    strcpy(part1, "This is not the end... ");
    strcpy(part2, "but a new beginning.");

    strcat(part1, part2); // strcat in action

    printf("stract: %s\n\n", part1);
    printf("stract: %s\n\n", part1);

    return 0;
}