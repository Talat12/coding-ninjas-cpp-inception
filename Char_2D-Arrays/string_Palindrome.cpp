
bool checkPalindrome(char str[]){


  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */

int i = 0;
    int z;

    while(str[i]!=0){
        i++;
        z = i;
    }
int y = z -1;

    for(int i = 0; i < z; i++) {
        if (str[i] == str[y]){
            y--;
        }
        else
        {
            return false;
        }
        
    }
    return true;
    
}