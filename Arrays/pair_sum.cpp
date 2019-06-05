void pairSum(int input[], int size, int x) {
int i, j;
    for(i = 0; i < size ; i++)
    {
       for(j = i + 1; j <= size - 1; j++)
       {
           if(input[i] + input[j] == x)
           {
               if(input[i] < input[j])
               {
                   cout<<input[i]<<" "<<input[j];
               }
               else
               {
                   cout<<input[j]<<" "<<input[i];
               }
               cout<<endl;
           }

       } 
    }
}