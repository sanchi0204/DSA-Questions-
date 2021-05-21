class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here

        int left[n], right[n];
        int res=0;

        left[0]=arr[0];

        for(int i=1;i<n;i++)
            left[i]= max(left[i-1],arr[i]);

        right[n-1]=arr[n-1];

        for(int i=n-2;i>=0;i--)
            right[i] = max(right[i+1],arr[i]);

        for(int i=1;i<n-1;i++)
            res = res + (min(left[i],right[i])-arr[i]);

        return res;
    }
};
