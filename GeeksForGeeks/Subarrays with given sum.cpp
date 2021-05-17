class Solution
{
public:
    int subArraySum(int arr[], int n, int sum)
    {
    	//code here.

    	unordered_map<int,int> mp;
    	int res=0;
    	int preSum=0;

    	for(int i=0;i<n;i++)
    	{
    	    preSum+=arr[i];

    	     if(preSum==sum)
    	        res++;

    	    if(mp.find(preSum-sum)!=mp.end())
    	        res+=mp[preSum-sum];

    	   mp[preSum]++;
    	}

    	return res;
    }
};
