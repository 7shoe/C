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
    int a, b, c;
    a = x;
    b = y;

    
    while(y!=0){
        c = x & y;
        x = x ^ y;
        y=(c << 1);
    }

    // output sum
    printf("%d + %d = %d", a, b, x);
}

// 1010111 # 87


int main(){

    // Check: int -> bit
    printBits(666);

    // Check: bits -> int 
    //int a[10] = {1,0,1,0,0,1,1,0,1,0};
    //printIntNB(a);

    // Check: bits -> int 
    //int a[10] = {1,0,1,0,0,1,1,0,1,0};
    //printInt(a);

    // Adder
    bitAdder(180, 25);



    return 0;
}