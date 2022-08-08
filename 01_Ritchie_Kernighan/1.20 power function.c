#include <stdio.h>

int power(const int x, const int a);


/* power: raise base to n-th power*/
int power(const int x, const int a){
    int v = 1;

    for(int i=0; i < a; ++i){
        v *= x;
    }

    return v;
}

int main(){

    int x, a;

    x = 2;
    a = 10;

    printf("pow(%d,%d) = %d", x, a, power(x, a));

    return 0;
}