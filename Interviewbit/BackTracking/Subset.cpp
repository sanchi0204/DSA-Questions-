void solve(vector<int> &A, vector<vector<int>>& res, vector<int>& ds, int idx)
{
    if(idx==A.size())
    {
        res.push_back(ds);
        return;
    }


    solve(A,res,ds,idx+1);
    ds.push_back(A[idx]);
    solve(A,res,ds,idx+1);
    ds.pop_back();

}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int>> res;
    vector<int> ds;
  sort(A.begin(),A.end());
    solve(A,res,ds,0);
    sort(res.begin(),res.end());


    return res;
}
