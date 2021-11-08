class Solution{
 public:

 int LCS(string s1, string s2)
 {
     int n=s1.length();
     int m = s2.length();

     int t[n+1][m+1];

     for(int i=0;i<n+1;i++)
     {
         for(int j=0;j<m+1;j++)
         {
             if(i==0||j==0)
                 t[i][j]=0;
         }
     }

     for(int i=1;i<n+1;i++)
     {
         for(int j=1;j<m+1;j++)
         {
             if(s1[i-1]==s2[j-1])
                 t[i][j]=1+t[i-1][j-1];

            else
             t[i][j]=max(t[i-1][j],t[i][j-1]);
         }
     }

     return t[n][m];
 }
 int minOperations(string str1, string str2)
 {
     // Your code goes here

     int x = LCS(str1,str2);

     int n=str1.length();
     int m = str2.length();

     int deletions = n-x;
     int insertions = m-x;

     return deletions+insertions;

 }
};
