#include <stdio.h>
#include <string.h>


// Union vs. struct
// - union: uses memory of the largest of its member (e.g. 20 bytes for str[20]) --> all stored at the same spot
// - struct: uses memory as the sum of all its members --> seperate memory location for each member

// Use
// - union: store one thing (but a-priori unknown of what type it will be)
// - struct: compounded datatype, only used when each entry is accessed
// (!) when writing a program, you should never rely on the behavior of overwriting specific data in a union because it's not portable.

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

    // non-corrupted printf: assign one member at a time
    data.i = 10;
   printf( "data.i : %d\n", data.i);
   
   data.f = 220.5;
   printf( "data.f : %f\n", data.f);
   
   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);

   return 0;
}