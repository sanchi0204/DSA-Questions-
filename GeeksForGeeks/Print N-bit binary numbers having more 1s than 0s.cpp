class Solution{
public:
 vector<string> res;

 void solve(string op, int one, int zero,int N)
 {
     if(N==0)
     {
         res.push_back(op);
         return;
     }

     solve(op+"1",one+1,zero,N-1);

     if(zero<one)
     {
         solve(op+"0",one,zero+1,N-1);
     }
 }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    string op="";
	    solve(op,0,0,N);
	    return res;

	}
};
