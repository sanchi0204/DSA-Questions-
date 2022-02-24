int find(vector<int> &A, int B)
{
    int count=0;
    int i=0,j=0;
    unordered_map<int,int> mp;

    while(j<A.size())
    {
            mp[A[j]]++;

            while(mp.size()>B)
            {
                mp[A[i]]--;
                if(mp[A[i]]==0)
                    mp.erase(A[i]);

                i++;
            }

            count+=(j-i+1);
            j++;
    }

    return count;
}
int Solution::solve(vector<int> &A, int B) {

    return (find(A,B)-find(A,B-1));
}
