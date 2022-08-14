#include <stdio.h>
#include <string.h>

int isPalindrome(char s[]){

    int size = strlen(s) - 1;
    int end;
    if(size % 2==0){
        end = size/2;
    }else{
        end=(size+1)/2;
    }
    
    printf("size: %d\n\n", size);

    for(int i=0; i < size/2; ++i){
        if(s[i] != s[size-i]){
            return 0;
        }
    }
    
    printf("end: %d\n\n", end);
    
    return 1;

}


int main(){

    char s_1[6] = {'H', 'e', 'l', 'l', 'e', 'H'};
    char s_2[7] = {'r', 'e', 'n', 't', 'n', 'e', 'r'};
    char s_3[5] = {'c', 'i', 'v', 'i', 'c'};
    char s_4[2] = {'c', 'i'};

    printf("Hello. \t\t Is Palindrome? %d\n", isPalindrome(s_1));
    printf("Rentner. \t Is Palindrome? %d\n", isPalindrome(s_2));
    printf("civic. \t\t Is Palindrome? %d\n", isPalindrome(s_3));
    printf("ci. \t\t Is Palindrome? %d\n", isPalindrome(s_4));


    return 0;
}