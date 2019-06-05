#include <string.h>
void trimSpaces(char input[]) {
  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print or return the output.
   *  Change in the given input string itself.
   *  Taking input and printing output is handled automatically.
   */
int i, j;
char *output=input;

for(int i = 0, j = 0; i < strlen(input) + 1; i++, j++) 
    {
        if(input[i] != ' ')
        {   
            output[j] = input[i];
        }
        else
        {
            j--;
        }
        
    


    }
    output[j] = 0;
}

//doubt with the strlen(input) + 1 part