#include <stdio.h>



int main(){


    int x = 1, y = 2, z[10];
    int *ip;                     //mnemonic 

    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[10];

    y++;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z[0] = %d\n", z[0]);

    // increment via pointer: Note, ++ takes precedence over *-operator
    //(*ip) += 1;
    // (*ip)++;
    // *ip++; /// doesn't work
    //++*ip;
    //++(*ip);

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z[0] = %d\n", z[0]);



    return 0;
}