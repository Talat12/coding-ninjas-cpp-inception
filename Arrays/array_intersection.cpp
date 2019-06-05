// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array

void intersection(int input1[], int input2[], int size1, int size2) {
    int i, j, m, n;
    n = size1;
    m = size2;

    for(i = 0; i< n; i++) {
        for(j = 0 ; j< m; j++) {
            if(input1[i] == input2 [j]) {
                cout << input1[i] <<endl;
                    input2[j] = -1;
                    break;
            }
        }
    }
}