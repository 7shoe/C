#include <math.h>
#include <stdio.h>



int main(){

    // read parameters
    int a, b, c;
    float d, x1, x2, im;

    printf("> ");
    a = getchar();
    printf("Got a: %d", a);

    printf("\n> ");
    b = getchar();
    printf("Got b: %d", b);

    printf("\n> ");
    c = getchar();
    printf("Got c: %d", c);
    printf("\n\n Quadratic Polynomial is: %dx^{2} + %dx + %d\n", a, b, c);

    // compute discriminant
    d = b*b - 4*a*c;
    // compute roots
    if(d > 0){
        x1 = ((-1.0) * b + sqrt(d)) / (2 * a);
        x2 = ((-1.0) * b - sqrt(d)) / (2 * a);
        printf("Roots are real!\nx1=%.2f\nx2=%.2f", x1, x2);
    }else{
        x1 = ((-1.0) * b) / (2 * a);
        im = sqrt((-1.0) * d) / (2 * a);
        printf("Roots are complex!\nx1=%.3f + %.3fi\nx2=%.3f - %.3fi", x1, im, x1, im);
    }

    return 0;
}