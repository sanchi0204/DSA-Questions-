class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> m;
        unordered_set<int> s;

        int n=arr.size();

        for(int i=0;i<n;i++)
        {
            if(m.find(arr[i])==m.end())
                m[arr[i]]=1;

            else
                  m[arr[i]]++;
        }

        for(auto it=m.begin(); it!=m.end(); it++)
        {
            if(s.find(it->second)!=s.end())
                return false;

            s.insert(it->second);
        }

        return true;
    }
};
