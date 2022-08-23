#include <stdio.h>
#include <string.h>


#define MAXLINES 1000
char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(void *lineptr[], int left, int right, int (*comp)(void *, void *));
int numcmp(char *, char *);


int main(int argc, char *argv[]){
    int nlines;
    int numeric = 0;

    if(argc > 1 && strcmp(argv[1], "-n") == 0)
        numeric = 1;
    if((nlines = readliines(lineptr, MAXLINES)) >= 0){
        qsort(void **) lineptr, 0, nlines -1, 
            (int (*)(void *, void *)(numeric ? numcmp : strcmp));
            return 0;
    }else{
        printf("input too big to sort\n");
        return 1;
    }
}