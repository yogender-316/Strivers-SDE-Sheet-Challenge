#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    int pos=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(p[i]<p[i+1])   
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        reverse(p.begin(),p.end());
        return p;
    }
    for(int i=n-1;i>pos;i--)
    {
        if(p[pos]<p[i])
        {
            int temp=p[pos];
            p[pos]=p[i];
            p[i]=temp;
            break;
        }
    }
    reverse(p.begin()+pos+1,p.end());
    return p;
}