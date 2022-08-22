#include <stdio.h>
#include <time.h>


clock_t start, end;
double cpu_time_used;


int main(){
    
    int N = 10000;
    int arr[N];

    
    // (a) pointers
    start = clock();
    int *pa = arr; // 
    for(int i=0; i < 8; ++i){
        printf("(pa + %d) = %d\n", i, *(pa+i));
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time (via Pointers: %5.2f\n", cpu_time_used);


    return 0;
}