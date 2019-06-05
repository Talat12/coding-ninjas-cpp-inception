// arr - arr array
// size - size of array
// x - sum of triplets

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
void FindTriplet(int arr[], int size, int x) {
    int i, j, k;
    for(i = 0; i < size - 2; i++)
    {
       for(j = i+1 ; j < size - 1 ; j++)
       {
           for(k = j+1 ; k < size ; k++)
           { 
               if(arr[i] + arr[j] + arr[k] == x)
               {
                int temp[3] = { arr[i], arr[j], arr[k] };
                sort (temp, 3);
                for(int k=0; k < 3; k++)
                {
                    cout<<temp[k]<<" ";
                }
                cout<<endl;
               }
           }
       } 
    }
}