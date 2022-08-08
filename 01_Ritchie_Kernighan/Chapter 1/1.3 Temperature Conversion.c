#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300*/

main() {
    int fahr;
    float celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("F \t|\t C\n");
    while (fahr <= upper){
        celsius = 5./9 * (fahr - 23);
        printf("%3d\t%5.1f\n", fahr, celsius);
        fahr += step; 
    }

}