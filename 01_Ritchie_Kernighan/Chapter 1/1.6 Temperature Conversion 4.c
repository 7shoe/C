#include <stdio.h>

/* define SYMBOLIC CONSTANTs for critical values of the program so-called "magic numbers"  */

#define LOWER   -20
#define UPPER   300
#define STEP    5

int main(){

    printf("Fahrenheit | Celsius\n");

    for(float fahr=LOWER; fahr <= UPPER; fahr+=STEP){
        printf("%6.0f F\t%6.2f C\n", fahr, 5 * (fahr - 32) / 9.);
    }
}