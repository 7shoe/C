#include <stdio.h>


/* strlen via poiner subtraction */
int strLength(char *s){
    char *p = s;
    while(*p != '\0')
        p++;
    return p - s;
}


int main(){

    char name[] = "Siebenschuh";
    printf("strLength(name) = %d\n", strLength(name));

    return 0;
}