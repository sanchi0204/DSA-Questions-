int bin_search(int A[], int left, int right, int k)
{

    while(left<=right)
    {
        int mid = (left+right)/2;

        if(k==A[mid])
            return mid;


        else if(A[mid]>k)
            right = mid-1;

        else
            left= mid+1;
    }

    return -1;
}
