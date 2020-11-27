class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min=INT_MAX,profit=0,res=0;

        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }

            profit = prices[i]-min;
            res=max(res,profit);

        }

        return res;
    }
};
