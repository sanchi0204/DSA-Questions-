class Solution{
public:

int countSmallerThanMid(vector<int>& res, int mid)
{
    int low=0;
    int high=res.size()-1;

    while(low<=high)
    {
        int md=low+(high-low)/2;

        if(res[md]<=mid)
            low=md+1;

        else
            high=md-1;
    }

    return low;
}
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here

        int min_=matrix[0][0];
        int max_ = matrix[0][c-1];

        for(int i=1;i<r;i++)
            {
                min_ = min(min_,matrix[i][0]);
                max_ = max(max_, matrix[i][c-1]);
            }

        int desired = (r*c)/2;

        while(min_<max_)
        {
            int mid = min_+(max_-min_)/2;
            int count =0;

            for(int i=0;i<r;i++)
                count+=countSmallerThanMid(matrix[i],mid);

            if(count<=desired)
                min_=mid+1;

            else
                max_=mid;

        }

        return min_;
    }
};
