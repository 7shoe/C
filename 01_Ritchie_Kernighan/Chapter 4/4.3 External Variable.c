#include <stdio.h>

// external variable since defined outside the function
int globalCount = 0;

int dancer(){
    globalCount++;

    return 1;
}

dummy(){globalCount++;}

int dummy2(){
    globalCount++;

    return 0;
}

int main(){


    printf("Global Variable:\nglobalCount: %d\n", globalCount);

    dancer();
    dancer();
    dancer();
    dummy2();
    dancer();
    printf("globalCount: %d\n", globalCount);
    dancer();
    dummy2();
    dancer();
    dummy2();

    printf("globalCount: %d\n", globalCount);


    return 0;
}