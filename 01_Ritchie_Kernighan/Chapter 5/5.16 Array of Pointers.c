#include <stdio.h>



int main(){

    char *arr_ptr[] = {"Alan", "Bert", "Cedar", "David"}; 


    // 1 access via *
    for(int i=0; i < 4; ++i){
        printf("name[%d] = %s\n", i, *(arr_ptr+i));
    }

    printf("\n");

    // 2 access via arr[i]
    for(int i=0; i < 4; ++i){
        printf("name[%d] = %s\n", i, arr_ptr[i]);
    }

    return 0;
}