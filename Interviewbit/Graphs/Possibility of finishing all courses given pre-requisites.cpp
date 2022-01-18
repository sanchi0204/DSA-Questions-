int Solution::solve(int A, vector<int> &B, vector<int> &C) {

    vector<int> indegree(A,0);
    queue<int> q;

    vector<int> adj[A];

    for(int i=0;i<B.size();i++)
    adj[B[i]-1].push_back(C[i]-1);

    for(int i=0;i<A;i++)
    {
        for(int x:adj[i])
            indegree[x]++;
    }

    for(int i=0;i<A;i++)
    if(indegree[i]==0)
        q.push(i);

    int count=0;
    while(!q.empty())
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

   return (count==A);

}
