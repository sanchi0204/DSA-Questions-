vector<int> PrevSmaller(vector<int>& A)
{
    stack<pair<int,int>> s;
    s.push({A[0],0});
    vector<int> left;
    left.push_back(-1);

    for(int i=1;i<A.size();i++)
    {
        while(s.empty()==false && s.top().first>=A[i])
            s.pop();

        int ps = s.empty()?-1:s.top().second;
        left.push_back(ps);
        s.push({A[i],i});
    }

    return left;
}

vector<int> NextSmaller(vector<int>& A)
{
    int n=A.size();
    stack<pair<int,int>> s;
    s.push({A[n-1],n-1});
    vector<int> right;
    right.push_back(n);

    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && s.top().first>=A[i])
            s.pop();

        int ns = s.empty()?n:s.top().second;
        right.push_back(ns);
        s.push({A[i],i});
    }

    reverse(right.begin(), right.end());
    return right;
}
int Solution::largestRectangleArea(vector<int> &A) {

    vector<int> left = PrevSmaller(A);
    vector<int> right = NextSmaller(A);

    int n=A.size();
    int maxArea = INT_MIN;

    for(int i=0;i<n;i++)
    {
        int area = A[i]*(right[i]-left[i]-1);
        maxArea = max(maxArea, area);
    }

    return maxArea;
}
