int countNumbersLessThanMid(vector<int>& res, int mid)
{
    int low=0;
    int high=res.size()-1;

    while(low<=high)
    {
        int md=low+(high-low)/2;

        if(res[md]<=mid)
            low=md+1;

        else
            high=md-1;
    }

    return low;
}

int Solution::findMedian(vector<vector<int> > &A) {

    int row=A.size();
    int col=A[0].size();

    int mn=A[0][0];
    int mx=A[0][col-1];

    for(int i=1;i<row;i++)
    {
        mn=min(mn,A[i][0]);
        mx=max(mx,A[i][col-1]);
    }

    int desired = (row*col)/2;

    while(mn<mx)
    {
        int mid = mn+(mx-mn)/2;
        int count=0;

        for(int i=0;i<row;i++)
            count+=countNumbersLessThanMid(A[i],mid);

        if(count<=desired)
            mn=mid+1;

        else
            mx=mid;
    }

    return mn;
}
