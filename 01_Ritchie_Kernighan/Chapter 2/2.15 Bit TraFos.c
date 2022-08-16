#include <stdio.h>
#include <math.h>

void printBits(int x){
    int log2x = (int)log2((double)x)+1;

    printf("%d = (", x);
    for(int k=1; k < log2x; ++k){
        printf("%d,", ((x & (1 << (k - 1))) >> (k - 1)));
    }
    printf("%d)\n", ((x & (1 << log2x)) >> log2x));
    

}

int main(){

    printBits(15);



    return 0;
}