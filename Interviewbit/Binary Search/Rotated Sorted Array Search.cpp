int Solution::search(const vector<int> &A, int B) {

    int low=0;
    int high=A.size()-1;
    int n=A.size();

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(A[mid]==B)
            return mid;

        if(A[mid]>=A[low])
        {
            if(B>=A[low] && B<A[mid])
                high=mid-1;

            else
                low=mid+1;
        }

        else
        {
            if(B>A[mid] && B<=A[high])
                low=mid+1;

            else
                high=mid-1;
        }
    }

    return -1;
}
