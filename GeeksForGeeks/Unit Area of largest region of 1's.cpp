class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void DFS(int i, int j, vector<vector<int>>& grid, int row, int col, int &mA)
    {
        if(i<0 || i>=row || j<0 || j>=col || grid[i][j]!=1)
            return;

        grid[i][j]=2;
        mA++;

        DFS(i+1,j,grid,row,col,mA);
        DFS(i,j+1,grid,row,col,mA);
        DFS(i-1,j,grid,row,col,mA);
        DFS(i,j-1,grid,row,col,mA);
        DFS(i+1,j+1,grid,row,col,mA);
        DFS(i+1,j-1,grid,row,col,mA);
        DFS(i-1,j-1,grid,row,col,mA);
        DFS(i-1,j+1,grid,row,col,mA);
    }


    int findMaxArea(vector<vector<int>>& grid) {
        // Code here

        int row=grid.size();
        int col = grid[0].size();
        int res = INT_MIN;

        for(int i=0;i<row;i++)
        {

            for(int j=0;j<col;j++)
            {
                int maxArea=0;

                if(grid[i][j]==1)
                {
                    DFS(i,j,grid,row,col,maxArea);
                    res = max(res,maxArea);
                }

            }
        }

        return res;
    }
};
