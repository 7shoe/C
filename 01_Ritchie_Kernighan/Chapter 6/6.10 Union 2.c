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

// simple union
union Job {
   float salary;
   int workerNo;
} j;

int main(){

    printf("size of union = %d bytes\n", sizeof(uJob));
    printf("size of structure = %d bytes\n\n", sizeof(sJob));


    j.salary = 12.3;

    // when j.workerNo is assigned a value,
    // j.salary will no longer hold 12.3
    j.workerNo = 100;

    printf("Salary = %.1f\n", j.salary);
    printf("Number of workers = %d", j.workerNo);
    
    return 0;

}