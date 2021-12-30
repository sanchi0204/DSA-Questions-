int Search(vector<int> vec, int K) {
    //code here

    int low=0;
    int high=vec.size()-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(vec[mid]==K)
            return mid;


        if(vec[mid]>=vec[low])
        {
            if(K>=vec[low] && vec[mid]>K)
                high=mid-1;

            else
                low=mid+1;
        }

        else
        {
            if(K>vec[mid] && vec[high]>=K)
                low=mid+1;

            else
                high=mid-1;
        }
    }


    return -1;

}
