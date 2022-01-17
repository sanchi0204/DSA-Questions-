bool solve(string A, string B, unordered_map<string,bool>& mp)
{
    int n=A.length();
    if(n!=B.length())
        return false;

    if(A==B)
        return true;

    if(n<=1)
        return false;

    string temp = A+" "+B;
    if(mp.find(temp)!=mp.end())
        return mp[temp];

    for(int i=1;i<n;i++)
    {
        bool withoutSwap = solve(A.substr(0,i),B.substr(0,i),mp) && solve(A.substr(i), B.substr(i),mp);
        if(withoutSwap==true)
        {
            return true;
            break;
        }

        bool withSwap = solve(A.substr(0,i),B.substr(n-i),mp) && solve(A.substr(i), B.substr(0,n-i),mp);
        if(withSwap)
        {
            return true;
            break;
        }

    }

    return  (mp[temp]=false);
}
int Solution::isScramble(const string A, const string B) {

    unordered_map<string,bool> mp;
    return solve(A,B,mp);
}
