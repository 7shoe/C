#include <stdio.h>



int main(){

    int i, limit;
    limit = 100;
    for(i=0; i < limit; ++i){
        if(i==5)
            limit = 6;            // C-loop allows manipulating the limit of the for loop... NOT the case for Fortran, Python etc.
    }
    printf("i=%d\n", i);


    i = 17;

    switch(2*i){
        case 10: 
            printf("i must be 5\n");
            break;
        case 20: 
            printf("i must be 10\n");
            break;
        case 15: 
            printf("i must be 10\n");
            break;
        default: 
            printf("is is not 5, 10, or 15!\n");
            break;
    }

    return 0;
}