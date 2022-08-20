#include <stdio.h>
#include "4.4 static_header.h"


int main(){

    // = = = = HEADER = = = = = 
    // OK : call non-static fun from header
    visible();

    // OK : call static fun from header
    invisible();

    // OK : load static file from header
    printf("Global time: %d", GLOBAL_TIME);

    // OK : Manipulate static vars from header
    printf("Global time++: %d", GLOBAL_TIME++);
    printf("\nGlobal time: %d", GLOBAL_TIME);



    return 0;
}