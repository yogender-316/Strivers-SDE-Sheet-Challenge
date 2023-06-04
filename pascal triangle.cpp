#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long>> ans(n);
  ans[0].emplace_back(1);
  for(int i=1;i<n;i++)
  {
    ans[i].resize(i+1);
    ans[i][0]=1;
    ans[i][i]=1;
    for(int j=1;j<i;j++)
    {
      // if(j+1<n)
      ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
    }
  }
  return ans;


}
