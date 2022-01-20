Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here

        if(n<k)
            return {-1};

        if(n==1)
            return {arr[0]};

        vector<int> res;
        deque<pair<int,int>> dq;

        for(int i=0;i<k;i++)
        {
           while(!dq.empty() && dq.back().first<=arr[i])
            dq.pop_back();

           dq.push_back({arr[i],i});
        }

        res.push_back(dq.front().first);

        for(int i=k;i<n;i++)
        {

            while(!dq.empty() && dq.front().second<=i-k)
                dq.pop_front();

            while(!dq.empty() && dq.back().first<=arr[i])
            dq.pop_back();

           dq.push_back({arr[i],i});

           res.push_back(dq.front().first);

        }

        return res;
    }
