vector<int> Solution::prevSmaller(vector<int> &A) {

    int n=A.size();

    if(n==1)
        return {-1};

    stack<int> s;
    vector<int> res;

    s.push(A[0]);
    res.push_back(-1);

    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()>=A[i])
            s.pop();

        int ns = s.empty()?-1:s.top();
        res.push_back(ns);
        s.push(A[i]);
    }

    //reverse(res.begin(), res.end());
    return res;
}
