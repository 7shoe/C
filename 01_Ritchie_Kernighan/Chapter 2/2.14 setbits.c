#include <stdio.h>
#include <math.h>

int bits(int i){
    if(i < 256){
        printf("\n %d = (");
        for(int k=0; k < (int)log2((double)); ++k){
            printf("%d,", (i & ( 1 << k)) >> k);
        }
        printf(")");
    }
}

/* setbits: */
int setbits(int x, int p, int n, int y){

    int out = x;
    int bit; 

    for(unsigned int k=p; k<p+n; ++p){
       out ^= ((x >> (n+k-1)) ^ (y >> (k-1))) << (n+k);
    }

    return out;
}

int main(){

    int x, y, n, p;
    x = 199;
    y = 107;
    n = 3;
    p = 2;

    // 1-bit conditional toggle
    int a, b, c;
    a = 1;
    b = 1;
    c = 1;
    c ^= (a ^ b);

    printf("a^b = %d", c);

    // conditional k-th bit toggle
    int a2, b2, c2;
    a2 = 5;
    b2 = 2;

    c2 = 16;
    c2 ^= (a2 ^ b2) << 0;

    printf("a2 ^ b2 = %d", c2);


    printf("\nCheck if number is uneven: ");
    int k = 1;
    printf("a2 ^ b2 = %d", ((c2 & (1 << (k - 1))) >> (k - 1)));
    
    // print
    bits(2);


    // Toogle bits
    //printf("\nsetbits(%d, %d, %d, %d) = %d\n", x, p, n, y, setbits(x, p, n, y));
    


}