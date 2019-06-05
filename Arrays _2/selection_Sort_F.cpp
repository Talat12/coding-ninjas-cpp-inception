// arr - input array
// n - size of array
void SelectionSort(int a[], int n) {
	// Write your code here
int i,temp,j, min, loc;

for (i= 1; i <= n - 1; i++)
{ 
    min = a[i-1];
    for (j = i; j < n-1; j++)
    {
        if (a[j] < min)
        {
            min = a[j];
            loc = j;
        } 
    }

    if(loc!=i-1)
    {
    temp = a[i-1];
    a[i-1] = a[loc];
    a[loc] = temp;}
}

}
//test cases not matching