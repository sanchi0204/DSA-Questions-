class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here

        int res=1;
        for(int i=1;i<n;i++)
        {
            if(a[res-1]!=a[i])
            {
                a[res]=a[i];
                res++;
            }
        }

        return res;
    }
};
