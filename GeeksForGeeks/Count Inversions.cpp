Solution{
  public:

    long long int countInv(long long a[], long long l, long long m, long long h)
    {
        long long int res=0;
        long long n1=m-l+1;
        long long n2=h-m;

        long long left[n1];
        long long right[n2];

        for(long long i=0;i<n1;i++)
            left[i]=a[l+i];

        for(long long j=0;j<n2;j++)
            right[j]=a[m+1+j];

        long long i=0,j=0,k=l;
        while(i<n1 && j<n2)
        {
            if(left[i]<=right[j])
                {
                    a[k++]=left[i];
                    i++;
                }

            else
            {
                a[k++]=right[j];
                j++;
                res=res+n1-i;
            }
        }

        while(i<n1)
            a[k++]=left[i++];

        while(j<n2)
            a[k++]=right[j++];


        return res;

    }

        long long int mergeInv(long long a[], long long l, long long h)
        {
            long long int res=0;

              if(l<h)
        {
                long long m = l + (h-l)/2;
                res+= mergeInv(a,l,m);
                res+=mergeInv(a,m+1,h);
                res+=countInv(a,l,m,h);

        }

        return res;
        }

    long long int inversionCount(long long arr[], long long N)
    {

        return mergeInv(arr,0,N-1);


}
};
