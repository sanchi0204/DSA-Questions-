Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int xor1=0;
        int set=0;

        int miss=0;
        int repeat=0;

        for(int i=0;i<n;i++)
            xor1 = xor1^arr[i];


        for(int i=1;i<=n;i++)
            xor1 = xor1^i;

        set = xor1 & ~(xor1-1);

        for(int i=0;i<n;i++)
        {
            if(set & arr[i])
                miss = miss^arr[i];

            else
                repeat = repeat^arr[i];
        }

         for(int i=1;i<=n;i++)
        {
            if(set & i)
                miss = miss^i;

            else
                repeat = repeat^i;
        }


        int check=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]==miss)
                check++;

        }

        int* ans = new int[2];

        if(check!=0)
        {
            ans[0]=miss;
            ans[1]=repeat;
        }

        else
            {
                ans[0]=repeat;
                ans[1]=miss;
            }

            return ans;
    }
};
