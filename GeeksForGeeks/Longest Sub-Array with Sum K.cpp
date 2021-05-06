class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K)
    {
        // Complete the function
        int res=0;
        int preSum=0;
        unordered_map<int,int> m;

        for(int i=0;i<N;i++)
        {
            preSum+=A[i];

            if(preSum==K)
                res=i+1;

            if(m.find(preSum)==m.end())
                    m[preSum]=i;

            if(m.find(preSum-K)!=m.end())
                res=max(res,i-m[preSum-K]);

           // m[preSum]=i;
        }

        return res;
    }

};
