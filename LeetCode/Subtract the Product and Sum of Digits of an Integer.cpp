class Solution {
public:
    int subtractProductAndSum(int n) {

        int sum=0, prod=1;

        while(n>0)
        {
            int num = n%10;
            sum+=num;
            prod=prod*num;
            n=n/10;
        }

        return prod-sum;
    }
};
