#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
struct Interval
{
    int start;
    int end;
};
bool compareInterval(Interval i1, Interval i2)
{  return (i1.start < i2.start)? true: false; }
void solve(vector<Interval>& intervals)
{
    if (intervals.size() <= 0)
        return;
    stack<Interval> s;
    sort(intervals.begin(), intervals.end(), compareInterval);
    s.push(intervals[0]);
    for (int i = 1 ; i < intervals.size(); i++)
    {
        Interval top = s.top();
        if (top.end <= intervals[i].start)
        {
            s.push( intervals[i] );
        }
        else if (top.end < intervals[i].end)
        {
            top.end = intervals[i].end;
            s.pop();
            s.push(top);
        }
    }
    cout<<s.size()<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        cin>>n;
        vector < Interval > V;
        for(i=0;i<n;i++)
        {
            Interval tmp;
            cin>>tmp.start>>tmp.end;
            V.push_back(tmp);
        }
        solve(V);
    }
    return 0;
}
