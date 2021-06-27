class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {

        //find peak element
        //peak element is an element which is graeter than its neighbours

        //o(logn) solution using binary search
        int n = a.size();

        // if(n==0 || n==1 || n==2)
        //     return -1;

        int low=0,high=n-1;

        while(low<=high)
        {
            int mid = low + (high-low)/2;
           // int mid = (low+high)/2;

            if((mid==0 || a[mid]>a[mid-1]) && (mid==n-1 || a[mid]>a[mid+1]))
                return mid;

            if(mid>0 && a[mid-1]>a[mid])
                high=mid-1;

            else
                low=mid+1;
        }


        return -1;

        //0(n) solution but same time as above

//         for(int i=1;i<n;i++)
//         {
//             if(a[i]>a[i-1] && a[i]>a[i+1])
//                 return i;
//         }

//         return n;

    }
};
