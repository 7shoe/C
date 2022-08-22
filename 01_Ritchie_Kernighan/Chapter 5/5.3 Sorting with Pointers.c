#include <stdio.h>


/*  work around "call by value" by using pointers to a, b (via $a, &b) instead of copies of a, b  */
void swap(int *px, int *py){
    int temp = *px;              // store content of where px is pointing to in int var temp 
    *px = *py;                   // change content of where px (x) is pointing to to that content of where py is pointing to (y)
    *py = temp;                  // assign content of where py is pointing to (y) to the value of temporary variable 
}




int main(){

    int arr[] = {1, 5, 9};

    // swap(&arr[0], &arr[2]);

    for (int i=0; i < 3; ++i)
        printf("arr[%d] = %d\n", i, arr[i]);
    printf("\n");

    swap(&arr[0], &arr[2]);

    for (int i=0; i < 3; ++i)
        printf("arr[%d] = %d\n", i, arr[i]);


    return 0;
}