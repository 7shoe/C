#include <stdio.h>
#include <string.h> 

/* print the table with the current 'X', 'O' locations */
void printTable(char * table){
    char out[1024];
    char tmp[100];
    char startLine[1024] = "\n| - - - - | - - - - | - - - - |\n";
    char endLine[36] = "|\n| - - - - | - - - - | - - - - |\n";

    //printf("%s\n", out);
    strcat(out, startLine);
    for(int i=0; i < 9; ++i){
        sprintf(tmp, "|    %c    ", table[i]);
        strcat(out, tmp);
        memset(tmp, 0, sizeof(tmp));
        // new line
        if(i%3==2){
            strcat(out, endLine);     
        }
    }
    printf("%s", out); 
}

/* initialize table with all '-' entrie */
char * initTable(){
    static char tab[] = "123456789";

    return tab;
} 




int main(){


    /* 
    Tic Tac Toe
     - 3x3 table, each state has state 'X', 'O', or '-'
     - each round: player ('X') chooses one of the remaining cells labelled '-'
     - opponent ('O') chooses of one remaining '-' 
    */

    char * t = initTable();

    printTable(t);

    return 0;
}