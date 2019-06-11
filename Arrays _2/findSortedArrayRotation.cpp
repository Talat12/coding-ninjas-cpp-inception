// arr - input array
// n - size of array
#include <limits.h> 
#include<bits/stdc++.h> 
int FindSortedArrayRotation(int arr[], int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int i, max, loc;
    max = INT_MIN;
    for(i = 0; i < n; i++) 
        {
            if(arr[i] >= max) {
                max = arr[i];
                loc = i;
            }
        }

    if(loc == n - 1) 
    {
        return n;
    }
    else
    {
        return loc + 1;
    }
    
    
}
