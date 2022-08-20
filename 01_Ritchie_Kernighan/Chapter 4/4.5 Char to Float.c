#include <stdio.h>
#include <string.h>

int isDigit(char s){
    if(s <= 57 && s >= 48)
        return 1;
    return 0;
}

int getIndex(char s[], char p, int n){

    for(int i=n-1; i >= 0; --i)
        if(s[i]==p)
            return i;

    return -1;
}

float getFloat(char s[]){

    int len, sMinus, sPoint, sign, ten, sStart;
    double num;

    len = strlen(s);
    sMinus = getIndex(s, '-', len);
    sPoint = getIndex(s, '.', len);

    sign = (sMinus > -1) ? -1 : 1;
    sStart = (sign != -1) ? 0 : 1;

    num = 0.0;
    ten =1;

    if(sPoint==-1){
        for(int i=len-1; i >=sStart; --i){
            num += ten * (s[i] - '0');
            ten *= 10;
        }
    }else{
        for(int i=sPoint-1; i >=sStart; --i){
            num += ten * (s[i] - '0');
            ten *= 10;
        }
        ten = 10;
        for(int i=sPoint+1; i < len-1; ++i){
            num += (double)(s[i] - '0') / ten;
            ten *= 10;
        }
    }

    return num * sign;
}



int main(){

char s[] = "-1.2345";

    isDigit('s');

    //printf("getFloat(%s) = %.5f", s, getFloat(s));

    return 0;
}