vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    // Code here

    vector<int> vis(V,0);
     queue<int> q;
   vector<int> res;

    vis[0]=1;
  q.push(0);

  while(q.empty()==false)
  {
      int u=q.front();
      res.push_back(u);
      q.pop();

      for(int x:adj[u])
      {
          if(vis[x]==0)
          {
              vis[x]=1;
            q.push(x);
          }
      }
  }

  return res;
}
};
