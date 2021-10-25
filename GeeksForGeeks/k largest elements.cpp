class Solution{
public:
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here

	    priority_queue<int, vector<int>, greater<int>> pq;

	    for(int i=0;i<k;i++)
	        pq.push(arr[i]);

	   for(int i=k;i<n;i++)
	   {
	       if(arr[i]>pq.top())
	        {
	            pq.pop();
	            pq.push(arr[i]);
	        }
	   }

	   vector<int> res;
	   while(pq.empty()==false)
	   {
	       res.push_back(pq.top());
	       pq.pop();
	   }

	   reverse(res.begin(), res.end());
	   return res;
	}

};
