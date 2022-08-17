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
    int s, z, d, log2x, log2y;
    if(y > x){
        s = y;
        y = x;
        x = s;
    }

    // log
    log2x = (int)log2((double)x) + 1;
    log2y = (int)log2((double)y) + 1;
    z = 0;

    printf("log2x=%d\n", log2x);
    printf("log2y=%d\n", log2y);
    printf("d=%d\n", d);
    printBits(x);
    printBits(y);

    s = 0;
    for(int k=log2x; k >= 0; --k){
        printf("%d, ", (x & (1 << k))); 
    }
    printf("\n");
    for(int k=log2x; k >= 0; --k){
        if(k <= log2y){
            printf("%d, ", (y & (1 << k)));
        }else{
            printf("%d, ", 0);
        } 
    }
    printf("\n");
    for(int k=log2x; k >= 0; --k){
         printf("%d, ", (y & (1 << (k+d-1))));
    }

    // output sum
    //printf("%d + %d = %d", x, y, s);
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