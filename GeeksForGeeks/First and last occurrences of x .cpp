int firstOcc(int a[], int n, int x)
{
    int low=0,high=n-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]>x)
            high=mid-1;

        else if(a[mid]<x)
            low=mid+1;

        else
        {
            if(mid==0 || a[mid]!=a[mid-1])
                return mid;

            else
                high = mid-1;
        }
    }

    return -1;
}

int lastOcc(int a[], int n, int x)
{
    int low=0,high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]<x)
            low=mid+1;

        else if(a[mid]>x)
            high=mid-1;

        else
        {
            if(mid==n-1 || a[mid]!=a[mid+1])
                return mid;

            else
                low=mid+1;
        }
    }

    return -1;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> res;

    int first = firstOcc(arr,n,x);
    int last = lastOcc(arr,n,x);

  res.push_back(first);
  res.push_back(last);

  return res;

}
