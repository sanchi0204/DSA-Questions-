class Solution{
public:

	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string res="";
	    res=res+S[0];

	    for(int i=1;i<S.length();i++)
	    {
	        if(S[i]==' ')
	            res=res+S[i+1];
	    }

	    return res;
	}
};
