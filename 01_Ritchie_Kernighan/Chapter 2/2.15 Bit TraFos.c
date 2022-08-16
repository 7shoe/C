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

int main(){

    // Check: int -> bit
    printBits(666);

    // Check: bits -> int 
    int a[10] = {1,0,1,0,0,1,1,0,1,0};
    printIntNB(a);



    return 0;
}