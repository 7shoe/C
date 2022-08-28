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

// will NOT work: link_t is unknown when the member pointer link_t *next; is being defined.
typedef struct {
    link_t *next;
    void   *data;
} link_t;

// WILL WORK
typedef struct LL {
    struct LL *next;
    void      *data;
} link_t;

WHY DOES IT MATTER?
Likely, for trees (every struct node points to one or more child  nodes) or linked lists (list element points to neighbors) a member (i.e. an element called "node"/"element")
points to another element. This association is best represented by a pointer of that type. Difference between struct typedef and struct tag allows this relationship.

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