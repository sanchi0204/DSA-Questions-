Solution
{
    public:

    //Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here

        int row=grid.size();
        int col = grid[0].size();
        int totalOranges=0;
        int days=0;
        int count=0;

        queue<pair<int,int>> rotten;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {

                if(grid[i][j]!=0)
                    totalOranges++;

                if(grid[i][j]==2)
                    rotten.push({i,j});

            }
        }

        int dx[]={0,0,-1,1};
        int dy[]={-1,1,0,0};

        while(rotten.empty()==false)
        {
            int k=rotten.size();
            count+=k;

            while(k--)
            {
                auto curr=rotten.front();
                rotten.pop();

                for(int i=0;i<4;i++)
                {
                    int x=dx[i]+curr.first;
                    int y=dy[i]+curr.second;

                    if(x<0 || x>=row || y<0 || y>=col || grid[x][y]!=1)
                        continue;

                    grid[x][y]=2;
                    rotten.push({x,y});
                }
            }

            if(rotten.empty()==false)
                days++;
        }

        return (count==totalOranges? days : -1);
    }
};
