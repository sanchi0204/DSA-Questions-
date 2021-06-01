class Solution {

    struct comp
    {
        bool operator()(pair<int,int> n1, pair<int,int> n2)
        {
            return n1[]
        }
    };
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {


        priority_queue<pair<int,pair<int,int>>>pq;

        for(int i=0;i<nums1.size();i++)
        {
            int sum=0;
            for(int j=0;j<nums2.size();j++)
            {
                sum = nums1[i]+nums2[j];

                pq.push({sum,{nums1[i],nums2[j]}});

                if(pq.size()>k)
                    pq.pop();

            }
        }


        vector<vector<int>> res;

        while(!pq.empty())
        {
             vector<int> ans;

            auto curr =pq.top();
            pq.pop();

            ans.push_back(curr.second.first);
            ans.push_back(curr.second.second);

            res.push_back(ans);
        }


        return res;

    }
};
