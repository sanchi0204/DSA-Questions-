class Solution {
public:

    int normalSum(vector<int>& A)
    {
        int res=A[0], maxEnding = A[0];
        for(int i=1;i<A.size();i++)
        {
            maxEnding = max(A[i], maxEnding+A[i]);
            res= max(res,maxEnding);
        }

        return res;

    }

    int maxSubarraySumCircular(vector<int>& A) {

        int normal_sum = normalSum(A);
        if(normal_sum<0)
            return normal_sum;

        int sum=0;
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
            A[i]=-A[i];
        }

        int circle_sum = sum+normalSum(A);
        return max(normal_sum, circle_sum);
    }
};
