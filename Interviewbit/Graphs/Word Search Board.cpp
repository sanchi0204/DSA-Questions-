
bool search(vector<string>&A, string& word, int i, int j, int idx)
{
    if(idx==word.length()-1)
        return true;

  //  A[i][j]-=65;

    if(i>0 && A[i-1][j]==word[idx+1] && search(A,word,i-1,j,idx+1))
        return true;

    if(j>0 && A[i][j-1]==word[idx+1] && search(A,word,i,j-1,idx+1))
            return true;

    if(i+1<A.size() && A[i+1][j]==word[idx+1] && search(A,word,i+1,j,idx+1))
            return true;

    if(j+1<A[i].size() && A[i][j+1]==word[idx+1] && search(A,word,i,j+1,idx+1))
            return true;

   // A[i][j]+=65;

    return false;
}

int Solution::exist(vector<string> &A, string B) {

    int row=A.size();
    if(row==0)
        return false;

    int col=A[0].size();

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(A[i][j]==B[0] && search(A,B,i,j,0))
                return true;
        }
    }

    return false;

    }
