#include <stdio.h>


typedef int Length;
typedef char *String;

typedef struct tnode *Treeptr;

typedef struct tnode {
    char *word;
    int count;
    Treeptr left;     // more readable, then "struct tnode *Treeptr left"
    Treeptr right;
};


int main(){

    // Length (just int)
    Length maxlen, len;
    len = 10;
    maxlen = 100;

    // String 
    String s1 = "Hello typedef World. I'm a String now.";
    printf("%s\n", s1);






    return 0;
}