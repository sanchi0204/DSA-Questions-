class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        vector<string> res;
        int k=0;

        for(int i=1;i<=n;i++)
        {
            if(target[k]==i)
            {
                res.push_back("Push");
                k++;
            }
            else
            {
                res.push_back("Push");
                res.push_back("Pop");
            }

            if(k==target.size())
               return res;
        }

        return res;
    }
};
