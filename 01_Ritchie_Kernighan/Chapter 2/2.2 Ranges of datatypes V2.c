#include <stdio.h>

void printUnsignedRange(int bytes){  
    int bits = 8 * bytes;     
    unsigned long long to = (1LLU << (bits - 1)) + ((1LL << (bits - 1)) - 1);;      
    printf(" 0 to %llu\n\n", to);  
}  
void printSignedRange(int bytes){  
    int bits = 8 * bytes;     
    long long from  = -(1LL << (bits - 1));  
    long long to    =  (1LL << (bits - 1)) - 1;  
    printf(" %lld to %lld\n\n", from, to);  
}  


int main() {

    printf("On the 1LL << (bits-1) operations");
    int bits = 32;
    long long f = 1LL << bits;           
    printf("f = 1LL << bits: %lld\n", f);            // %lld : C99 long long int format specifier


    // actual computation
    printf("Size of unsigned int : \t\t");
    printUnsignedRange(sizeof(int));

    printf("Size of unsigned long : \t\t");
    printUnsignedRange(sizeof(long));

    printf("\nSize of int : \t\t");
    printSignedRange(sizeof(int));

    printf("\nSize of long : \t\t");
    printSignedRange(sizeof(long));


    return 0;
}