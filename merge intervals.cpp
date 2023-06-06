#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
// bool comp(vector<int> p1,vector<int> p2)
// {
//     if(p1.second>=p2.first)
//     return true;
//     else
//     return p1.first<p2.first;
// }
vector<vector<int>> mergeIntervals(vector<vector<int>> &i)
{
    // Write your code here.
    sort(i.begin(),i.end());
    int n=i.size();
    vector<int> ans(2);
    int start=0;
    vector<vector<int>> finals;
    ans[0]=i[0][0];
    ans[1]=i[0][1];
    for(int it=1;it<n;it++)
    {
        if(ans[1]>=i[it][0])
        {
            ans[1]=max(ans[1],i[it][1]);
        }
        else
        {
            finals.emplace_back(ans);
            ans[0]=i[it][0];
            ans[1]=i[it][1];
        }
    }
    finals.emplace_back(ans);
    return finals;
}
