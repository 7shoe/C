#include <stdio.h>


int binSeach(int x, int v[], int n){
    int low, mid, high;
    low = 0;
    high = n-1;

    while(low <= high){
        mid = (low+high) / 2;
        if(x < v[mid]){
            high = mid - 1;
        }else if(x > v[mid]){
            low = mid + 1;
        }else{
            return mid;
        }
    }
    return -1; // no math
}

int main(){

    int arr[10] = {1, 4, 6, 7, 8, 9, 13, 18, 22, 36};
    
    int d = binSeach(18, arr, 10); 
    printf("Element found at: %d", d);


    return 0;
}