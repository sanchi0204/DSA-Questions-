//https://leetcode.com/problems/search-insert-position/

eg: [1,3,5,6]


Here 4 cases arrive:
1. Element is found (target=5)
2. Element is not found and is in between (target=4)
3. Element is not found and is the smallest (target=0)
4. Element is not found and is the largest (target=7)



class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int low=0;
        int high=nums.size()-1;
        int mid,ans;

        if(target<nums[0])
            return 0;

        if(target>nums[nums.size()-1])
            return nums.size();


        while(low<=high)
        {
            mid= (low+high)/2;

            if(nums[mid]==target)
                return mid;

            else if(nums[mid]<target)
                low=mid+1;

            else
                high=mid-1;
        }

    return (low+high)/2+1;
    }
};
