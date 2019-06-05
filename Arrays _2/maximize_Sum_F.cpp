long maxPathSum(int ar1[], int ar2[], int m, int n)
{
    int maxSum = 0;
    int s1 = 0, s2 = 0;
    int i = 0, j = 0;
    int x, z;
    if( m > n){
        x = n;
        z = m - x;
    }
    else
    {
        x = m;
        z = n - x;
    }
    
    for(int y = 0; y < x; y++){
        
            if( ar1[i] < ar2[i] && ar1[i] != ar2[j] ){
                s1+=ar1[i];
                i++;
            }
            else if(ar1[i] != ar2[j])
            {
                s2+=ar2[j];
                j++;
            }

            else if(ar1[i] == ar2[j])
            {
                if(s1 > s2)
                {
                    maxSum = s1;
                    s1 = 0;
                    s2 = 0;
                }
                else
                {
                    maxSum = s2;
                    s1 = 0;
                    s2 = 0;
                }
                
            }
            
        
    }

    for(int y = 0; y < z; y++) {    
        if( m > n){
            maxSum+=ar1[x];
            x++;
        }
        else
        {
            maxSum+=ar2[x];
            x++;
        }
        
    }

return maxSum;

}
