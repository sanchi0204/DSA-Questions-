class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {

        stringstream ss1(A), ss2(B);
        string word;
        unordered_map<string,int> m;
        vector<string> v;

        while(ss1>>word)
            m[word]++;

         while(ss2>>word)
            m[word]++;

        for(auto it = m.begin(); it!=m.end(); it++)
        {
            if(it->second==1)
                v.push_back(it->first);
        }

        return v;
    }
};
