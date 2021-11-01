class Solution{
public:
    int findMaxAverage(int arr[], int n, int k) {
        // code here

        int sum=-1;
        int res=0;
        int end=-1;

        for(int i=0;i<k;i++)
            sum+=arr[i];

        res=sum;
        end=k-1;


        for(int i=k;i<n;i++)
        {
            sum=sum+(arr[i]-arr[i-k]);
            if(sum>res)
                {
                    end=i;
                    res=sum;
                }
        }

        return end-k+1;
    }
};
