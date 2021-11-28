class Solution{
public:

    bool isPalindrome(string str, int start, int end)
{
    while(start<=end)
    {
        if(str[start]!=str[end])
            return false;

        start++;
        end--;
    }

    return true;
}
    int findPartitions(string& str, int start, int end, int dp[501][501])
    {
        if(start>=end)
            dp[start][end]=0;

        if(isPalindrome(str,start,end))
            dp[start][end]=0;

        if(dp[start][end]!=-1)
            return dp[start][end];

            int ans=INT_MAX;

        for(int k=start;k<=end;k++)
        {
            if(isPalindrome(str,start,k))
            {
                int temp=findPartitions(str,k+1,end,dp);
                ans = min(ans,temp+1);
            }
        }

        return dp[start][end]=ans;
    }
    int palindromicPartition(string str)
    {
        // code here
        int start=0;
        int end=str.length()-1;
        int dp[501][501];

        for(int i=0;i<end+1;i++)
        {
            for(int j=0;j<end+1;j++)
            {
                dp[i][j]=-1;
            }
        }

        return findPartitions(str,start,end,dp);
    }
};
