#include <stdio.h>


int main(){

    int a,b,c,d;

    // & - (bitwise operator is a single '&')
    printf("& (bitwise AND operator)\n");
    printf("0 & 0 = %d\n", 0 & 0);
    printf("0 & 1 = %d\n", 0 & 1);
    printf("1 & 0 = %d\n", 1 & 0);
    printf("1 & 1 = %d\n\n", 1 & 1);

    // | - (bitwise operator is a single '|')
    printf("| (bitwise OR operator)\n");
    printf("0 | 0 = %d\n", 0 | 0);
    printf("0 | 1 = %d\n", 0 | 1);
    printf("1 | 0 = %d\n", 1 | 0);
    printf("1 | 1 = %d\n", 1 | 1);



    return 0;
}