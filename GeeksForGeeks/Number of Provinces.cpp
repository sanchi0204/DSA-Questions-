class Solution {
  public:

  void dfs(int V,vector<int> ad[], vector<bool>& vis, int s)
  {
      vis[s]=true;

      for(auto x:ad[s])
      {
          if(vis[x]==false)
          {
              dfs(V,ad,vis,x);
          }

      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here

        vector<int> ad[V];

        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j]==1)
                    {
                        ad[i].push_back(j);
                        ad[j].push_back(i);
                    }

            }
        }

        vector<bool> vis(V,false);
        int count=0;

        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
                {
                    dfs(V,ad,vis,i);
                    count++;
                }
        }

        return count;
    }
