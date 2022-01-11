void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int row=A.size();
    if(row==0)
        return;
    int col=A[0].size();

    for(int i=0;i<row;i++)
    {
        for(int j=i+1;j<col;j++)
        {
            swap(A[i][j],A[j][i]);
        }
    }

   for(int i=0;i<row;i++)
   {
       int start = 0;
       int end = col-1;

       while(start<end)
       {
           swap(A[i][start], A[i][end]);
           start++;
           end--;
       }
   }


}
