
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int> s;
       s.push(0);
       vector<int> v;
       v.push_back(1);

       for(int i=1;i<n;i++)
       {
           while(s.empty()==false && price[s.top()]<=price[i])
            s.pop();

            int res = s.empty()?i+1:i-s.top();
            v.push_back(res);
            s.push(i);
       }

       return v;
    }
};
