#include <stdio.h>
#include <string.h>



/*  */
char * reverse(char s[]){
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

    return s;
}


int main(){

    static char s1[] = "Hello";
    char s2[] = "Rentner";
    char s3[] = "Reittier";
    char s4[] = "livid";

    printf("reverse(%s) = ", s1);
    //reverse(s1);
    printf("%s\n", reverse(s1));

    printf("reverse(%s) = ", s2);
    //reverse(s2);
    printf("%s\n", reverse(s2));

    printf("reverse(%s) = ", s3);
    //reverse(s3);
    printf("%s\n", reverse(s3));

    printf("reverse(%s) = ", s4);
    //reverse(s3);
    printf("%s\n", reverse(s3));

    return 0;
}