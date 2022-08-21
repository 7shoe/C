#include <stdio.h>

#define HDR 1

#if defined(HDR) && !defined(VHS)
int xx = 66;
#endif




int main(){

    printf("xx: %d", xx);


    return 0;
}