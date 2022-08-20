#include <stdio.h>
#include "4.4 static_header.h"
#include "4.4 Another Source File.c"


int main(){

    // = = = = HEADER = = = = = 
    // OK : call non-static fun from header
    visible();

    // OK : call static fun from header
    invisible();

    // OK : load static file from header
    printf("Global time: %d\n", GLOBAL_TIME);

    // OK : Manipulate static vars from header
    printf("Global time++: %d\n", GLOBAL_TIME++);
    printf("\nGlobal time: %d\n\n", GLOBAL_TIME);

    // = = = = ANOTHER SOURCE FILE = = = = = 
    reallyMakeVisible();

    reallyInvisible(); // can still be called!



    return 0;
}