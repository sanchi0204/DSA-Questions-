class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        vector<int> mp(256,-1);

        int left=0;
        int right=0;
        int n=S.size();
        int len=0;

        while(right<n)
        {
            if(mp[S[right]]!=-1)
                left=max(left, mp[S[right]]+1);

            mp[S[right]]=right;

            len = max(len , right-left+1);

            right++;
        }

        return len;
    }
};
