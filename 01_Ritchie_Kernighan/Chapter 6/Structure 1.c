#include <stdio.h>


int main(){

    // point struct
    struct point {
        int x;
        int y;
    } p;

    p.x = 2;
    p.y = 1;

    // point (int)
    int point = 0;
    point++; 

    printf("point: %d\n\n", point);
    printf("p.x: %d\n", point);
    printf("p.y: %d\n", point);



    return 0;
}