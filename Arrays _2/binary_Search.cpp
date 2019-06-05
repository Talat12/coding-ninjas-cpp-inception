// arr - input array
// n - size of array
// val - element to be searched
int BinarySearch(int arr[], int n, int val){	
    
    int first =0;
    int last =n - 1;
    int mid = (first + last)/2;
    while(first<=last)
    {
        if(arr[mid] < val)
        {
            first = mid +1;
        }
        
        else if(arr[mid] == val)
        {
            return mid;
        }
        
        else
        {
            last = mid - 1;
        }
        
        mid = (first + last)/2;
    }
    
    if(first > last)
    {
        return -1;
    }
    return 0;
}