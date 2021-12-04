void solve(int idx, vector<int>& A, int B, vector<vector<int>>& ans, vector<int>& ds)
{
    if(B==0)
        {
            ans.push_back(ds);
            return;
        }



    for(int i=idx;i<A.size();i++)
    {
        if(i>idx && A[i]==A[i-1])
            continue;

        if(A[i]<=B)void solve(vector<int> &A, vector<vector<int>>& res, vector<int>& ds, int idx)
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

        {
        ds.push_back(A[i]);
        solve(i+1,A,B-A[i],ans,ds);
        ds.pop_back();
        }

        else
            break;
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {

  vector<vector<int>> ans;
  vector<int> ds;
  sort(A.begin(), A.end());

  solve(0,A,B,ans,ds);
  return ans;
}
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
