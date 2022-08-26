#include <stdio.h>
#include <string.h>
 
union student{
            char name[20];
            char subject[20];
            float percentage;
};

int main(){

    union student record1;
    union student record2;

    // assigning values to record1 union variable
    strcpy(record1.name, "Raju");
    strcpy(record1.subject, "Maths");
    record1.percentage = 86.50;

    printf("Union record1 values example\n");
    printf(" Name       : %s \n", record1.name);
    printf(" Subject    : %s \n", record1.subject);
    printf(" Percentage : %f \n\n", record1.percentage);
}