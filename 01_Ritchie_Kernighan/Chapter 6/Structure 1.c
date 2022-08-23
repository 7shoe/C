#include <stdio.h>


int main(){

    // point struct
    struct point {
        int x;
        int y;
    };

    // radius struct (merely a template)
    struct radius; 

    struct point p1, p2, p3;

    p1.x = 2, p2.x = 3, p3.x = 5;
    p1.y = 1, p2.y = 7, p3.y = 0;

    // nested structure
    struct rectangle {
        struct point pl;
        struct point pu;
    };

    // point (int)
    int point = 0;
    point++; 

    // points
    printf("point: %d\n\n", point);
    printf("p1.x: %d\n", p1.x);
    printf("p1.y: %d\n\n", p1.y);

    // screen
    struct rectangle screen;
    screen.pl.x = 140;
    screen.pl.y = 223;

    screen.pu.x = 1164;
    screen.pu.y = 991;

    printf("Screen size: %dx%d (pixel count: %d\n\n", (screen.pu.x  - screen.pl.x), (screen.pu.y  - screen.pl.y), (screen.pu.x  - screen.pl.x) * (screen.pu.y  - screen.pl.y) );

    // initialize a struct at declaration (possible since ANSI 99)
    struct circle {
        struct point center;
        double radius;
    };

    struct circle c1 = {.center.x = 0, .center.y = 0};
    printf("Circle, center = (%d, %d), radius: %.2f\n", c1.center.x , c1.center.y, c1.radius);


    /*
    Structures (struct)
    - 
    */


    return 0;
}