#include <stdio.h>

#define SIZE 24

int minInt(int i, int j){
    return (i < j) ? i : j;
}

int min(int arr[]){
    int m = 0;
    for(int i=0; i < SIZE; ++i){
        m = (m < arr[i]) ? m : arr[i];
    }
    return m;
}

int main(){

    int i, j, k;
    i = 7;
    j = 12;
    k = 12;

    // smaller value of i,j
    printf("(i < j) ? i : j = %d\n", (i < j) ? i : j);
    printf("min(14, 78) = %d\n", minInt(14, 78));
    printf("min(314, 78) = %d\n", minInt(314, 78));

    printf("\n\n");

    int arr[24] = {1, 5, 3, 8, 19, 39. -675, -45, 67, -90, 108, 34, 35, 6, 4, 1, -149, -34, -78, 8, 9, 4, 67, 83, 34};


    printf("min(arr) = %d\n", min(arr));

    return 0;
}