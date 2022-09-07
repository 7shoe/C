#include <stdio.h>
#include <assert.h>
#include <string.h> 

char tab[10];

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

    memset(out, 0, sizeof(out));
}

/* initialize table with all '-' entrie */
char * initTable(){
    strcpy(tab, "123456789");

    return tab;
} 

/* set i-th entry in table */
void setEntry(char symbol, int index, char * table){
    assert((symbol=='X') || (symbol=='O'));
    assert((index < 9) || (index >= 0));
    if((table[index]!='X') && (table[index]!='O'))
        table[index] = symbol;
}

/* check for winner */
int checkForWinner(char * table){
    // All possibilities of a match: 0,1,2;  3,4,5;  6,7,8;  0,3,6;  1,4,7;  2,5,8;  0,4,8;  2,4,6
    // check horizontal
    for(int i=0; i < 9; i+=3){
        if((table[i]!= '-') && (table[i]==table[i+1]) && (table[i+1]==table[i+2]))
            return 0;
    }
    // check vertical
    for(int i=0; i < 2; ++i){
        if(((table[i]!= '-') && table[i]==table[i+3]) && (table[i+3]==table[i+6]))
            return 0;
    }
    // check diagonal
    if((table[0]!= '-') && (table[0]==table[4]) && (table[4]==table[8]))
        return 0;
    // check anti-diagonal
    if((table[2]!= '-') && (table[2]==table[4]) && (table[4]==table[6]))
        return 0;
    
    return -1;
}
/* check if game is over */


/* read integer for targeted entry move */ 



int main(){


    /* 
    Tic Tac Toe
     - 3x3 table, each state has state 'X', 'O', or '-'
     - each round: player ('X') chooses one of the remaining cells labelled '-'
     - opponent ('O') chooses of one remaining '-' 
    */

    char * t = initTable();

    while(checkForWinner(t) == -1){

    }

    printTable(t);

    setEntry('X', 2, t);

    //printTable(t);
    //setEntry('O', 0, t);
    printf("X as int: %d\n", 'X' - '0');
    printf("O as int: %d\n", 'O' - '0');

    return 0;
}