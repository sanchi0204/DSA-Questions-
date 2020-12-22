int MaxSum(int arr[], int num)
{
    int res=arr[0], maxEnd=arr[0];

    for(int i=1;i<num;i++)
    {
        maxEnd=max(arr[i], maxEnd+arr[i]);

        res=max(res,maxEnd);
    }

    return res;

}


int circularSubarraySum(int arr[], int num){

    // your code here
    int sumNormal = MaxSum(arr, num);

    if(sumNormal<0)
        return sumNormal;

    int sum=0;
    for(int i=0;i<num;i++)
    {
        sum+=arr[i];
        arr[i]=-arr[i];
    }

    int maxCircularSum= sum+MaxSum(arr,num);

    int ans= max(sumNormal, maxCircularSum);

    return ans;
}
