#include <stdio.h>
#include <string.h>



union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Data data;        

   printf( "Memory size occupied by data : %d\n", sizeof(data));   

    // set members of Union 
   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);  // final value assigned to the variable has occupied the memory location --> corrupts data.f
   printf( "data.str : %s\n", data.str);

    // non-corrupted print

   return 0;
}