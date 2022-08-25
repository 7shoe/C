#include <stdio.h>
#include <stdlib.h>

#define HASHSIZE 101

struct nlist {
    struct nlist *next;
    char *name;
    char *defn;
}

/* pointer table */
static struct nlist *hastab[HASHSIZE]; // pointer table

/* hash */

/* talloc */
struct tnode *talloc(void){
    return (struct tnode *) malloc(sizeof(struct tnode));
}

char *strdup(char *s){
    char *p;

    p = (char *) malloc(strlen(s) + 1);
    if(p != NULL)
        strcpy(p, s);
    return p;
}






int main(){



    return 0;
}