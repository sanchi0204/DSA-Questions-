class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {

        // code here
    vector<int> indegree(V,0);

    for(int i=0;i<V;i++)
    {
        for(int x:adj[i])
        {
            indegree[x]++;
        }
    }

    queue<int> q;

    for(int i=0;i<V;i++)
        if(indegree[i]==0)
            q.push(i);

     int count=0;
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();

        for(int x:adj[u])
        {
            if(--indegree[x]==0)
                q.push(x);
        }

        count++;
    }

        return (count!=V);
    }
};
