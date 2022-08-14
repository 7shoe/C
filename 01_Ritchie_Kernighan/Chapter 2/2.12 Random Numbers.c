#include <stdio.h>
#include <stdlib.h>


/* attempt to simulate pi via naïve Monte Carlo Simulation*/
double monteCarloPi(long long n){
    long long pi_hat = 0;
    double x, y;

    for(int i=0; i < n; ++i){
        x = (unsigned short)rand() / 65535.0;
        y = (unsigned short)rand() / 65535.0;

        // printf("x = %d\n", (int)x);

        if(x*x + y*y < 1.0){
            pi_hat+=1;
        }
    }
    return 4.0*(pi_hat/(double)n);
}

int main(){

    printf("Pi hat = %f", monteCarloPi(100000000));     // 30s, yields 3.141580 --> Err=1.26 * 10^5


    return 0;
}