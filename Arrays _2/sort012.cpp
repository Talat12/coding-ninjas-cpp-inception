// arr - input array
// n - size of array

#include<bits/stdc++.h> 
using namespace std; 

void swap(int *a, int *b);   //Function protoype written at first cause it's used in sort012 funtion

void sort012(int arr[], int n)  {  
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing output is handled automatically.
     */

    //Similar to DNF (Dutch National Flag Algorithm)

    int nZ = 0;
    int nT = n - 1;
    int i = 0;

    while(i <= nT)
    {
        switch (arr[i])
        {
        case 0:
            swap(&arr[nZ++], &arr[i++]);
            break;
        case 1:
            i++;
            break;
        case 2:
            swap(&arr[i], &arr[nT--]);
            break;
        
        default:
            break;
        }
    }
}

void swap(int *a, int *b) 

  //pointer points to the value pointed by the derefrenced array address
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
