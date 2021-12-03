void solve(string s, string op, vector<string>& res)
{
    if(s.length()==0)
    {
        res.push_back(op);
        return;
    }

    string op1=op;
    op1.push_back(s[0]);
    string op2=op;
    s.erase(s.begin()+0);
    solve(s,op1,res);
    solve(s,op2,res);

}
vector <string> powerSet(string s)
{
   //Your code here

   string op = "";
   vector<string> res;
   solve(s,op,res);

   return res;
}
