class Solution {
public:
    int maximumScore(int a, int b, int c) {

        priority_queue<int> pq;

        pq.push(a);
        pq.push(b);
        pq.push(c);

        int count=0;

        while(pq.size()>=2)
        {
            int first = pq.top();
            pq.pop();

            int second = pq.top();
            pq.pop();

         if(first==0 || second==0)
             break;

            pq.push(first-1);
            pq.push(second-1);

              count++;

        }


        return count;
    }
};
