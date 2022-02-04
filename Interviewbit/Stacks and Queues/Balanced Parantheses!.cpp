bool match(char a, char b)
{
    if(a==')' && b=='(')
        return true;

    return false;
}

int Solution::solve(string A) {

    stack<char> s;

    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='(')
            s.push(A[i]);

        else
        {
            if(s.empty()==true)
                return false;

            else if(match(A[i],s.top())==false)
                return false;

            else
               s.pop();
        }
    }

    return (s.empty()==true);
}
