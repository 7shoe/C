#include <stdio.h>

/* function to compute length of a string (i.e. char array) */
int stringLength(char s[]){

    char *ps = &s[0];
    int i = 0;
    while(*ps!='\0'){
        i++;
        ps++; // increment adress the pointer is pointing at (NOT the content of the cell it's pointing at!)
    }
    return i;
}


int main(){


    char s1[] = "Hello World it is me!";
    printf("stringLength(s1) = %d\n", stringLength(s1));

    char s2[] = "Vivid";
    printf("stringLength(s2) = %d\n", stringLength(s2));




    return 0;
}