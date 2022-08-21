#include <stdio.h>


/*  */
void reverse(char s[]){
    char p;
    int i, n;

    i = 0;
    n = strlen(s);

    while(n-i > 2){
        p = s[n];
        s[n] = s[i];
        s[i] = p;

        i++;
        n--;
    }
}


int main(){

    char s1[] = "Hello";
    char s2[] = "Rentner";

    printf("reverse(%s) = ", s1);
    reverse(s1);
    printf("")



    return 0;
}