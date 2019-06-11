#include<iostream>
using namespace std;
int arr[1000][1000];
void column_sum(int m, int n)
{
    int i, j, sum = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
        sum = 0;
    }
    
}

int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int i, j;
    int m, n;
    cin>>m>>n;
    int arr[m][n];

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
            
        

    
    column_sum(m, n);
  
}

//FDamn the code just won't work.


