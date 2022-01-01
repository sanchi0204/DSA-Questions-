class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x)
    {
        // code here

        if(n==0)
            return false;


        if(matrix[0][0]>x || matrix[n-1][m-1]<x)
            return false;

          int row=0;
        int col=m-1;

        while(row<n && col>=0)
        {
            if(matrix[row][col]>x)
                col--;

            else if(matrix[row][col]<x)
                row++;

            else
                return true;
        }

        return false;

    }
};
