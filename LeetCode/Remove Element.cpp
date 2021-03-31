class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int start=0,count=0,end=nums.size()-1;

        while(start<=end)
        {
            if(nums[start]==val)
            {
                swap(nums[start],nums[end]);
                end--;
            }

            if(nums[start]!=val)
            {
                count++;
                start++;
            }

        }


        return count;
    }
};
