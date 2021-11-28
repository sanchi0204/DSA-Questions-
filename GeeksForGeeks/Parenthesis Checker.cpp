class Solution
{
    public:

    bool matching(char a, char b)
    {
        if(a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']')
            return true;

        return false;
    }

    bool ispar(string x)
    {
        // Your code here
        stack<char> s;

        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
                s.push(x[i]);

            else
            {
                if(s.empty()==true)
                    return false;

                else if(matching(s.top(), x[i])==false)
                    return false;

                else
                    s.pop();
            }
        }

        return (s.empty()==true);
    }

};
