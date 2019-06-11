// arr - input array
// size - size of array
// d - array to be rotated by d elements

void Rotate(int arr[], int d, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing the output is handled automatically.
     */

int temp[d-1];
for(int i = 0; i < d; i++)
{
    temp[i] = arr[i];
}

for(int j = 0, i = d; j < size - d; j++, i++)
   {
       arr[j] = arr[i];
   }

for(int i = 0, j = size - d; i < d; i++, j++) {
    arr[j] = temp[i];
}
    
}	
