int transitionPoint(int arr[], int n) {
    // code here

    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==0)
            low=mid+1;

        else
            {
                if(mid==0 || arr[mid-1]==0)
                    return mid;

                else
                    high=mid-1;
            }
    }

    return -1;
}
