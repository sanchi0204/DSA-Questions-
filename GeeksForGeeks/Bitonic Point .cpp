class Solution{
public:

	int findMaximum(int a[], int n) {
	    // code here

	    int low=0, high=n-1;
	    while(low<=high)
	    {
	        int mid = low + (high-low)/2;

	        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
	            return a[mid];

	       else if(a[mid]>a[mid+1] && a[mid]<a[mid-1])
	        high = mid-1;

	        else
	            low=mid+1;
	    }

	    return a[n-1];
	}
};
