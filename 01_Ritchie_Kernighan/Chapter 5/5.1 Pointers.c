#include <stdio.h>




int main(){

    int x, y, z;   // ints
    int *ip, *jp;  // define i(nteger) pointers
    int* kp;
    int* lp = &z;  

    // define variables
    x = -7;
    y = 10;
    z = 29;

    // dereference
    ip = &x;
    jp = &y;
    kp = &z;

    // adress via &
    printf("&x : %p\n", &x);
    printf("&y : %p\n\n", &y);

    // adress via pointer
    printf("ip : %p\n", ip);
    printf("jp : %p\n", jp);

    // Experiment 1: Assign values to value via *pointer
    // *ip += 1
    printf("*ip : %d\n", *ip);
    printf("*ip += 1;\n");
    *ip += 1;
    printf("*ip : %d\n", *ip);

    // Experiment 2: Assign value to variable to which pointer points
    // x+=1;
    x+=1;
    printf("x+=1;\n");
    printf("*ip : %d\n", *ip);

    // Experiment 3: Assign 










    return 0;
}