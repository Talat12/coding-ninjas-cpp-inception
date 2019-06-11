// arr - input array
// n - size of array
#include <limits.h> 
#include<bits/stdc++.h> 
int FindSecondLargest(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    if(n < 2)
    {
        return INT_MIN;
    }

    int i, max, second_max;

    max = second_max = INT_MIN;

    for(i = 0; i < n; i++) 
        {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        }

        else if (arr[i] > second_max && arr[i] != max){
            second_max = arr[i];
        }
        }

    if(second_max == INT_MIN) {
        return max;
    }
    else {
        return second_max;
    }

}
