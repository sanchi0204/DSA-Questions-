class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int> mp;

        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }

         priority_queue<pair<int,char>> pq;

        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }

        string res="";

        while(!pq.empty())
        {
            auto curr= pq.top();
            pq.pop();

            int num = curr.first;

            while(num)
            {
                res+=curr.second;
                num--;
            }
        }

        return res;
    }
};
