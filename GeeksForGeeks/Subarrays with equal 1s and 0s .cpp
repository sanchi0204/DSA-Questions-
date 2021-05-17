
class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here

        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                arr[i]=-1;
        }

        unordered_map<int,int> m;
        int preSum=0;
       long long int res=0;

        for(int i=0;i<n;i++)
        {
            preSum+=arr[i];

            if(preSum==0)
              res++;

            if(m.find(preSum)!=m.end())
                res+=m[preSum];

                m[preSum]++;
        }

        return res;
    }
};
