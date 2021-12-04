int M;

long long mod(long long x)
{
    return (((x%M)+M)%M);
}
long long mul(long long a, long long b)
{
    return mod(mod(a)*mod(b));
}
int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

M=d;
      if(x==0)
        return 0;

      if(n==0)
        return 1LL;

    if(n==1)
        return mod(x);

      long long ans=1;

      while(n)
      {
          if(n%2==1)
            {
                ans = mul(ans,x);
            }


                x=mul(x,x);
                n=n/2;

      }

      return ans;
}
