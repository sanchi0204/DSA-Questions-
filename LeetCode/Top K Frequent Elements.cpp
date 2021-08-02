class Solution {
public:

    struct compare
    {
        bool operator()(pair<int,int>  p1, pair<int,int> p2)
        {
            if(p1.second == p2.second)
                return p1.first<p2.first;


            return p1.second<p2.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> res;
           unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;


        priority_queue<pair<int,int>, vector<pair<int,int>>, compare> pq(mp.begin(),mp.end());

        for(int i=0;i<k;i++)
        {
                    res.push_back(pq.top().first);
                    pq.pop();
        }

        return res;
    }
};
