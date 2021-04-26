class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){

        // Your code here

        long long int low=0, high=n-1,ans=-1;

        while(low<=high)
        {
            long long int mid = low + (high-low)/2;


            if(v[mid]==x)
                return mid;

            else if(v[mid]>x)
                high=mid-1;

            else
            {
                low=mid+1;
                ans = mid;

            }
        }

        return ans;

    }
};
