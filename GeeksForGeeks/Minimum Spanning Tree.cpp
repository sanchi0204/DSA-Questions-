class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        int key[V];
        bool mst[V];
        // int parent[V];

        for(int i=0;i<V;i++)
        {
            key[i]=INT_MAX;
            mst[i]=false;
        }

        key[0]=0;
        // parent[0]=-1;

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        pq.push({0,0});

        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();

            mst[u]=true;

            for(auto it:adj[u])
            {
                int v = it[0];
                int wt = it[1];

                if(mst[v]==false && key[v]>wt)
                {
                    key[v]=wt;
                    //parent[v]=u;
                    pq.push({key[v],v});
                }


            }
        }


        int cost=0;
        for(int i=0;i<V;i++)
            cost+=key[i];


        return cost;


    }
};
