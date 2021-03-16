class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int res2=0;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            res2 = res2^nums[i];
            res2 = res2^i;
        }

        return res2^n;

    }
};
