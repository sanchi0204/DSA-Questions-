string Solution::solve(string A) {

stack<string> st;
string res;

for(int i=0;i<A.size();i++)
{
    string word;

    if(A[i]==' ')
        continue;

    while(i<A.size() && A[i]!=' ')
    {
        word+=A[i];
        i++;
    }

    st.push(word);
}

while(!st.empty())
{
        res+=st.top();
        st.pop();

        if(!st.empty())
            res+=" ";
}

return res;
}
