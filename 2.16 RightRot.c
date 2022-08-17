#include <stdio.h>
#include <math.h>

void rightRot(int x, int n){
    int p = (int)log2((double)n) + 1;
    for(int j=0; j <= p; ++j){
        x = x << 1;
    }

    printf("x (%d-shifted) = %d", n, x);
}

int main(){


    rightRot(34, 3);




    return 0;
}