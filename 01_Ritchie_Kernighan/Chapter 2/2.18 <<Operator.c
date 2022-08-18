#include <stdio.h>

#define BUF_SIZE 10

/*  Buffer must have length >= sizeof(int) + 1
    Write to the buffer backwards so that the binary representation
    is in the correct order i.e.  the LSB is on the far right
    instead of the far left of the printed string */
char *int2bin(int a, char *buffer, int buf_size) {
    buffer += (buf_size - 1);

    for (int i = BUF_SIZE-1; i >= 0; i--) {
        *buffer-- = (a & 1) + '0';

        a >>= 1;
    }

    return buffer;
}

/* computes 2^a via bitwise operation */
int square(int a){
    int i = 2;
    return (i <<= (a-1));
}

/* computes a*2^(-a) via bitwise operation */
float aQuarterOf(unsigned int a){
    int i = 2;
    return (a >> 2);
}


int main(){

    int i = 69;

    char buffer[BUF_SIZE];
    buffer[BUF_SIZE - 1] = '\0';
    int2bin(i, buffer, BUF_SIZE - 1);
    printf("a = %s\n", buffer);

    //buffer[BUF_SIZE - 1] = '\0';
    //int2bin(i, buffer, BUF_SIZE - 1);
    //printf("a = %s\n", buffer);

    // square function
    //printf("%d**2 = %d\n", 10, square(10));

    // inverse function
    printf("aQuarterOf(%d) = %.12f\n", 200, aQuarterOf(200));

    return 0;
}