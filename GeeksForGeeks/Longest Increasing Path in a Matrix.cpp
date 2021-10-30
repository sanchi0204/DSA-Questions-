int solve(vector<vector<int>>& matrix, int n, int m, int i, int j, vector<vector<int>>& dp, int prev)
    {
        if(i<0 || i>=n || j<0 || j>=m || matrix[i][j]<=prev)
            return 0;

        if(dp[i][j]!=-1)
            return dp[i][j];


        int up = solve(matrix,n,m,i-1,j,dp,matrix[i][j]);
        int down = solve(matrix,n,m,i+1,j,dp,matrix[i][j]);
        int left = solve(matrix,n,m,i,j-1,dp,matrix[i][j]);
        int right = solve(matrix,n,m,i,j+1,dp,matrix[i][j]);

        int mx=max(max(up,down), max(left,right));

        return dp[i][j]=1+mx;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix, int n, int m) {

        // Code here
        int longestPath = 0;
        vector<vector<int>> dp(n, vector<int>(m,-1));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                dp[i][j] = solve(matrix,n,m,i,j,dp,-1);
                longestPath = max(longestPath,dp[i][j]);
            }
        }


        return longestPath;
    }
};
