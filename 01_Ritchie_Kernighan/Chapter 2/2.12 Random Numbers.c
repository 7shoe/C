#include <stdio.h>
#include <stdlib.h>


/* attempt to simulate pi via naïve Monte Carlo Simulation*/
double monteCarloPi(long long n){
    long long pi_hat = 0;
    int x, y;

    for(int i=0; i < n; ++i){
        x = rand();
        y = rand();

        printf("x = %d\n", x);

        if(x*x + y*y < 1.0){
            pi_hat+=1;
        }
    }
    return 4.0*(pi_hat/(double)n);
}

int main(){

    printf("Pi hat = %f", monteCarloPi(100));


    return 0;
}