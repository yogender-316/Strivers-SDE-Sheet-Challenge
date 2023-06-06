#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long ans=0;
    long long sub=0;
    for(int i=0;i<n;i++)
    {
        sub+=arr[i];
        if(sub<0)
        {
            sub=0;
        }
        ans=max(ans,sub);
    }
    return ans;
}