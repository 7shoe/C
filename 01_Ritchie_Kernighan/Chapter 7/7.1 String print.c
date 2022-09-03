#include <stdio.h>





int main(){

    // 1 printf
    char s[] = "Hello World";
    printf("%s.\n", s);
    printf("%7s.\n", s);
    printf("%.7s.\n", s);
    printf("%-7s.\n", s);
    printf("%3.7s.\n", s);

    // two versions to call printf
    //printf(s); // NOT SAFE (when s has symbol % in it)
    printf("%s", s); // safe

    // sprintf
    //int i = sprintf("Hello World Number. %d", 4667);

    //printf("%d\n", i);


    return 0;
}