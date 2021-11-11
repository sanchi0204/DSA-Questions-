class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> s;
        vector<long long> v;
        v.push_back(-1);
        s.push(arr[n-1]);

        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false && s.top()<=arr[i])
                s.pop();


            long long ns = s.empty()?-1:s.top();
            s.push(arr[i]);
            v.push_back(ns);
        }

        reverse(v.begin(), v.end());
        return v;
    }
};
