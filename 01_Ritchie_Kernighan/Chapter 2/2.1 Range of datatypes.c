#include <stdio.h>

#define MAXLEN 100000

int intRange(){

    long prev, lower, upper;
    lower = 0;
    upper = 0;
    prev = 0; 
    for(int k = 1; k < MAXLEN; ++k){
        //printf("%d\n", (int)k - (int)prev);
        if((int)k - (int)prev != 1){
            upper = prev;
            printf("break");
            break;
        }
        prev++;
    }

    prev = 0;
    for(int k = -1; k > -1 * MAXLEN; --k){
        //printf("%d\n", (int)k - (int)prev);
        if((int)k - (int)prev != 1){
            lower = prev;
            printf("break");
            break;
        }
        prev = k;
    }

    printf("int Range: {%ld, ..., %ld}", lower, upper);

    return 0;
}


int main(){


    // int Range
    intRange(); 

    return 0;
}