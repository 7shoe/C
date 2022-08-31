#include <stdio.h>
#include <stdlib.h>
int len;
void swap (int *x, char *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
