class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int res=0;
        int preSum=0;
        unordered_map<int,int> m;


        for(int i=0;i<nums.size();i++)
        {
            preSum+=nums[i];

            if(preSum==k)
                res++;

            if(m.find(preSum-k)!=m.end())
                res+=m[preSum-k];

            m[preSum]++;
        }

        return res;
    }
};
