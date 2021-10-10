class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int A[], int n)
    {
        //Your code here
            sort(A,A+n);
        for(int i=0;i<n-2;i++)
        {
            int low=i+1;
            int high=n-1;

            while(low<high)
            {
                if(A[i]+A[low]+A[high]==0)
                    return true;

                else if(A[i]+A[low]+A[high]>0)
                    high--;

                else
                    low++;
            }
        }

        return false;
    }
};
