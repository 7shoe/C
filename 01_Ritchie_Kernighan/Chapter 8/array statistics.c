#include <stdio.h>
#include <math.h>


float scale(float data[]); 

int main(){
   int n, i;
   float sum = 0.0;
   float arr[]={-10.5,2.2,3,4,25.6,6,7,8,9.5};
   n=9;
   for(i=0; i<n; i++) {
      sum=sum+arr[i];
   }
   int armean=sum/n;
   printf("Arithmetic Mean = %.2f");
}

float mean(float data[]){
    float sum = 0.0, mean;
    for (int i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    
    return mean;
}

float scale(float data[]){
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
}