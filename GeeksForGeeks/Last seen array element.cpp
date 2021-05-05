class Solution{
    public:
    int lastSeenElement(int arr[], int n)
    {
        // Complete the function

        int res;
        unordered_set<int> s;

        for(int i=n-1;i>=0;i--)
        {
            if(s.find(arr[i])==s.end())
                res=arr[i];

            s.insert(arr[i]);
        }


        return res;
    }

};
