
void dfs(vector<vector<char>>& A, int i, int j)
{
    if(A[i][j]=='O')
    {
        A[i][j]='1';

        if(i>1)
            dfs(A,i-1,j);

        if(j>1)
            dfs(A,i,j-1);

        if(i+1<A.size())
            dfs(A,i+1,j);

        if(j+1<A[i].size())
            dfs(A,i,j+1);
    }
}
void Solution::solve(vector<vector<char> > &A) {

    int row=A.size();
    if(row==0)
        return;

    int col=A[0].size();

    if(row==1 && col==1)
        return;


    for(int i=0;i<row;i++)
    {
        dfs(A,i,0);
        dfs(A,i,col-1);
    }

    for(int j=0;j<col;j++)
    {
        dfs(A,0,j);
        dfs(A,row-1,j);
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(A[i][j]=='O')
                A[i][j]='X';

            else if(A[i][j]=='1')
                A[i][j]='O';
        }
    }
}
