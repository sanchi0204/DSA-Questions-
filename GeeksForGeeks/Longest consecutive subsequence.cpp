int findLongestConseqSubseq(int arr[], int N)
{
  //Your code here
  unordered_set<int> s;

  for(int i=0;i<N;i++)
    s.insert(arr[i]);

int res=0;

    for(int i=0;i<N;i++)
    {
        if(s.find(arr[i]-1)==s.end())
        {
            int j=arr[i];

            while(s.find(j)!=s.end())
                j++;

            res=max(res,j-arr[i]);
        }

    }

    return res;
}
};
