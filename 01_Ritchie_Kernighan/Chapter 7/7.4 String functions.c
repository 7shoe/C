#include <stdio.h>
#include <string.h>


int main(){

    // sprintf
    char name[] = "Alfred Pennyworth";
    char position[] = ", Buttler";
    int alfred_age = 66;

    sprintf(name, ", Age: %d", alfred_age);

    printf("Info: \n", name);

    

    return 0;
}