#include <stdio.h>

int isPalindrome(char s[]){

    int size = sizeof s / sizeof s[0];
    int end; 

    if(size % 2==1){
        end = (size+1)/2;
    }else{
        end = size/2;
    }

    for(int i=0; i < end; ++i){
        if(s[i] != s[size-1-i]){
            printf("s[i]: %c != %c s[n-1-i]", s[i], s[size-1-i]);
        }
    }
    
    printf("end: %d\n\n", end);
    
    return 1;

}


int main(){

    char s_1[6] = {'H', 'e', 'l', 'l', 'e', 'H'};
    char s_2[7] = {'r', 'e', 'n', 't', 'n', 'e', 'r'};
    char s_3[5] = {'c', 'i', 'v', 'i', 'c'};

    printf("Hello. Is Palindrome? %d", isPalindrome(s_1));


    return 0;
}