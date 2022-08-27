#include<stdio.h>

#define NUMBER 9179663456
#define NAME "Jane Doe"

struct telephone{
    char *name;
    long number;
};

// typedef
typedef struct telephone2{
		char *name;
		long number;
}TELEPHONE;

/* Why is there a different tag and typedef for the strcut?

typedef struct {
    link_t *next;
    void   *data;
} link_t;

ANSWER: There is a reason for using a different tag between the typedef and the struct -> 
        a fields in your struct is a pointer to an instance of the (very same) struct that is being defined; 
        since the statement isn't complete yet, you can't use the typedef name within the statement!

EXAMPLE



*/
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