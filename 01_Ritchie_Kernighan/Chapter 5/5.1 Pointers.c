#include <stdio.h>




int main(){

    int x, y, z;   // ints
    int *ip, *jp;  // define i(nteger) pointers
    void * ptr;    // pointer with not type
    int* kp;
    int* lp = &z;  

    // define variables
    x = -7;
    y = 10;
    z = 29;

    // dereference
    ip = &x;
    jp = &y;
    kp = &z;

    // adress via &
    printf("&x : %p\n", &x);
    printf("&y : %p\n\n", &y);

    // adress via pointer
    printf("ip : %p\n", ip);
    printf("jp : %p\n\n", jp);

    // Experiment 1: Assign values to value via *pointer
    // *ip += 1
    printf("*ip : %d\n", *ip);
    printf("*ip += 1;\n");
    *ip += 1;
    printf("*ip : %d\n\n", *ip);

    // Experiment 2: Assign value to variable to which pointer points
    // x+=1;
    x+=1;
    printf("x+=1;\n");
    printf("*ip : %d\n\n", *ip);


    // Experiment 3: Assign pointer with 3rd var
    printf("*ip : %d\n", *ip);  //  ip -> x
    printf("*jp : %d\n", *jp);  //  jp -> y
    *ip = *jp;                  //  x <- *ip = *jp -> y
    printf("*ip = *jp;\n");    
    printf("*ip : %d\n", *ip);  // y
    printf("*jp : %d\n", *jp);  // y
    printf("x : %d\n", x);      // x
    printf("y : %d\n\n", y);      // y

    // Experiment 4: Set value of a to b (a:=b) via pointers only
    int *pt;
    int a = 666, b = 777;
    pt = &b;
    // *pt = a;                   // change content of adress of pt to a --> a=666, b=666
    // a = *pt;                   // change value of a to the value of the content the pointer pt is pointing at --> a=777, b=777
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    // Experiment 5: Set value of array via pointer
    int arr[18] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int *pt_arr = &arr[0];   // Int pointer 32 birs (4 bytes) --> pt_arr++ increments memory adress by 4!

    // set values with pointer
    for(int i = 0; i < 18; ++i){
        *pt_arr = i+1;
        pt_arr++;
    }

    // read out values of array
    for(int i = 0; i < 18; ++i){
        printf("%p, arr[%d] : %d\n", &arr[i], i, arr[i]);
    }

    printf("\n");

    // Experiment 6: swap values of a and b via pointer
    int c = 0, d = 1, e = -7;
    int *swap_ptr;
    swap_ptr = &c;
    e = *swap_ptr;
    *swap_ptr = d;
    d = e;

    printf("c=%d\n", c);
    printf("d=%d\n", d);









    return 0;
}