#include<std>

int main(){
   int n, i, sum=0;
   int arr[]={1,2,3,4,5,6,7,8,9};
   n=9;
   for(i=0; i<n; i++) {
      sum=sum+arr[i];
   }
   int armean=sum/n;
   cout<<"Arithmetic Mean = "<<armean;
}