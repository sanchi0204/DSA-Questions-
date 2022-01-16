Solution{
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here
        int currSum=0;
        int maxSum=0;

        for(int i=0;i<K;i++)
            currSum+=Arr[i];

        maxSum=currSum;

        for(int i=K;i<N;i++)
        {
            currSum= currSum+Arr[i]-Arr[i-K];
            maxSum = max(maxSum,currSum);
        }

        return maxSum;
    }
};
