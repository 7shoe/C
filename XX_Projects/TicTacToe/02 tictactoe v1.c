#include <stdio.h>
#include <assert.h>
#include <string.h> 

/* print the table with the current 'X', 'O' locations */
void printTable(char * table){
    char out[1024];
    char tmp[100];

    strcat(out, "\n| - - - - | - - - - | - - - - |\n");
    for(int i=0; i < 9; ++i){
        sprintf(tmp, "|    %c    ", table[i]);
        strcat(out, tmp);
        memset(tmp, 0, sizeof(tmp));
        // new line
        if(i%3==2){
            strcat(out, "|\n| - - - - | - - - - | - - - - |\n");     
        }
    }
    printf("%s", out); 
}

/* initialize table with all '-' entrie */
char * initTable(){
    static char tab[] = "123456789";

    return tab;
} 

/* set i-th entry in table */
void setEntry(char symbol, int index, char * table){
    assert((symbol=='X') || (symbol=='O'));
    assert((index < 9) || (index >= 0));
    if((table[index]=='X') || (table[index]=='O'))
        table[index] = symbol;
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