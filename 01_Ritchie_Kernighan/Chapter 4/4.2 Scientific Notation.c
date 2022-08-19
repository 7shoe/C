#include <stdio.h>
#include <string.h>


/* return rightmost occurence of char t in text s*/
int strindex(char s[], char t, int n){
    for(int i=n-1; i >= 0; --i){
        if(s[i]==t)
            return i;
    }
    return -1;
}

/* scientific to float*/
float getScience(char s[]){



    return 0.0;
}

int main(){

    char str1[] = "1.23e-6";
    char str2[] = "1.2E3";

    int mantissa, decimals, exponent;
    for(int i = 0; i < strlen(str1); ++i){
        if(str1[i]=='.'){
            mantissa = i-1;
        }
    }

    double num = 0.0;
    double ten = 1.0;
    int len, sPoint, sExp, sexp, sMinus;
    len = strlen(str1);
    sPoint = strindex(str1, '.', len);
    sExp = strindex(str1, 'E', len);
    sexp = strindex(str1, 'e', len);
    sExp = (sExp > sexp) ? sExp : sexp;
    ten = 1;

    // mantissa (pre-decimal)
    if(sPoint != -1){
        for(int i=sPoint-1; i >=0; --i){
            num += ten * (int)str1[i];
            ten *= 10.0;
        }
    }else{
        for(int i=sExp-1; i >=0; --i){
            num += ten * (int)str1[i];
            ten *= 10.0;
        }
    }
    // mantissa (post-decimal)
    if((sPoint!=-1) && (sExp > sPoint)){
        ten = 0.1;
        for(int i=sExp-1; i > sPoint; --i){
            num += ten * (int)str1[i];
            ten /= 10.0;
        }
    }

    // exponent
    if((sMinus==-1) && (len > sExp)){
        ten = 10.0;
        for(int i=len-1; i > sExp; --i){
            num += ten * (int)str1[i];
            ten /= 10.0;
        }
    }


    printf("s1: %d", sPoint);

    printf("\nstr1 = %s", str1);





    return 0;
}