class Solution {
public:
    int trap(vector<int>& height) {

        if(height.size()==0)
            return 0;

        int n=height.size();
        int lsum[n];
        int rsum[n];
        int res=0;

        lsum[0]=height[0];

        for(int i=1;i<n;i++)
        {
            lsum[i]=max(lsum[i-1], height[i]);
        }

        rsum[n-1]=height[n-1];

        for(int i=n-2;i>=0;i--)
        {
            rsum[i]=max(rsum[i+1], height[i]);
        }

        for(int i=1;i<n-1;i++)
            res  = res + (min(lsum[i],rsum[i])-height[i]);


        return res;

    }
};
