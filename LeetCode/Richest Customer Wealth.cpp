class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int wealth;
        int res=0;

        for(int i=0;i<accounts.size();i++)
        {
            wealth=0;

            for(int j=0;j<accounts[i].size();j++)
            {
                wealth+=accounts[i][j];

            }

            res = max(res, wealth);
        }

        return res;
    }
};
