#include <stdio.h>

static int invisibleNumber = 666;

static void reallyInvisible(){
    printf("Really invisible since in another source file & static!\n");
}

void reallyMakeVisible(){
    printf("Call reallyInvisible() from within the other source file! ...\n");
    printf("invisibleNumber: %d", invisibleNumber);
}