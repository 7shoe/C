#include <stdio.h>
#include <string.h> 

/* print the table with the current 'X', 'O' locations */
void printTable(char * table){
    char field[300] = '\n- - - - - - - - - - - - - - -\n';
    for(int i=0; i < 9; ++i){
        sprintf(field, "|  %c  ", table[i]);
        if(i%3==0)
            strcat(field, "|\n- - - - - - - - - - - - - - -\n");
    }
    printf("%s\n", lines);
        printf("%c", table[i]); //  = '-'
}

/* initialize table with all '-' entrie */
char * initTable(){
    static char tab[] = "---------";

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

    t[4] = 'X';
    printTable(t);

    return 0;
}