class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        unordered_map<int,bool> m;
        vector<int> v;

        for(int i=0;i<nums.size();i++)
        {
           if(m[nums[i]]==true)
               v.push_back(nums[i]);

            else
                m[nums[i]]=true;
        }



        return v;

    }
};
