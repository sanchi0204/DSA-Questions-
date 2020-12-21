int maxSubarraySum(int arr[], int n){

    // Your code here
    int res=arr[0];
    int maxend=arr[0];

    for(int i=1;i<n;i++)
    {
        maxend=max(maxend+arr[i], arr[i]);
        res=max(res, maxend);
    }

    return res;
}
