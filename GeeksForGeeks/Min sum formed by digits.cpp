class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i=0;i<n;i++)
            pq.push(arr[i]);

           long long int num1=0, num2=0;

        while(pq.empty()==false)
        {
            num1 = num1*10+pq.top();
            pq.pop();

            if(pq.empty()==false)
            {
                num2 = num2*10+pq.top();
                pq.pop();
            }
        }

        return num1+num2;
    }
};
