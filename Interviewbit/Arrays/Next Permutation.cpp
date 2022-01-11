vector<int> Solution::nextPermutation(vector<int> &A) {

    int n = A.size();
    int k,l;

    for(k=n-2;k>=0;k--)
        {
            if(A[k]<A[k+1])
                break;
        }

    if(k<0)
        reverse(A.begin(), A.end());

    else
    {
        for(l=n-1;l>k;l--)
            if(A[k]<A[l])
                break;

        swap(A[k],A[l]);
        reverse(A.begin()+k+1, A.end());
    }

    return A;
}
