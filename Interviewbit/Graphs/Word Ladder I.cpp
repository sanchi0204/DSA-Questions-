int Solution::solve(string A, string B, vector<string> &C) {

    unordered_set<string> s;
    //bool isPresent=false;

    for(auto word:C)
    {
        // if(word==B)
        //     isPresent=true;

        s.insert(word);
    }

    queue<string> q;
    int depth=0;

    q.push(A);

    while(!q.empty())
    {
        depth++;
        int lsize=q.size();

        while(lsize--)
        {
        string curr = q.front();
        q.pop();

        for(int i=0;i<curr.length();i++)
        {
            string temp=curr;

            for(char c='a';c<='z';c++)
            {
                temp[i]=c;

                if(temp==curr)
                    continue;

                if(temp==B)
                    return depth+1;

                if(s.find(temp)!=s.end())
                {
                    q.push(temp);
                    s.erase(temp);
                }
            }
        }

        }
    }

    return 0;
}
