
bool help(vector<int>& A, int B)
{
    int n=A.size();
    bool t[n+1][B+1];

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<B+1;j++)
        {
            if(i==0)
                t[i][j]=false;

            if(j==0)
                t[i][j]=true;
        }
    }

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<B+1;j++)
        {
            if(A[i-1]<=j)
                t[i][j]=t[i-1][j-A[i-1]] || t[i-1][j];

            else
                t[i][j]=t[i-1][j];
        }
    }

    return t[n][B];
}
int Solution::solve(vector<int> &A, int B) {

    return help(A,B);
}
