class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	vector<int> topoSort(int V, vector<int> adj[])
	{
	    // code here
	    vector<int> indegree(V,0);
	    vector<int> res;

	    for(int i=0;i<V;i++)
	    {
	        for(int x:adj[i])
	            indegree[x]++;
	    }


	    queue<int> q;

	    for(int i=0;i<V;i++)
	    {
	        if(indegree[i]==0)
	            q.push(i);
	    }

	    while(q.empty()==false)
	    {
	        int u=q.front();
	        res.push_back(u);
	        q.pop();

	        for(int x:adj[u])
	        {
	            if(--indegree[x]==0)
	                q.push(x);
	        }
	    }

	    return res;
	}
};
