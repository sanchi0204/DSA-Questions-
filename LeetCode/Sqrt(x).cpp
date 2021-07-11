class Solution {
public:
    int mySqrt(int x) {

//         if(x==0)
//             return 0;

//         if(x==1)
//             return 1;

        long low=1,high=x,ans;

        while(low<=high)
        {
            long mid=low+(high-low)/2;

            long msq = mid*mid;

            if(msq==x)
                return mid;

            else if(msq>x)
                high=mid-1;

            else
            {
                ans=mid;
                low=mid+1;
            }
        }

        return ans;

    }
};
