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

