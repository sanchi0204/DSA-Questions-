class Solution{
public:
    //Function to partition the array around the range such
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here

        int low=0, high=array.size()-1, mid=0;

        while(mid<=high)
        {
            if(array[mid]<a)
            {
                swap(array[low], array[mid]);
                                    mid++;
                                    low++;
            }

            else if (array[mid]>=a && array[mid]<=b) {
                mid++;
            }

            else{

             swap(array[mid], array[high]);
                                    high--;
            }
            }
        }

};
