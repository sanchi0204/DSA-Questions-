class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> res;

        if(nums.size()==0)
            return res;

        sort(nums.begin(), nums.end());

        int len = nums.size();

        for(int i=0;i<len;i++)
        {
            int target3 = target-nums[i];

            for(int j=i+1;j<len;j++)
            {
                int target2 = target3-nums[j];

                int left=j+1;
                int right = len-1;

                while(left<right)
                {
                    int twoSum = nums[left]+nums[right];
                    if(twoSum < target2)
                        left++;

                    else if(twoSum > target2)
                        right--;

                    else
                    {
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[left];
                        quad[3]=nums[right];

                        res.push_back(quad);


                        while(left<right && nums[left]==quad[2])
                            ++left;

                        while(left<right && nums[right]==quad[3])
                            --right;
                    }
                }

                while(j+1<len && nums[j+1]==nums[j])
                    ++j;
            }

              while(i+1<len && nums[i+1]==nums[i])
                    ++i;
        }

        return res;
    }
};
