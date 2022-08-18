#include <stdio.h>

char getGrade(int points){
    if(points < 40)
        return 'F';
    else if(points < 55)
        return 'D';
    else if(points < 75)
        return 'C';
    else if(points < 85)
        return 'B';
    else
        return 'A';
}

int main(){

    // Sample Grades
    printf("Grade for %d points is: %c\n", 54, getGrade(54));
    printf("Grade for %d points is: %c\n", 93, getGrade(93));
    printf("Grade for %d points is: %c\n", 99, getGrade(99));
    printf("Grade for %d points is: %c\n", 45, getGrade(45));
    printf("Grade for %d points is: %c\n", 69, getGrade(69));
    printf("Grade for %d points is: %c\n", 83, getGrade(83));
    printf("Grade for %d points is: %c\n", 88, getGrade(88));


    return 0;
}