
int maxLen(int A[], int n)
{
    // Your code here

    unordered_map<int,int> m;
    int preSum=0;
    int res=0;


    for(int i=0;i<n;i++)
    {
        preSum+=A[i];

        if(preSum==0)
            res=i+1;

        if(m.find(preSum)!=m.end())
            res=max(res, i-m[preSum]);

        m.insert({preSum,i});
    }

    return res;
}
