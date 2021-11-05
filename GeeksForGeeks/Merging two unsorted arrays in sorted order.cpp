class Solution{


	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	    sort(a,a+n);
	    sort(b,b+m);
	   // Your code goes here
	   int i=0, j=0, k=0;
	   while(i<n && j<m)
	   {
	       if(a[i]<=b[j])
	       {
	           res[k]=a[i];
	           k++;
	           i++;
	       }

	       else
	       {
	           res[k]=b[j];
	           k++;
	           j++;
	       }

	   }

	   while(i<n)
	   {
	       res[k]=a[i];
	       k++;
	       i++;
	   }


	   while(j<m)
	   {
	       res[k]=b[j];
	       k++;
	       j++;
	   }


	}



};
