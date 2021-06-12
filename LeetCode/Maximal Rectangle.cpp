class Solution {
public:


    vector<int> NSL(vector<int> &heights)
    {
        vector<int> left;
        stack<pair<int,int>> s;
        int n=heights.size();

        s.push({heights[0],0});
        left.push_back(-1);

        for(int i=1;i<n;i++)
        {
            while(!s.empty() && s.top().first>=heights[i])
                s.pop();

            int NSL = s.empty()?-1:s.top().second;
            left.push_back(NSL);
            s.push({heights[i],i});
        }


        return left;

    }

    vector<int> NSR(vector<int> &heights)
    {
        vector<int> right;
        stack<pair<int,int>> s;
        int n=heights.size();

          s.push({heights[n-1],n-1});
        right.push_back(n);

        for(int i=n-2;i>=0;i--)
        {
            while(!s.empty() && s.top().first>=heights[i])
                s.pop();

            int NSR = s.empty()?n:s.top().second;
            right.push_back(NSR);
            s.push({heights[i],i});
        }


        reverse(right.begin(),right.end());

        return right;
    }

    int largestRectangleArea(vector<int>& heights) {

        if(heights.size()==0)
            return 0;

        vector<int> left=NSL(heights);
        vector<int> right = NSR(heights);
        int res=0;

        for(int i=0;i<heights.size();i++)
        {
            int area = heights[i]*(right[i]-left[i]-1);
            res = max(res,area);
        }

        return res;

    }

    int maximalRectangle(vector<vector<char>>& matrix) {

        if(matrix.size()==0 || matrix[0].size()==0)
            return 0;

        int row=matrix.size();
        int col = matrix[0].size();


        vector<int> v(col,0);
        int maxArea;


        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]=='0')
                    v[j]=0;

                else
                    v[j]+=1;
            }

            maxArea = max(maxArea, largestRectangleArea(v));
        }

        return maxArea;

    }
};
