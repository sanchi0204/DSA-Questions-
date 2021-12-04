vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {

    int i=0;
    int j=0;

    int m=A.size();
    int n=B.size();
    vector<int> ans;

    while(i<m && j<n)
    {
        if(A[i]<B[j])
            i++;

        else if(A[i]>B[j])
            j++;

        else
        {
                 ans.push_back(A[i]);
                 i++;
                 j++;
        }

    }

    return ans;
}
