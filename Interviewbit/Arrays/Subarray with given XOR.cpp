int Solution::solve(vector<int> &A, int B) {

    unordered_map<int,int> mp;
    int xr=0;
    int cnt=0;

    for(auto x:A)
    {
        xr=xr^x;

        if(xr==B)
            cnt++;

        if(mp.find(xr^B)!=mp.end())
            cnt+=mp[xr^B];

        mp[xr]+=1;
    }

    return cnt;
}
