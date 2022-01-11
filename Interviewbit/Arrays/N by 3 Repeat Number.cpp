int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int sz=A.size();

    int num1=-1,num2=-1,count1=0,count2=0;

    for(int i=0;i<sz;i++)
    {
        if(A[i]==num1)
            count1++;

        else if(A[i]==num2)
            count2++;

        else if(count1==0)
        {
            num1=A[i];
            count1=1;
        }

        else if(count2==0)
        {
            num2=A[i];
            count2=1;
        }

        else
        {
            count1--;
            count2--;
        }
    }

    count1=0,count2=0;

    for(int i=0;i<sz;i++)
    {
        if(A[i]==num1)
            count1++;

        if(A[i]==num2)
            count2++;
    }

    if(count1>sz/3)
        return num1;

    else if(count2>sz/3)
        return num2;

    else
        return -1;
}
