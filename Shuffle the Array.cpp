class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> v;
        int i=0, j=n;

        while(i<n && j<2*n)
        {
            v.push_back(nums[i]);
            v.push_back(nums[j]);

            i++;
            j++;
        }


       return v;
    }
};

//alternate

/*
 vector<int> v;
 for(int i=0;i<n;i++)
 {
 v.push_back(nums[i]);
 v.push_back(nums[i+n]);
 }

 return v;
 */
