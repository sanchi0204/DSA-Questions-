vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {

    int n=A.size();

    if(n<B)
        return {-1};

    if(n==1)
        return {A[0]};

    deque<pair<int,int>> dq;
    vector<int> v;

    for(int i=0;i<B;i++)
    {
        while(dq.empty()==false && dq.back().first<=A[i])
            dq.pop_back();

        dq.push_back({A[i],i});
    }

    for(int i=B;i<A.size();i++)
    {
        v.push_back(dq.front().first);

        while(dq.empty()==false && dq.front().second<=i-B)
            dq.pop_front();

        while(dq.empty()==false && dq.back().first<=A[i])
            dq.pop_back();

        dq.push_back({A[i],i});
    }

    v.push_back(dq.front().first);

    return v;
}
