class Solution{
  public:

  int help(string A, string B)
  {
      int n=A.length();

      int t[n+1][n+1];

      for(int i=0;i<n+1;i++)
      {
          for(int j=0;j<n+1;j++)
          {
              if(i==0 || j==0)
                t[i][j]=0;
          }
      }

      for(int i=1;i<n+1;i++)
      {
          for(int j=1;j<n+1;j++)
          {
              if(A[i-1]==B[j-1])
                t[i][j]=1+t[i-1][j-1];

            else
                t[i][j]=max(t[i-1][j], t[i][j-1]);
          }
      }

      return t[n][n];
  }
    int minimumNumberOfDeletions(string S) {
        // code here

        string R = string(S.rbegin(), S.rend());

        int n=S.length();

        return n-help(S,R);
    }
};
