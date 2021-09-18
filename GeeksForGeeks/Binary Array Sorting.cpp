class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
        // Your code goes here
        int i=-1;
        int j=binArray.size();

        while(true)
        {
            do
            {
                i++;
            }while(binArray[i]==0);

            do{
                j--;
            }while(binArray[j]==1);

            if(i>=j)
                break;

            swap(binArray[i], binArray[j]);
        }

        return binArray;
    }
};
