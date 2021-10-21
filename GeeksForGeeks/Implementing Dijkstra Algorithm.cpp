class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> dist(V,INT_MAX);
        dist[S]=0;

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,S});

        while(!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();

            for(auto it:adj[u])
            {
                int next = it[0];
                int distNext = it[1];

                if(dist[next]>dist[u]+distNext)
                    {
                        dist[next]=dist[u]+distNext;
                        pq.push({dist[next],next});
                    }
            }
        }

        return dist;

    }
};
