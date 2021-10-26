class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        for(int i=0;i<N;i++)
            if(arr[i]==0)
                arr[i]=-1;


        int preSum=0;
        unordered_map<int,int> mp;
        int res=0;

        for(int i=0;i<N;i++)
        {
            preSum+=arr[i];

            if(preSum==0)
                res=max(res,i+1);


            if(mp.find(preSum)==mp.end())
                mp.insert({preSum,i});


            if(mp.find(preSum)!=mp.end())
                res=max(res,i-mp[preSum]);
        }

        return res;
    }
};
