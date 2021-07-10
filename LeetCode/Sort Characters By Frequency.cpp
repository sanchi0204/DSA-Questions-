class Solution {

    struct compare
    {
        bool operator()(pair<char,int> p1, pair<char,int> p2)
        {
            if(p1.second==p2.second)
                return p1.first<p2.first;  //when same frequency, sort in lexical order


            return p1.second<p2.second;
        }
    };

public:
    string frequencySort(string s) {

        unordered_map<char,int> mp;

        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }

        priority_queue<pair<char,int>, vector<pair<char,int>>, compare> pq(mp.begin(), mp.end());
        string res="";

        while(!pq.empty())
        {
            auto curr= pq.top();
            pq.pop();

            int num = curr.second;

            while(num)
            {
                res+=curr.first;
                num--;
            }
        }

        return res;
    }
};
