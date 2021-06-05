class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> q(begin(stones), end(stones));  //less costly compared to below loop operation

        // for(int i=0;i<stones[i];i++)
        // {
        //     q.push(stones[i]);
        // }

        while(q.size()>1)  //here we have q.size()>1 as q has atmost 1 element
        {
            int y= q.top();
            q.pop();
            int x = q.top();
            q.pop();

            if(y>x)
                q.push(y-x);
        }

        return q.empty()?0:q.top();

    }
};
