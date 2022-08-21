#include <stdio.h>




int main(){

    int x, y, z;   // ints
    int *ip, *jp;  // define i(nteger) pointers
    void * ptr;    // pointer with not type
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
    printf("jp : %p\n\n", jp);

    // Experiment 1: Assign values to value via *pointer
    // *ip += 1
    printf("*ip : %d\n", *ip);
    printf("*ip += 1;\n");
    *ip += 1;
    printf("*ip : %d\n\n", *ip);

    // Experiment 2: Assign value to variable to which pointer points
    // x+=1;
    x+=1;
    printf("x+=1;\n");
    printf("*ip : %d\n\n", *ip);


    // Experiment 3: Assign pointer with 3rd var
    printf("*ip : %d\n", *ip);  //  ip -> x
    printf("*jp : %d\n", *jp);  //  jp -> y
    *ip = *jp;                  //  x <- *ip = *jp -> y
    printf("*ip = *jp;\n");    
    printf("*ip : %d\n", *ip);  // y
    printf("*jp : %d\n", *jp);  // y
    printf("x : %d\n", x);      // x
    printf("y : %d\n\n", y);      // y

    // Experiment 4: Set value of a to b (a:=b) via pointers ontly
    int *pt;
    int a = 666, b = 777;
    pt = &b;
    a = *pt;
    printf("a = %d", a);











    return 0;
}