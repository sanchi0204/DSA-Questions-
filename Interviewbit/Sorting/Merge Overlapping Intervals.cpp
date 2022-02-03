/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

 bool compare(Interval A, Interval B)
 {
     return (A.start<B.start);
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    sort(A.begin(), A.end(),compare);

    int res=0;

    for(int i=1;i<A.size();i++)
    {
        if(A[res].end>=A[i].start)
        {
            A[res].end=max(A[res].end, A[i].end);
            A[res].start = min(A[res].start, A[i].start);
        }
        else
        {
            res++;
            A[res]=A[i];
        }
    }

    vector<Interval> op;
    for(int i=0;i<=res;i++)
    {
        op.push_back(A[i]);
        //op.push_back(A[i].end);
    }

    return op;

}
