class Solution {
  public:
    // Function to detect cycle in an undirected graph.

    bool DFS(int s, vector<int> adj[], vector<int>& vis, int parent)
    {
        vis[s]=1;

        for(int x:adj[s])
        {
            if(vis[x]==0)
            {
            if(DFS(x,adj,vis,s)==true)
                return true;
            }
            else if(x!=parent)
                return true;
        }

        return false;
    }

    bool isCycle(int V, vector<int> adj[]) {
        // Code here

       vector<int> vis(V,0);

       for(int i=0;i<V;i++)
       {
           if(vis[i]==0)
           {
           if(DFS(i,adj,vis,-1)==true)
                return true;
           }
       }


       return false;
    }
};
