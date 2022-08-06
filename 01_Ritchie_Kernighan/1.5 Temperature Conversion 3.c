#include <stdio.h>

int main() {
    
    printf("C   |   F\n");
    for(float fahr=0.0; fahr <= 100; fahr+=5){
        printf("%6.0fF \t %6.2fC\n", fahr, (5./9)*(fahr - 23));
    }
}