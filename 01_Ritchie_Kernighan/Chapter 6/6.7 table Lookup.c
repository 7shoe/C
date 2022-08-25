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
unsigned hash(char *s){
    unsigned hashval;

    for(hashval = 0; *s != '\0'; s++)
        hashval = *s + 31 * hashval;
    
    return hashval % HASHSIZE;
}

/* lookup : find s in hastable */
struct nlist *lookup(char *s){
    struct nlist *np;

    for(np = hastable[hash(s)]; np != NULL; np = np->next)   // standard idiom for walking along a linked list 
        if(strcmp(s, np->name) == 0)
            return np; // found!
    return NULL; // not found
}

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

// declararations
struct nlist *lookup(char *);
char *strdup(char *);

/* install : put(name, defn) in hastab */
struct nlsit *install(char *name, char *defn){
    struct nlist *np;
    unsigned hasval;

    if((np = lookup(name)) == NULL){
        np = (struct nlist *) malloc(sizeof(*np));
        if(np==NULL || (np->name = strdup(name)) == NULL)
            return NULL;
        hashval = hash(name);
        np->next = hashtab[hashval];
        hashtab[hashval] = np;
    }else{
        free((void *) np->defn);
    }

    if((np->defn = strdup(defn)) == NULL)
        return NULL;
    return np;
}




int main(){



    return 0;
}