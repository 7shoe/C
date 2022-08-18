#include <stdio.h>




int main(){

    int i, j, k;
    int itsOver = 0;
    back_to_start:
        printf("itsOver=%d\n", itsOver);
        for(i=0; i < 5; ++i){
            for(j=0; j < 3; ++j, ++j){
                for(k=0; k<2; ++k){
                    if(i==2 & j==2 & k==1)
                        goto error;
                }
            }
        }
    error:
        printf("Now you used a goto-command in C: Hello World!\n");
        goto normal_program;

    printf("Skip this shit\n");

    // further program
    normal_program:
        printf("i=%d\n", i);
        printf("j=%d\n", j);
        printf("k=%d\n", k);

        if(itsOver != 1){
            itsOver = 1;
            goto back_to_start;
        }

    return 0;
}