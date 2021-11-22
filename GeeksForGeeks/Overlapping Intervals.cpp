Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here

         sort(intervals.begin(),intervals.end());
         int res=0;




         for(int i=1;i<intervals.size();i++)
         {
             if(intervals[res][1]>=intervals[i][0])
             {
                 intervals[res][0]=min(intervals[res][0], intervals[i][0]);
                 intervals[res][1]=max(intervals[res][1], intervals[i][1]);
             }

             else
             {
                 res++;
                 intervals[res]=intervals[i];
             }

         }

         vector<vector<int>> ans(res+1);
         for(int i=0;i<=res;i++)
         {
             ans[i]=intervals[i];
         }

    return ans;

    }
};
