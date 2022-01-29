int findSub(string s, int k)
{
        unordered_map<char,int> mp;
  int count=0;
  int i=0,j=0;

  while(j<s.length())
  {
      mp[s[j]]++;

      // if(mp.size()<k)
      // j++;

      if(mp.size()==k)
          count=max(count, j-i+1);

      while(mp.size()>k)
      {
          mp[s[i]]--;

          if(mp[s[i]]==0)
              mp.erase(s[i]);

          i++;
      }

      j++;
  }

  return count;
}
  int longestKSubstr(string s, int k) {
  // your code here
          // int c1=findSub(s,k);
          // int c2=findSub(s,k);
          int ans=findSub(s,k);
          return ans==0?-1:ans;

  }
