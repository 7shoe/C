#include<stdio.h>

#define NUMBER 9179663456
#define NAME "Jane Doe"

struct telephone
{
    char *name;
    int number;
};

int main()
{
    struct telephone index;

    index.name = NAME;
    index.number = NUMBER;
    printf("Name: %s\n", index.name);
    printf("Telephone number: %d\n", index.number);

    return 0;
}