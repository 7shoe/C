#include <stdio.h>


// (!) TL;DR: Structures allocate enough space to store all their members, whereas unions can only hold one member value at a time.

union unionJob
{
   //defining a union
   char name[32];
   float salary;
   int workerNo;
} uJob;                      // so, oversll, as the MAX(32, 4, 4) -> 32 bytes
 
struct structJob
{
   char name[32];       // 32 bytes
   float salary;        //  4 bytes
   int workerNo;        //  4 bytes
} sJob;                       // so, oversll as the sum, 40 bytes


int main(){

    printf("size of union = %d bytes", sizeof(uJob));
    printf("\nsize of structure = %d bytes", sizeof(sJob));
    
    return 0;

}