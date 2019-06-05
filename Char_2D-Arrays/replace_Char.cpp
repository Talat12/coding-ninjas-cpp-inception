#include<string.h>

void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */

    //replace c1 with c2
    
    int i = 0;
    int z;

    while(input[i]!=0){
        i++;
        z = i;
    }
    for(i = 0; i < z; i++) {
        if(input[i] == c1){
            input[i] = c2;
        }
    }
    
}