#include <stdio.h>

/*  */
void swap(char *a, char *b){
    char tmp = *a;
    b = a;
    a = tmp;
}



int main(){

    char s1[] = "runaway";
    char s2[] = "effective";
    char s3[] = "almond";

    char *p1 = s1, *p2 = s2, *p3 = s3;
    char arr[3] = {p1, p2, p3};
    char *pi, *pj;

    for(int i=0; i < 3; ++i){
        for(int j=0; j < 3; ++j){
            if(i<j){
                pi = arr[i];
                pj = arr[j];
            }
        }
    }



    return 0;
}