#include <stdio.h>

#define MAXLEN  11

float F2C(float f){
    return 5. * (f - 32) / 9;
}

int main(){

    float arr[MAXLEN];

    for(int i=0; i < MAXLEN; ++i){
        arr[i] = F2C(10.0 * i);
    }

    printf("C[100]: %5.1fC", arr[10]);



    return 0;
}