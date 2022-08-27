#include<stdio.h>

#define NUMBER 9179663456
#define NAME "Jane Doe"

struct telephone
{
    char *name;
    int number;
};

// typedef
typedef struct telephone2{
		char *name;
		int number;
}TELEPHONE;


int main()
{
    // (1) struct
    struct telephone index;
    index.name = NAME;
    index.number = NUMBER;
    printf("Name: %s\n", index.name);
    printf("Telephone number: %d\n", index.number);

    // (2) typedef (of a struct)
    TELEPHONE index;

    index.name = NAME;
    index.number = NUMBER;
    printf("Name: %s\n", index.name);
    printf("Telephone number: %d\n", index.number);

    return 0;
}