// arr - input array
// n - size of array



void PushZeroesEnd(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to return or print the output.
     * Taking input and printing output is handled automatically.
     */
int count = 0;
for(int i = 0; i < n; i++) 
    {
        if(arr[i] != 0) {
            arr[count++] = arr[i];
        }

        
        
    }

    while ( count < n)
        arr[count++] = 0;
}