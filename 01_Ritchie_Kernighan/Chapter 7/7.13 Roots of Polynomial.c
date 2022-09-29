#include <math.h>
#include <stdio.h>



int main(){

    // read parameters
    int a, b, c;
    float d, x1, x2;

    printf("> ");
    a = getchar();
    printf("Got a: %d", scanf("%d", &a));

    printf("\n> ");
    b = getchar();
    printf("Got b: %d", scanf("%d", &b));

    printf("\n> ");
    c = getchar();
    printf("Got c: %d", scanf("%d", &c));
    printf("\n\n Quadratic Polynomial is: %dx^{2} + %dx + %d\n", a, b, c);

    // compute discriminant
    d = b*b - 4*a*c;
    // compute roots
    if(d > 0){
        x1 = ((-1.0) * b + sqrt(d)) / (2 * a);
        x2 = ((-1.0) * b - sqrt(d)) / (2 * a);
    }




    return 0;
}