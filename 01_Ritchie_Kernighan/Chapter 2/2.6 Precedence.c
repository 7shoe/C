#include <stdio.h>


int main(){

    int i = 0;

    int cd = 5;

    // 1st example: && has precedence over assignment `=` and increment
    if (i==0 && i==i++ && i!=1 && cd++ == 6){
        printf("True!, Now i is %d. Although i==i++ in the condition was true!", i);
        
    }
    printf("The last entry was not checked! In turn, cd should be still 5. And it is %d! :-)\n\n", cd);

    // 2nd example && (logical and) has precedence over || (logical or)
    int a = 777;
    if(a==777 && a-1==788 || a-1==776){
        printf("Oh oh\n");
    }

    // ... is therefore equivalent to: 
    if((a==777 && a-1==788) || a-1==776){
        printf("Oh oh\n");
    }


    return 0;
}