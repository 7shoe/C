#include <math.h>
#include <stdio.h>

int main(){

    // all return non-sense for %d & work for %f, otherwise
    printf("sqrt(144)=%.1f\n", sqrt(144)); // returns (non-sense) for %d:  sqrt(144)=-1074792800

    printf("sqrt((double)144)=%.1f\n", sqrt((double)144));

    printf("sqrt((float)144)=%.1f\n", sqrt((float)144));

    printf("sqrt(144.0)=%.1f\n", sqrt(144.0));

    printf("sqrt(144.0f)=%.1f\n", sqrt(144.0f));

    // equally works: convert output to (int) if print with %d
    printf("(int)sqrt(144)=%d\n", (int)sqrt(144)); // returns (non-sense) for %d:  sqrt(144)=-1074792800

    printf("sqrt((double)144)=%d\n", (int)sqrt((double)144));

    printf("sqrt((float)144)=%d\n", (int)sqrt((float)144));

    printf("sqrt(144.0)=%d\n", (int)sqrt(144.0));

    printf("sqrt(144.2f)=%d\n", (int)sqrt(2.25f));  // conversion even when non-integer output (int) just rounds

    // Round through (int)
    double x1 = 12.5678923675;

    printf("(int)x = %d", (int)x1);
    

    return 0;
}