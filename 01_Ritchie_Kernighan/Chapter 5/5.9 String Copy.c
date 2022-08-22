#include <stdio.h>

/* strcopy(s,t) to implement "s=:t" but ... leave s untouched! */
void strcopy(char *s, char *t){
    char *ps = s, *pt = t;
    while(*ps!='\0'){
        *pt = *ps;
        pt++;
        ps++;
    }
    //pt++;
    *pt = '\0';
}

void strcopyAdvanced(char *s, char *t){
    while((*s++ = *t++) != '\0')             // *s++ = character s pointed to (*s) BEFORE it was incremented
        ;
}

void strcopyBest(char *s, char *t){
    while(*s++ = *t++)
        ;
}


int main(){

    char s[] = "Oh oh";
    char t[] = "Hello World";

    printf("Before:\n");
    printf("s = %s\n", s);
    printf("t = %s\n\n", t);

    // copy content from s into t
    //strcopy(s, t);
    //strcopyAdvanced(s, t);
    strcopyBest(s,t);
    
    printf("After:\n"); 
    printf("s = %s\n", s);
    printf("t = %s\n", t);

    return 0;
}