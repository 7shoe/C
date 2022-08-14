#include <math.h>
#include <stdio.h>

int main(){

    printf("sqrt(144)=%f\n", sqrt(144)); // returns (non-sense):  sqrt(144)=-1074792800

    printf("sqrt((double)144)=%f\n", sqrt((double)144));

    printf("sqrt((float)144)=%f\n", sqrt((float)144));

    printf("sqrt(144.0)=%f\n", sqrt(144.0));

    printf("sqrt(144.0f)=%f\n", sqrt(144.0f));

    return 0;
}