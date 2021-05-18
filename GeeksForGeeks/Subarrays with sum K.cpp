
class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here

        int res=0;
        int preSum=0;
        unordered_map<int,int> m;

        for(int i=0;i<N;i++)
        {
            preSum+=Arr[i];

            if(preSum==k)
                res++;

            if(m.find(preSum-k)!=m.end())
                res+=m[preSum-k];

            m[preSum]++;
        }


        return res;
    }
};
