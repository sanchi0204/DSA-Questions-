int Solution::solve(vector<int> &A, int B) {

if(B==0)
    return 0;

    unordered_set<int> s;

        for(int i=0;i<A.size();i++)
            s.insert(A[i]);

    for(int i=0;i<A.size();i++)
    {
        if(s.find(A[i]-B)!=s.end())
                return 1;
    }

    return 0;
    }
