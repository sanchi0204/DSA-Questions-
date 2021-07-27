class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here

        ll res=0;

        unordered_map<ll,ll> m;
       ll preSum=0;
       m[preSum]=1;

        for(int i=0;i<arr.size();i++)
        {
            preSum+=arr[i];

            //method 1
            //if(m.find(preSum)!=m.end())
              //  res+=m[preSum];

              //method 2
              res+=m[preSum];


                m[preSum]++;

        }

        return res;
    }
};
