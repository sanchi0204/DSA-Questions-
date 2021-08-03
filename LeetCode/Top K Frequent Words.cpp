class Solution {

    struct comp
    {
        bool operator()(pair<string,int> &p1, pair<string,int> &p2)
        {
            if(p1.second==p2.second)
                return p1.first>p2.first;


            return p1.second<p2.second;

        }
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {


        unordered_map<string,int> mp;

        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }

        priority_queue<pair<string,int>, vector<pair<string,int>>,comp> pq(mp.begin(),mp.end());


        vector<string> res;

        while(k--)
        {
            res.push_back(pq.top().first);
            pq.pop();
        }

        return res;
    }
};
