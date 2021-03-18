// class Solution {
// public:

//     vector<int> reverse(vector<int>& nums, int l, int h)
//     {
//         int temp;

//         while(l<=h)
//         {
//             temp = nums[l];
//             nums[l]=nums[h];
//             nums[h]=temp;

//             l++;
//             h--;
//         }

//         return nums;
//     }

//     void rotate(vector<int>& nums, int k) {

//         int n = nums.size();
//         k=k%n;

//         reverse(nums,0,n-1);
//         reverse(nums,0,k-1);
//         reverse(nums,k,n-1);

//     }
// };

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k=k%n;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

    }
};
