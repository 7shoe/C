#include <stdio.h>


struct point {
    int x;
    int y;
};


int main(){

    struct point p1 = {.x = 1, .y = 2};


    // Adress of Structure
    struct point *pp;
    pp = &p1;


    printf("Address of p1: %p\n", pp);

    // dereference struct pointer attributes (Note: . has higher precedence than * which necessitates the brackets "()" )
    printf("(*pp).x, (*pp).y = (%d, %d)\n\n", (*pp).x, (*pp).y);

    // short-hand notation for dereferencing members
    printf("pp->x : %d", pp->x);
    return 0;
}