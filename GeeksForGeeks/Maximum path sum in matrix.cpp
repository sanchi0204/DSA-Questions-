class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int row=Matrix.size();
        int col=Matrix[0].size();

        int dp[row][col];

        int res =INT_MIN;

        for(int i=0;i<col;i++)
        {
            dp[0][i]=Matrix[0][i];

            res=max(res,dp[0][i]);
        }




        for(int i=1;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(j==0)
                    dp[i][j]=Matrix[i][j]+max(dp[i-1][j+1], dp[i-1][j]);

                else if(j==col-1)
                    dp[i][j]=Matrix[i][j]+max(dp[i-1][j-1], dp[i-1][j]);

                else
                    dp[i][j]= Matrix[i][j]+max(dp[i-1][j], max(dp[i-1][j-1], dp[i-1][j+1]));

                res = max(res,dp[i][j]);
            }
        }

        return res;
    }
};
