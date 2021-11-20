class Solution
{
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int>> &matrix)
    {
        // code here
        int row = matrix.size();
        int col = matrix[0].size();
        bool firstRow = false;
        bool firstCol=false;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==1)
                {
                    if(i==0)
                        firstRow = true;

                    if(j==0)
                        firstCol = true;

                    matrix[i][0]= 1;

                    matrix[0][j]=1;
                }
            }
        }

        for(int i=1;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                if(matrix[i][0]==1 || matrix[0][j]==1)
                    matrix[i][j]=1;
            }
        }

        if(firstRow)
            for(int i=0;i<col;i++)
                matrix[0][i]=1;

        if(firstCol)
            for(int i=0;i<row;i++)
                matrix[i][0]=1;
    }
};
