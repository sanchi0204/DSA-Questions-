class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        if(n==0)
            return 0;

        int dp[n+1][m+1];

        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
            }
        }

        int res=0;

        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(mat[i-1][j-1]==1)
                    {
                        dp[i][j]=1+min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
                    }

                else
                    dp[i][j]=0;

                res=max(res,dp[i][j]);
            }
        }

        return res;
    }
};
