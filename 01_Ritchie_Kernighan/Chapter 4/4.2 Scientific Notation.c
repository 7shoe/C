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

    double num, ten;
    int len, sPoint, sExp, sexp, sMinus, EXP, expTen;

    len = strlen(s);

    // printf("len: %d\n", len);
    
    sPoint = strindex(s, '.', len);
    sExp = strindex(s, 'E', len);
    sexp = strindex(s, 'e', len);
    sExp = (sExp > sexp) ? sExp : sexp;

    // mantissa (pre-decimal)
    num = 0.0;
    ten = 1.0;
    if(sPoint != -1){
        for(int i=sPoint-1; i >=0; --i){
            // very convenient of proper conversion of char to int. Note: (int)'9' = 57 while (int)'0' = 58. In turn, '9' - '0' = 9
            num += (s[i] - '0') * ten;    // char c = '5'; Then, (c - '0') will convert it to int!
            ten = ten * 10;
        }
    }else{
        for(int i=sExp-1; i >=0; --i){
            num += (s[i] - '0') * ten; 
            ten *= 10;
        }
    }

    // mantissa (post-decimal)
    if((sPoint!=-1) && (sExp > sPoint)){
        ten = 0.1;
        for(int i=sPoint+1; i < sExp; ++i){
            num += ten * (s[i] - '0');
            ten *= 0.1;
        }
    }

    // exponent
    EXP = 0;
    if((sMinus!=-1) && (sExp!=-1))
        sExp += 2;
    expTen = 1;
    for(int i=sExp ; i < len; ++i){
        EXP += expTen * (s[i] - '0');
        expTen *= 10;
    }
    printf("EXP = %d\n", EXP);
    if(sMinus==-1)
        for(int i=0; i < EXP; ++i)
            num *= 10.0;
    else
        for(int i=0; i < EXP; ++i)
            num *= 0.1;

    printf("num = %f\n", num);

    return num;
}

int main(){

    char str1[] = "1234.23e-6";
    char str2[] = "1.2E3";



    printf("s1: %f", getScience(str1));

    printf("\n\nPure String Output:\nstr1 = %s", str1);





    return 0;
}