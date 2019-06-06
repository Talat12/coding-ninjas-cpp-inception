// input - given string
// Update in the given input itself. No need to return or print anything
void reverse(char input[], int start, int end) {
int x = start, y = end;
while(x < y) {
    char temp = input[x];
    input[x] = input[y];
    input[y] = temp;
    x++;
    y--;
}
}
void reverseEachWord(char input[]) {
   int start = 0, end = 0, i;
   for(i = 0; input[i] != '\0'; i++) {
       if(input[i] == ' '){
           end = i - 1;
           reverse(input, start, end);
           start = i + 1;
       }
   }
   end = i - 1;
   reverse(input, start, end);
}