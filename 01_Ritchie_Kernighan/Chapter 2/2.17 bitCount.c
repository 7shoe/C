#include <stdio.h>
#include <math.h>

int bitCount(int x){
    int c;

    for(c=0; x!=0; x>>=1){
        c++;
    }

    return c;
}

int main(){


    printf("bitCount(%d) = %d\n", 0, bitCount(0));
    printf("bitCount(%d) = %d\n", 1, bitCount(1));
    printf("bitCount(%d) = %d\n", 5, bitCount(5));

    printf("bitCount(%d) = %d\n", 10, bitCount(10));
    printf("bitCount(%d) = %d\n", 13, bitCount(13));
    printf("bitCount(%d) = %d\n", 64, bitCount(64));


    return 0;
}