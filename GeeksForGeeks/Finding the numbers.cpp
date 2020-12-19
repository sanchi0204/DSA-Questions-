class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        // Code here.
        int x=0,res1=0,res2=0;
        vector<int> v;

        for(int i=0;i<nums.size();i++)
            x=x^nums[i];

    int s= x & (~(x-1));

    for(int i=0;i<nums.size();i++)
    {
        if((nums[i]&s)!=0)
            res1=res1^nums[i];

        else
            res2=res2^nums[i];
    }

    v.push_back(res1);
    v.push_back(res2);
    sort(v.begin(), v.end());

    return v;
    }
};
