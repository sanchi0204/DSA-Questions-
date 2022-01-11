class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        unordered_set<string> s;
        bool isPresent=false;

        for(auto word:wordList)
        {
            if(word==targetWord)
                isPresent=true;

            s.insert(word);
        }

        if(isPresent==false)
            return 0;

        int depth=0;
        queue<string> q;
        q.push(startWord);

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
                    string temp = curr;

                    for(char c='a';c<='z';c++)
                    {
                        temp[i]=c;

                        if(temp==curr)
                            continue;

                        if(temp==targetWord)
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
};
