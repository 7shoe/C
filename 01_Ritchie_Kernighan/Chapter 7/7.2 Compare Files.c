#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char path1[] = "file1.txt";
char path2[] = "file2.txt";


int main(){


    FILE * fp1;
    FILE * fp2;
    char * line1;
    char * line2;
    line1 = NULL;
    line2 = NULL;

    size_t len1, len2;
    len1 = 0;
    len2 = 0;
    ssize_t read1, read2;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");

    if((fp1 == NULL) && (fp2 == NULL)){
        printf("One is NULL!\n");
        exit(EXIT_FAILURE);
    }
       

    while (((read1 = getline(&line1, &len1, fp1)) != -1) && ((read2 = getline(&line2, &len2, fp2)) != -1)) {
        printf("Retrieved line of length %zu:\n", read1);
        printf("%s", line1);
    }

    fclose(fp1);
    if (line1)
        free(line1);
    
    fclose(fp2);
    if (line2)
        free(line2);
    
    exit(EXIT_SUCCESS);


    return 0;
}