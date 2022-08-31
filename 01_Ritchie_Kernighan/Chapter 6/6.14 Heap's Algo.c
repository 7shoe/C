#include <stdio.h>
#include <stdlib.h>
int len;
void swap (int *x, char *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void print(const int *v){
    int i;
    int size = len;
    if (v != 0) {
    for ( i = 0; i < size; i++) {
        printf("%4d", v[i] );
    }
    printf("\n");
  }
}

void heappermute(int v[], int n){
    int i;
    if (n == 1) {
        print(v);
	}
    else {
        for (i = 0; i < n; i++) {
            heappermute(v, n-1);
            if (n % 2 == 1) {
                swap(&v[0], &v[n-1]);
	    }
            else {
                swap(&v[i], &v[n-1]);
            }
	}
    }
}