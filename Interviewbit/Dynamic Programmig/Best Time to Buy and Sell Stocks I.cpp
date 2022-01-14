int Solution::maxProfit(const vector<int> &A) {

    if(A.size()==0)
        return 0;

    int mini=INT_MAX;
    int res=0;

    for(int i=0;i<A.size();i++)
    {

            mini=min(mini,A[i]);
            res=max(res,A[i]-mini);
    }

    return res;
}
