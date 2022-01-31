int countInversionsMerge(vector<int>& A, int start, int end, int mid)
{
    int res=0;
    int n1=mid-start+1;
    int n2=end-mid;

    int left[n1], right[n2];

    for(int i=0;i<n1;i++)
        left[i]=A[start+i];

    for(int j=0;j<n2;j++)
        right[j]=A[mid+1+j];

    int i=0, j=0, k=start;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            A[k]=left[i];
            i++;
        }

        else
        {
            A[k]=right[j];
            res=res+n1-i;
            j++;
        }

        k++;
    }

    while(i<n1)
        A[k++]=left[i++];

    while(j<n2)
        A[k++]=right[j++];

    return res;
}
int countInversionsUtil(vector<int>& A, int start, int end)
{
    int res=0;
    if(start<end)
    {
        int mid = start+(end-start)/2;
        res+=countInversionsUtil(A,start,mid);
        res+=countInversionsUtil(A,mid+1,end);
        res+=countInversionsMerge(A,start,end,mid);
    }

    return res;
}
int Solution::countInversions(vector<int> &A) {

    int n=A.size();
    int start=0;
    int end=n-1;

    return countInversionsUtil(A,start,end);
}
