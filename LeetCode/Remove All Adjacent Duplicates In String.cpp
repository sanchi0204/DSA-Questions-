class Solution {
public:
    string removeDuplicates(string S) {

        stack<char> s;
        string res;

        for(int i=0;i<S.length();i++)
        {
            if(s.empty()==false && s.top()==S[i])
                s.pop();


            else
                s.push(S[i]);
        }

        while(s.empty()==false)
        {
            res+=s.top();
            s.pop();
        }

      reverse(res.begin(), res.end());

        return res;
    }
};
