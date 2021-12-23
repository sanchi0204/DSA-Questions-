class Solution{
public:

void dfs(vector<vector<char>>& mat, int i, int j, int row, int col)
{
    if(mat[i][j]=='O')
    {
        mat[i][j]='1';

        if(i+1<row)
            dfs(mat,i+1,j,row,col);

        if(i>1)
            dfs(mat,i-1,j,row,col);

        if(j+1<col)
            dfs(mat,i,j+1,row,col);

        if(j>1)
            dfs(mat,i,j-1,row,col);
    }
}

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        if(n==0)
            return {{}};

        for(int i=0;i<n;i++)
        {
            dfs(mat,i,0,n,m);
            dfs(mat,i,m-1,n,m);
        }

        for(int j=0;j<m;j++)
        {
            dfs(mat,0,j,n,m);
            dfs(mat,n-1,j,n,m);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='O')
                    mat[i][j]='X';

                else if(mat[i][j]=='1')
                    mat[i][j]='O';
            }
        }

        return mat;
    }
};
