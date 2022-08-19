#include <stdio.h>
#include <string.h>

/* return rightmost occurence of char t in text s*/
int strindex(char s[], char t, int n){
    for(int i=n-1; i >= 0; --i){
        if(s[i]==t)
            return i;
    }
    return -1;
}

/* Print text with newline whenever 'ing' shows up. */
void printLines(char text[], char pat[], int n, int k){

    int i, match, new_n, matchCount;

    new_n = n + (int)((float)n / k); 
    char newText[new_n];

    // start
    i = 0;
    matchCount = 0;
    while(i < n){
        match = 1;
        // check match
        for(int j=0; j < k; ++j){
            if(text[i+j+matchCount] != pat[j]){
                match = 0;
                break;
            }
        }
        // match! --> insert
        if(match){
            newText[i] = '\n';
            i++;
            for(int j=0; j < k; ++j){
                newText[i+j+matchCount] = pat[j];
            }
            matchCount++;
        }else{
            newText[i+matchCount] = text[i];
        }
        i++;
    }
    
    newText[i] = '*';

    // print
    i = 0;
    printf("New Text:\n");
    while(newText[i] != '*'){
        printf("%c", newText[i]);
        i++;
    }
    printf("\n- - - - - - - - - - - - - - - - -");
}



dummy() {}


int main(){



    char t[91] = {'H','e','l','l','o',' ','D','a','r','l','i','n','g',' ',' ','h','o','w',' ','a','r','e',' ','y','o','u',' ','d','o','i','n','g',' ',' ',
    'W','a','s',' ','i','t',' ','m','y',' ','d','o','i','n','g',' ',' ','O','r',' ','w','a','s',' ','i','t',' ','y','x','u','r',' ','d','o','i','n','g',' ',
    ' ','I','m',' ','d','o','i','n','g',' ','.','.','.',' ','f','i','n','x','.'};

    char p[3] = {'i', 'n', 'g'};

    //printLines(t, p, 91, 3);

    /* empty function; does nothing. No output type given -> int assumed.*/
    // dummy();

    printf("Found at index: %d", strindex(t, 'x', 91));


    return 0;
}