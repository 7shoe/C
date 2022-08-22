#include <stdio.h>

/* strcopy(s,t) to implement "s=:t" */
void strcopy(char *s, char *t){
    char *ps = s, *pt = t;
    while(*ps!='\0'){
        *pt = *ps;
        pt++;
        ps++;
    }
    //pt++;
    //*pt = '\0';
}


int main(){

    char s[] = "Hello World";
    char t[] = "None";

    printf("Before\n");
    printf("s = %s\n", s);
    printf("t = %s\n\n", t);

    // copy content from s into t
    strcopy(s, t);

    printf("After\n"); 
    printf("s = %s\n", s);
    printf("t = %s\n", t);

    return 0;
}