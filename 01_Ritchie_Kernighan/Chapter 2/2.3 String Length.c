#include <stdio.h>

int strlen(char s[]){
    int i;

    i = 0;
    while (s[i] != 'A'){
        ++i;
    }
    return i;
}

int main(){
    char s[4] = {'a', 'b', 'c', 'A'};

    printf("Length of s: %d", strlen(s));

    return 0;
}