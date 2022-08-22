#include <stdio.h>

/* strcopy(s,t) to implement "s=:t" but ... leave s untouched! */
void strcopy(char *s, char *t){
    char *ps = s, *pt = t;
    char i = '';
    while(*ps!='\0'){
        *pt = *(ps+i);
        pt++;
        i++;
    }
    *pt = '\0';
}


int main(){

    char s[] = "Hello World";
    char t[] = "None";

    printf("Before:\n");
    printf("s = %s\n", s);
    printf("t = %s\n\n", t);

    // copy content from s into t
    strcopy(s, t);

    printf("After:\n"); 
    printf("s = %s\n", s);
    printf("t = %s\n", t);

    return 0;
}