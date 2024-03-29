class Solution {
  public:
    long long int numberOfPaths(int m, int n){
        // code here
        int dp[m][n];

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=1;

                else
                    dp[i][j]=(dp[i-1][j]+dp[i][j-1])%1000000007;
            }
        }

        return dp[m-1][n-1];
    }
};
