#include<bits/stdc++.h>
using namespace std;

void sort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[min])
            min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Save the merged array in ans[] array passed as argument.
     * Don't return or print anything.
     * Taking input and printing output is handled automatically.
     */
    
    int  size3 = size1 + size2;
    for(int i = 0; i < size1 ; i++) {
        ans[i] = arr1[i];
    }

    for(int i = 0; i < size2; i++) {
        ans[i+size1] = arr2[i];   
    }
    
    sort(ans,ans+size3);
}
