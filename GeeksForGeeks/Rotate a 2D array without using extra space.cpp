class Solution{
public:

	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    // code here

	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            swap(arr[i][j], arr[j][i]);
	        }
	    }

	    for(int i=0;i<n;i++)
	    {
	        int low=0;
	        int end=n-1;

	        while(low<=end)
	        {
	            swap(arr[low][i], arr[end][i]);
	            low++;
	            end--;
	        }
	    }

	}

};
