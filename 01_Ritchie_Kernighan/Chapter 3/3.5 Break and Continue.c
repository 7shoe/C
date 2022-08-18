#include <stdio.h>




int main(){


    for(int i=0; i < 20; ++i){
        if(i%3==0)
            printf(" Divisor of 3! =%d\n", i);
        if(i%3==1)
            continue;
        if(i%3==2)
            printf(" No... %d\n", i);
    }




    return 0;
}