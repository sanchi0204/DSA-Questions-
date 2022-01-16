int checkLPS(string A, string B)
{
    int m=A.length();

    int dp[m+1][m+1];

    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
        }
    }


    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(A[i-1]==B[j-1] && i!=j)
                dp[i][j]=1+dp[i-1][j-1];

            else
            dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }

    return dp[m][m];
}

int Solution::anytwo(string A) {

    int val = checkLPS(A,A);

    if(val>1)
        return true;

    return false;
}
