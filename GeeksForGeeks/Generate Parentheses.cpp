class Solution
{
    public:

    void solve(int open, int close, string op, vector<string>& res)
    {
        if(open==0 && close==0)
        {
            res.push_back(op);
            return;
        }

        if(open>0)
        {
        solve(open-1,close,op+"(",res);

        }

        if(close>open)
        {
           solve(open,close-1,op+")",res);
        }
    }
    vector<string> AllParenthesis(int n)
    {
        // Your code goes here
        int open=n;
        int close=n;

        vector<string> res;
        string op="";

        solve(open,close,op,res);

        return res;
    }
};
