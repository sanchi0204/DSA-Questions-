int search(int arr[], int N, int X)
{

    // Your code here

    // int low=0,high=N-1,pos=-1;

    // for(low=0;low<=high;)
    // {
    //     if(arr[low]==X)
    //     {
    //         pos=low;
    //         break;
    //     }

    //      if(arr[high]==X)
    //     {
    //         pos=high;
    //         break;
    //     }


    //             low++;
    //             high--;

    int pos=-1;

    for(int i=0;i<N;i++)
    {
        if(arr[i]==X)
            {
                pos=i;
                break;
            }
    }



    return pos;

}
