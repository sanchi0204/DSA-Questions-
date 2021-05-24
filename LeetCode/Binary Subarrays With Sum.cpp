class Solution {
public:
    int numSubarraysWithSum(vector<int>& A, int S) {

        if(S<0)
            return 0;

        int res=0;
        int preSum=0;
        unordered_map<int,int> m;


        for(int i=0;i<A.size();i++)
        {
            preSum+=A[i];

            if(preSum==S)
                res++;

            if(m.find(preSum-S)!=m.end())
                res+=m[preSum-S];

            m[preSum]++;
        }

        return res;
    }
};
