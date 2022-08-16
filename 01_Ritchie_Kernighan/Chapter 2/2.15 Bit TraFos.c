#include <stdio.h>
#include <math.h>

/* Print the bit representation of an arbitrary integer x */
void printBits(int x){
    int log2x = (int)log2((double)x)+1;

    printf("%d = {", x);
    for(int k=log2x-1; k > 0; --k){
        printf("%d,", ((x & (1 << k)) >> k));
    }
    printf("%d}\n", ((x & (1 << 0)) >> 0));
}

/* Turn bit representation to integer */
void printIntNB(int arr[10]){
    int y = 0;
    for(int k=0; k < 10; ++k){
        y += arr[10-k-1] * powl(2, k);
    }
    printf("y = %d\n", y);
}

/* Turn bit representation to integer (bitwise operation) */
void printInt(int arr[10]){
    int z = 0;
    for(int k=0; k < 10; ++k){
        z  |= (arr[10-k-1] << k);
    }
    printf("z = %d\n", z);
}

void bitAdder(int x, int y){
    int s, z;
    int log2x = (int)log2((double)x) + 1;
    if((int)log2((double)y) + 1 > log2x){
        int log2x = (int)log2((double)y) + 1;
    }
    

    s = 0;
    z = 0;
    for(int k=0; k < log2x; ++k){
        s |= ((x & (1 << k)) ^ (y & (1 << k))) ^ (z & (1 << (k-1)));
        z |= ((((x & (1 << k))) & ((y & (1 << k)))) ^ (((y & (1 << k))) & ((z & (1 << k)))) ^ (((x & (1 << k))) & ((z & (1 << k)))));
    }

    // output sum
    printf("%d + %d = %d", x, y, s);
}

int main(){

    // Check: int -> bit
    printBits(666);

    // Check: bits -> int 
    int a[10] = {1,0,1,0,0,1,1,0,1,0};
    printIntNB(a);

    // Check: bits -> int 
    //int a[10] = {1,0,1,0,0,1,1,0,1,0};
    printInt(a);

    // Adder
    bitAdder(17, 30);



    return 0;
}