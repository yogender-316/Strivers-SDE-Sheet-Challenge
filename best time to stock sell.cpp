#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mi=prices[0],ma=prices[0],ans=0;
    for(int it:prices)
    {
        if(it<mi)
        {
            mi=it;
            ma=it;
        }
        else
        {
            if(ma<it)
            {
                ma=it;
                int d=ma-mi;
                ans=max(ans,d);
            }
        }
    }
    return ans;
}