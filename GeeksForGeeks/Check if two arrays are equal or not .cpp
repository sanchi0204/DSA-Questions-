
class Solution {
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here

    unordered_map<int,int> m;

    for(int i=0;i<N;i++)
    m[A[i]]++;


    for(int i=0;i<N;i++)
    {
        if(m.find(B[i])==m.end())
            return false;

        if(m[B[i]]==0)
            return false;

        m[B[i]]--;
    }

    return true;

    }
};
