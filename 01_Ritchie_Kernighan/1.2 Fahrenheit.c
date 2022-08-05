#include <stdio.h>

float F2C(float F){
    return 5.0 * (F-32.0) / 9.0;
}

int main(){

    float F = 80;
    printf("It is %f in Chicago right now. I.e., it is %f C right now!", 80.0, F2C(80.0));

    return 0;
}