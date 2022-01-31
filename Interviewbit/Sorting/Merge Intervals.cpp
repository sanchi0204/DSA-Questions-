/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

 bool cmp(Interval i1, Interval i2)
 {
     return i1.start<i2.start;
 }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end(),cmp);
    int res=0;

    for(int i=1;i<intervals.size();i++)
    {
            if(intervals[res].end>=intervals[i].start)
            {
                intervals[res].start = min(intervals[res].start, intervals[i].start);
                intervals[res].end = max(intervals[res].end, intervals[i].end);
            }

            else
            {
                res++;
                intervals[res]=intervals[i];
            }
    }

    vector<Interval> op;

    for(int i=0;i<=res;i++)
        op.push_back(intervals[i]);


    return op;

}
