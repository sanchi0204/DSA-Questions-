// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {

//         int res=0;

//         for(int i=0;i<nums.size();i++)
//         {
//             int count=0;

//             while(nums[i])
//             {
//                 nums[i]=nums[i]/10;
//                 ++count;
//             }

//             if(count%2==0)
//                 res++;
//         }

//         return res;
//     }
// };


// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {

//         int res=0;

//         for(int i=0;i<nums.size();i++)
//         {
//             int num=nums[i];
//             string s = to_string(num);

//             if(s.length()%2==0)
//                 res++;
//         }

//         return res;
//     }
// };


class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int res=0;

        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            string s = to_string(num);

            if(s.length()%2==0)
                res++;
        }

        return res;
    }
};
