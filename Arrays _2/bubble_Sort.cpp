// arr - input array
// n - size of array

#include<bits/stdc++.h>
using namespace std;


void BubbleSort(int arr[], int n){
	// Write your code here
/*sort(arr,arr+n);*/
   for(int r = 0; r< n -1; r++){ 
    for(int i=0;i< n -1;i++){
        if(arr[i] > arr[i+1]){
            //swap
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
   }
   
}