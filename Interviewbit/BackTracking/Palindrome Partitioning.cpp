bool isPalindrome(string s, int start, int end)
{
    while(start<=end)
    {
        if(s[start++]!=s[end--])
            return false;
    }

    return true;
}
void solve(int idx, string A, vector<vector<string>>& ans, vector<string>& ds)
{
    if(idx==A.length())
    {
        ans.push_back(ds);
        return;
    }

    for(int i=idx;i<A.length();i++)
    {
        if(isPalindrome(A,idx,i))
        {
            ds.push_back(A.substr(idx,i-idx+1));
            solve(i+1,A,ans,ds);
            ds.pop_back();
        }
    }
}
vector<vector<string> > Solution::partition(string A) {

 vector<vector<string>> ans;
 vector<string> ds;

 solve(0,A,ans,ds);
 return ans;

}
