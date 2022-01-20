vector<int> Solution::dNums(vector<int> &A, int B) {

    unordered_map<int,int> mp;
    int count=0;
    vector<int> res;

    for(int i=0;i<B;i++)
    {
        if(mp[A[i]]==0)
            count++;

        mp[A[i]]++;
    }

    res.push_back(count);

    for(int i=B;i<A.size();i++)
        {
            if(mp[A[i-B]]==1)
                count--;

            mp[A[i-B]]--;

            if(mp[A[i]]==0)
                count++;

            mp[A[i]]++;

            res.push_back(count);
        }

        return res;
}
