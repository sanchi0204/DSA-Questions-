class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n=nums.size();

        if(n==0)
            return 0;

        if(n==1)
            return 1;

          unordered_set<int> s;
        int res=1;

        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);

        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {
               int j=nums[i];

        while(s.find(j)!=s.end())
        {
            j++;
        }

         res = max(res, j-nums[i]);
            }
        }

        return res;
    }
};
