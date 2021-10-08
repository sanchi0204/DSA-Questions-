Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {

    if(n==0)
        return -1;

    if(n==1)
        return 1;
        // Your code here
        long long lsum=0;
        long long sum=0;

        for(int i=0;i<n;i++)
            sum+=a[i];

        for(int i=0;i<n;i++)
            {
                sum=sum-a[i];

                if(lsum==sum)
                    return i+1;

                lsum+=a[i];
            }

            return -1;
    }

};
