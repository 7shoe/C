#include <stdio.h>



int main(){


    int i, j, k, l;
    i = 10;
    j = 5;

    // works! Not {} needed for a one-line statement after if(expression)
    if(i < j)
        printf("i < j is true!\n");
        printf("This line will always be printed!");
    //else
    //    printf("It holds: i >= j.\n");


    return 0;
}