vector<string> Solution::fullJustify(vector<string> &A, int B) {

    vector<string> res;
    int currWord=0;

    while(currWord<A.size())
    {
        int firstWord=currWord;
        int numCharsOnLine=A[currWord].size();

        while(currWord+1<A.size() && numCharsOnLine+A[currWord+1].size()+1<=B)
        {
            numCharsOnLine= numCharsOnLine +A[currWord+1].size()+1;
            currWord++;
        }

        int numWordsOnLine = currWord-firstWord+1;
        int ExtraSpaces = B-numCharsOnLine;

        string line="";

        if(currWord<A.size()-1 && numWordsOnLine>1)
        {
            int paddingPerWord=ExtraSpaces/(numWordsOnLine-1);
            int leftSpaces = ExtraSpaces % (numWordsOnLine-1);

            while(firstWord<currWord)
            {
                line.append(A[firstWord]);
                line.push_back(' ');

                for(int i=0;i<paddingPerWord;i++)
                    line.push_back(' ');

                    if(leftSpaces>0)
                    {
                        line.push_back(' ');
                        leftSpaces--;
                    }

                    firstWord++;
            }

            line.append(A[firstWord]);
        }

        else
        {
            while(firstWord<currWord)
            {
                line.append(A[firstWord]);
                line.push_back(' ');
                firstWord++;
            }

            line.append(A[firstWord]);

            for(int i=0;i<ExtraSpaces;i++)
                line.push_back(' ');
        }

        res.push_back(line);
        currWord++;
    }

    return res;
}
