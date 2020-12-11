class Solution {
public:
    int repeatedNTimes(vector<int>& A) {

    unordered_set<int> s;

        for(int i=0;i<A.size();i++)
        {
            if(s.find(A[i])!=s.end())
                return A[i];

            s.insert(A[i]);
        }

        return -1;
    }
};
