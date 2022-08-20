#include <stdio.h>

static int GLOBAL_TIME = 2022;

int LOCAL_TIME = 0; 

static void invisible(){
    printf("I'm INvisible outside of this header!\n");
}

void visible(){
    printf("I'm visible outside of this header!\n");
}

void makeVisible(){
    printf("Call invisible() from within the header! ...\n");
    invisible();
    printf("\n\nGLOBAL_TIME: %d", GLOBAL_TIME);
}