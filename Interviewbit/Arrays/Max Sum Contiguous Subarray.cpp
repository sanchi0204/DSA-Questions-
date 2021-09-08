int Solution::maxSubArray(const vector<int> &A) {

    int res = A[0];
    int maxEnding = A[0];

    for(int i=1;i<A.size();i++)
    {
        maxEnding= max(maxEnding+A[i], A[i]);
        res = max(res, maxEnding);
    }

    return res;
}
