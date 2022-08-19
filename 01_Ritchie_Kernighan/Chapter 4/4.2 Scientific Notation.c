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

    int len = strlen(s);
    double num = 0.0;
    double ten = 1.0;
    int sPoint, sExp, sexp, sMinus, EXP;
    
    sPoint = strindex(s, '.', len);
    sExp = strindex(s, 'E', len);
    sexp = strindex(s, 'e', len);
    sExp = (sExp > sexp) ? sExp : sexp;
    ten = 1;

    // mantissa (pre-decimal)
    if(sPoint != -1){
        for(int i=sPoint-1; i >=0; --i){
            num += ten * (int)s[i];
            ten *= 10.0;
        }
    }else{
        for(int i=sExp-1; i >=0; --i){
            num += ten * (int)s[i];
            ten *= 10.0;
        }
    }
    // mantissa (post-decimal)
    if((sPoint!=-1) && (sExp > sPoint)){
        ten = 0.1;
        for(int i=sExp-1; i > sPoint; --i){
            num += ten * (int)s[i];
            ten /= 10.0;
        }
    }

    // exponent
    if((sMinus!=-1) && (sExp!=-1))
        sExp += 1;
    ten = 1.0;
    for(int i=sExp + 1; i < len; ++i){
        EXP += ten * (double)s[i];
        ten *= 10.0;
    }
    if(sMinus==-1)
        for(int i=0; i < EXP; ++i)
            num *= 10.0;
    else
        for(int i=0; i < EXP; ++i)
            num /= 10.0;

    return num;
}

int main(){

    char str1[] = "1.23e-6";
    char str2[] = "1.2E3";



    printf("s1: %f", getScience(str1));

    printf("\nstr1 = %s", str1);





    return 0;
}