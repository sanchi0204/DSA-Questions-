class Solution
{
    public:

    void reverse(string& s,int start,int end)
    {
        while(start<=end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    //Function to reverse words in a given string.
    string reverseWords(string S)
    {
        // code here
        int n = S.length();
        int start=0;


        for(int i=0;i<S.length();i++)
        {

            if(S[i]=='.')
            {
                reverse(S,start,i-1);
                start=i+1;

            }
        }

        reverse(S,start,n-1);

       reverse(S,0,n-1);

        return S;
    }
};
