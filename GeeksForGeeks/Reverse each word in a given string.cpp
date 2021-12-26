class Solution
{
  public:
    string reverseWords (string s)
    {

        int start=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                reverse(s,start,i-1);
                start=i+1;
            }
        }

        reverse(s,start,n-1);
        //reverse(s,0,n-1);

        return s;
    }

    void reverse(string &s, int start, int end)
    {
        while(start<=end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};
