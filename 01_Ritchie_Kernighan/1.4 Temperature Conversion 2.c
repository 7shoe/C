#include <stdio.h>

int main(){

    int lower, upper, step;
    float fahr, celsius;

    lower = -1.0;
    upper = 100.0; 
    step = 5;

    celsius = lower;

    printf("C\t|\tF\n");
    while (celsius <= upper){

        fahr = 9./5 * celsius + 32;
        printf("%3.1f \t %5.1f\n", celsius, fahr);

        celsius+=step;

    }
    


    return 0;
}