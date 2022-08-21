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

    






    return 0;
}