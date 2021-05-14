long long int floorSqrt(long long int x)
{
    // Your code goes here

 long long int low=1, high=x, ans=-1;

    while(low<=high)
    {
long long int mid = low + (high-low)/2;
 long long int msq = mid*mid;

        if(msq==x)
            return mid;

        else if(msq>x)
            high=mid-1;

        else
            {
                low=mid+1;
                ans=mid;
            }

    }

    return ans;
}
