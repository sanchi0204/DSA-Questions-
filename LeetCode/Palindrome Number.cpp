class Solution {
public:
    bool isPalindrome(int x) {

        // if(x<0)
        //     return false;

        int num = x;

        int rem=0;
        long t=0;

        while(num>0)
        {
            rem = num%10;
            t  = t*10+rem;
            num=num/10;
        }

        if(t==x)
            return true;



        return false;

    }
};
