vector<int> Solution::solve(vector<int> &A, int B) {

    int n=A.size();
    if(n<B)
        return {};

    vector<int> res;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0;i<B;i++)
        pq.push(A[i]);

   for(int i=B;i<n;i++)
   {
       if(pq.top()<A[i])
       {
            pq.pop();
            pq.push(A[i]);
       }

   }

   while(pq.empty()==false)
   {
       res.push_back(pq.top());
       pq.pop();
   }

   return res;
}
