class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {

        //code here

        if(n<1)
         return {};

        vector<long long int> op;
        long long int prod=1;

        for(int i=0;i<n;i++)
            {
                prod=prod*nums[i];
                op.push_back(prod);
            }

            prod=1;

        for(int i=n-1;i>0;i--)
        {
            op[i]=op[i-1]*prod;
            prod=prod*nums[i];
        }

        op[0]=prod;

        return op;
    }
};
