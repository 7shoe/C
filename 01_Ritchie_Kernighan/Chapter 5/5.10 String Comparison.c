#include <stdio.h>


int strcmp(char *s, char *t){
    int i = 0;
    while(*s != 0)
        if(*s++ != *t++)
            return 0;
    return 1;
}


int main(){


    char s1[] = "hallo";
    char s2[] = "hallllo";
    char s3[] = "hallo";

    printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));
    printf("strcmp(%s, %s) = %d\n", s2, s3, strcmp(s2, s3));
    printf("strcmp(%s, %s) = %d\n", s1, s3, strcmp(s1, s3));


    return 0;
}