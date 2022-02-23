int Solution::searchMatrix(vector<vector<int> > &A, int B) {

    int row=A.size();
    int col=A[0].size();

    int x=0;
    int y=col-1;

    if((A[0][0]>B) || (A[row-1][col-1]<B))
        return 0;

   while(x<row && y<col)
   {
       if(A[x][y]==B)
        return 1;

        else if(A[x][y]>B)
            y--;

        else
            x++;
   }

   return 0;

}
