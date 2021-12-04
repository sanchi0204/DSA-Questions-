vector<int> Solution::twoSum(const vector<int> &A, int B) {

    if(A.size()<2)
        return {};

    vector<int> v;
    unordered_map<int,int> mp;

    for(int i=0;i<A.size();i++)
    {
        int k = B-A[i];

        if(mp.find(k)!=mp.end())
            {
                v.push_back(mp[k]+1);
                v.push_back(i+1);
                return v;
            }

            if(mp.find(A[i])==mp.end())
                mp[A[i]]=i;

    }

    return v;
}
