#include <stdio.h>

#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point pl;
    struct point pu;
};

struct circle {
    struct point center;
    double radius;
};

/* makePoint : create point */
struct point makePoint(int x, int y){
    struct point p;
    p.x = x;
    p.y = y;

    return p;
}

/* print point */
void printPoint(struct point p){
    printf("Point(%d, %d)", p.x, p.y);
}

/* print point */
void printRectangle(struct rectangle r){
    printf("Rectangle = {\n\t");
    printPoint(r.pl);
    printf("\n\t");
    printPoint(r.pu);
    printf("\n}\n");
}

/* addPoint : adds to points (! struct point is passed by value like any other variable inC... no change for p1 after function call! */
struct point addPoint(struct point p1, struct point p2){
    p1.x += p2.x;
    p1.y += p2.y;

    return p1;
}

/* pInRect */
int pInRect(struct point p, struct rectangle r){
    if((p.x >= r.pl.x) && (p.x <= r.pl.x) && (p.y >= r.pl.y) && (p.y <= r.pu.y))
        return 1;
    return 0;
}

/* canonincal rectangle */
struct rectangle makeCanonicalRectangle(struct rectangle rect){
    struct rectangle r_new;

    r_new.pl.x = min(rect.pl.x, rect.pu.x);
    r_new.pl.y = min(rect.pl.y, rect.pu.y);
    r_new.pu.x = max(rect.pl.x, rect.pu.x);
    r_new.pu.y = max(rect.pl.y, rect.pu.y);

    return r_new;
}

int main(){

    int a, b, x, y;
    
    x = 5;
    y = 6;

    struct point p1 = makePoint(x,y);
    printPoint(p1);
    printf("\n");

    struct point p2 = makePoint(-5,12);
    printPoint(p2);
    printf("\n");

    struct point p3 = addPoint(p1, p2);
    printPoint(p3);
    printf("\n\n");

    // canonical initialization of rectangle 
    struct rectangle r;
    r.pl = p1;
    r.pu = p2;
    r = makeCanonicalRectangle(r);

    printRectangle(r);

    return 0;
}