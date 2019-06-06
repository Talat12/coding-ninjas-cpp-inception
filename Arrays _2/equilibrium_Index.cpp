// n - size of array
int equilibrium(int arr[], int n) {

    int rightSum = 0;
    int leftSum = 0;

    for(int i = 0; i < n; i++)
    rightSum += arr[i];

    for(int i = 0; i < n; i++) {
        rightSum -= arr[i];
        if(leftSum == rightSum)
            return i;
        leftSum += arr[i];
    }
    return -1;
}