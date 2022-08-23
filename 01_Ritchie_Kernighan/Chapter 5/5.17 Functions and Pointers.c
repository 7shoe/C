#include <stdio.h>


long squareInt(int n){
    n = (n > 0) ? n : (-1)*n;
    n = (unsigned long)n;
    return n*n;
}

/* int *f() : function returning a integer pointer */
int *f(int n){
    int *ptr = &n;
    return ptr;
}



int main(){

    printf("(%d)**2 = %ld\n", 12, squareInt(12));
    printf("(%d)**2 = %ld\n\n", 132, squareInt(132));

    printf("(%d)**2 = %p\n", 132, f(132));   // prints adress of the argument provided
    printf("(%d)**2 = %d\n", 132, *f(132));  // prints content of cell (the output pointer is pointing at)



    return 0;
}