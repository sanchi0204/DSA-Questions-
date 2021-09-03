class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.

    void DFS(int s, vector<int>& vis, vector<int> adj[], vector<int>& res)
    {
        vis[s]=1;
        res.push_back(s);

    for(int x:adj[s])
    {
        if(vis[x]==0)
        {
            DFS(x,vis,adj,res);
        }
    }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here

        vector<int> vis(V,0);
        vector<int> res;

        DFS(0,vis,adj,res);

        return res;
    }
};
