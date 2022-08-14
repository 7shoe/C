#include <math.h>
#include <stdio.h>

int main(){

    // all return non-sense for %d & work for %f, otherwise
    printf("sqrt(144)=%.1f\n", sqrt(144)); // returns (non-sense) for %d:  sqrt(144)=-1074792800

    printf("sqrt((double)144)=%.1f\n", sqrt((double)144));

    printf("sqrt((float)144)=%.1f\n", sqrt((float)144));

    printf("sqrt(144.0)=%.1f\n", sqrt(144.0));

    printf("sqrt(144.0f)=%.1f\n", sqrt(144.0f));

    return 0;
}