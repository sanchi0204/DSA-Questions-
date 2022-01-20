vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {

    vector<long long> res;
    queue<long long> q;


    for(long long int i=0;i<K;i++)
    {
        if(A[i]<0)
        {
           q.push(A[i]);
        }

    }

        if(q.size()==0)
            res.push_back(0);

        else
            res.push_back(q.front());

    for(long long int i=K;i<N;i++)
    {
        if(A[i-K]<0)
            q.pop();

        if(A[i]<0)
            q.push(A[i]);

         if(q.size()==0)
            res.push_back(0);

        else
            res.push_back(q.front());
    }

    return res;
