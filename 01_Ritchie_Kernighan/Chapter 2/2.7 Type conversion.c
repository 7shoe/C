#include <stdio.h>

/* convert c to lower-case */
int lower(int c){

    if(c >= 'A' && c <= 'Z'){
        return c + 'a' - 'A';
    }else{
        return c;
    }
}

/* atoi: converts char s to integer */
int atoi(char s[]){
    int i, n;

    n = 0;
    for (i=0; s[i] >= '0' && s[i] <= '9'; ++i){
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

int main(){

    char ss[1] = {'A'};

    printf("atoi: %d", atoi(ss));

    printf("%c", lower('D'));

    return 0;
}