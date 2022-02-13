vector<int> Solution::solve(vector<vector<int> > &A) {

    priority_queue<pair<int, pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int, pair<int,int>>>>pq;

    for(int i=0;i<A.size();i++)
        pq.push({A[i][0], {0,i}});

    vector<int> res;
    while(pq.empty()==false)
    {
        auto curr = pq.top();
        pq.pop();

        res.push_back(curr.first);

        int vp=curr.second.first;
        int ap=curr.second.second;

        if(vp+1<A[ap].size())
        {
            pq.push({A[ap][vp+1], {vp+1,ap}});
        }

    }

    return res;
}
