int Solution::solve(vector<int> &A, vector<int> &B, int C) {

    int n=A.size();
    int t[n+1][C+1];

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<C+1;j++)
        {
            if(i==0 || j==0)
                t[i][j]=0;
        }
    }

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<C+1;j++)
        {
            if(B[i-1]<=j)
                t[i][j]=max(t[i-1][j-B[i-1]]+A[i-1], t[i-1][j]);

            else
                t[i][j]=t[i-1][j];
        }
    }

    return t[n][C];
}
