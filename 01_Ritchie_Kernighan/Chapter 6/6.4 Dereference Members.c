#include <stdio.h>

struct village {
    int pop;
    int wealth;
    char *name;
};


int main(){

    struct village naperville = {.pop = 100, .wealth = 666, .name="NaperVille"};
    struct village *struct_ptr; // struct pointer
    struct_ptr = &naperville;

    // Equivalent dereferrences (increase pop by 1, read out)
    printf("naperville.pop: %d\n", ++struct_ptr->pop);
    printf("naperville.pop: %d\n", ++struct_ptr->pop);

    // increment pointer rather than member
    printf("naperville.pop: %d\n", (struct_ptr++)->pop);
    printf("naperville.pop: %d\n", struct_ptr++->pop);    // brackets are superfluous
    


    return 0;
}
