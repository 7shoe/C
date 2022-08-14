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

    // ^ - (bitwise exlcusive or)
    printf("^ (bitwise EXCLUSIVE OR operator)\n");
    printf("0 ^ 0 = %d\n", 0 ^ 0);
    printf("0 ^ 1 = %d\n", 0 ^ 1);
    printf("1 ^ 0 = %d\n", 1 ^ 0);
    printf("1 ^ 1 = %d\n", 1 ^ 1);

    // ~ - (complement)
    printf("~ (bitwise EXCLUSIVE OR operator)\n");
    printf("~0 = %d\n", ~ 0);
    printf("~1 = %d\n", ~ 1);

    // ~ - (complement)
    printf("~ (bitwise EXCLUSIVE OR operator)\n");
    printf("~0 = %d\n", ~ 0);
    printf("~1 = %d\n", ~ 1);

    // << right shift
    int n = 5;
    //n = n & 0177;
    printf("\nn = n & 0177 = %d", n);

    // caution with bitwise
    int x = 1;
    int y = 2;
    printf("\n\nx & y = %d", x & y);
    printf("\nx && y = %d", x && y);

    // << right shift
    //printf("n = %c", n);

    return 0;
}