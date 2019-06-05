// arr - input array
// n - size of array

void SortZeroesAndOne(int arr[], int n){
    int i, j, k, l;
    int count_Zero = 0, count_One = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == 0)
            count_Zero++;
        else
        {
            count_One++;
        }
    }

    for(k = 0; k < count_Zero; k++)
    {
        arr[k] = 0;
       
    }
    
    for(k = count_Zero ; k < n; k++)
    {
        arr[k] = 1;
    }
}