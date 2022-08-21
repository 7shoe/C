#include <stdio.h>




int main(){

    int x, y, z;   // ints
    int *ip, *jp;  // define i(nteger) pointers

    // define variables
    x = -7;
    y = 10;
    z = 29;

    // dereference
    ip = &x;

    printf("ip : %p\n", ip);
    printf("jp : %p\n", jp);






    return 0;
}