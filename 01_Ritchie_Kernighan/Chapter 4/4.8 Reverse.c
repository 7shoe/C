#include <stdio.h>
#include <string.h>


char s[] = "Rentner";

/*  */
void reverse(){
    char p;
    int i, n;

    i = 0;
    n = strlen(s);

    // printf("n = %d", n);

    while(n-i > 2){
        p = s[n];
        s[n] = s[i];
        s[i] = p;

        i++;
        n--;
    }
}


int main(){

    static char s1[] = "Hello";
    char s2[] = "Rentner";
    char s3[] = "Reittier";
    char s4[] = "livid";

    printf("reverse(%s) = ", s);
    reverse();
    printf("%s\n", s);

    printf("reverse(%s) = ", s2);
    reverse();
    printf("%s\n", s2);

    printf("reverse(%s) = ", s3);
    reverse();
    printf("%s\n", s3);

    printf("reverse(%s) = ", s4);
    reverse();
    printf("%s\n", s4);

    return 0;
}