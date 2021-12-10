class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    // Code here

	    vector<int> indegree(N, 0);

	    for(int i=0;i<pre.size();i++)
	        indegree[pre[i].second]++;

	       vector<int> adj[N];

	   for(int i=0;i<pre.size();i++)
	    adj[pre[i].first].push_back(pre[i].second);

	    queue<int> q;

	    for(int i=0;i<N;i++)
	    {
	        if(indegree[i]==0)
	            q.push(i);
	    }

	    int count=0;
	    while(!q.empty())
	    {
	        count++;
	        int x = q.front();
	        q.pop();

	        for(auto y:adj[x])
	        {
	            if(--indegree[y]==0)
	                q.push(y);
	        }
	    }

	    return (count==N);
	}
};
