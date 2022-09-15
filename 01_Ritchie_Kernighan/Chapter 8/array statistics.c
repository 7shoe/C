#include <stdio.h>

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