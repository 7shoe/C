#include <stdio.h>

int main() {

    int c;

    printf("EOF: %d", EOF);

    while ((c=getchar()) != EOF){
        putchar(c);
    }

    return 0;
}