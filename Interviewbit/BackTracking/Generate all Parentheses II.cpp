void recur(int open, int close, string op, vector<string>& res)
{
    if(open==0 && close==0)
    {
        res.push_back(op);
        return;
    }

    if(open>0)
    {
        recur(open-1,close,op+"(",res);
    }

    if(close>open)
    {
        recur(open,close-1,op+")",res);
    }
}
vector<string> Solution::generateParenthesis(int A) {

    string op="";
    vector<string> res;

    recur(A,A,op,res);

    return res;
}
