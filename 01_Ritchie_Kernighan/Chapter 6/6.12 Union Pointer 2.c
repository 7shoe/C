#include <stdio.h>

union u
{
    int i;
    float f;
};

int someFunc(union u * up, float *fp)
{
    up->i = 123;
    *fp = 2.0;     // does this set the union member?
    return up->i;  // then this should not return 123!
}

int main(int argc, char **argv)
{
    union u uobj;
    printf("%d\n", someFunc(&uobj, &uobj.f));
    return 0;
}