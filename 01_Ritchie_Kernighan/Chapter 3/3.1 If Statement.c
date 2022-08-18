#include <stdio.h>



int main(){


    int i, j, k, l;
    i = 11;
    j = 5;

    // WORKS! Not {} needed for a one-line statement after if(expression)
    if(i < j)
        printf("i < j is true!\n");

    // 2nd statement (and beyond) ALWAYS executed after an if-clause when no curly brackets ({}) are used!
    if(i < j)
        printf("i < j is true!\n");
        printf("This line will always be printed!\n");

    // WORKS: NO CURLY BRAKETS needed if if() and else() are both one-liners
    if(i < j)
        printf("i < j!\n");
    else
        printf("not true.\n");

    // ONLY WORKS ... when the 2nd statement in the if() is commented out. Otherwise  "error: expected expression"
    if(i < j)
        printf("i < j!\n");
        //printf("Always printed... always!\n");
    else
        printf("not true.\n");
        printf("Holds true for the else() as well: Always printed... always!\n");
    


    return 0;
}