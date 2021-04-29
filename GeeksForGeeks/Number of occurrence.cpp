
int firstOcc(int a[], int n, int x)
{
int low=0, high=n-1;

while(low<=high)
{
    int mid=(low+high)/2;

    if(a[mid]>x)
        high=mid-1;

    else if(a[mid]<x)
        low=mid+1;

    else
    {
        if(mid==0 || a[mid-1]!=a[mid])
            return mid;

        else
            high = mid-1;
    }
}

return -1;
}


int lastOcc(int a[], int n, int x)
{
int low=0, high = n-1;

while(low<=high)
{
    int mid=(low+high)/2;

    if(a[mid]>x)
         high=mid-1;

    else if(a[mid]<x)
         low=mid+1;

    else
    {
        if(mid==n-1 || a[mid+1]!=a[mid])
            return mid;

        else
            low=mid+1;
    }
}

return -1;
}


int count(int a[], int n, int x) {
  // code here

  int first = firstOcc(a,n,x);

   if(first==-1)
     return 0;

  int last = lastOcc(a,n,x);


 return last-first+1;

}
};
