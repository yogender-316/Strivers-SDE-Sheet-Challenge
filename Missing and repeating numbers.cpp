#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int i=0;
	int extra=-1;
	int miss=-1;
	int ind=-1;
	while(i<arr.size())
	{
		if(arr[i]==0)
		{
			i++;
			continue;
		}
		if(arr[i]==i+1)
		{
			i++;
			continue;
		}
		
			int temp=arr[i];
			if(temp==arr[temp-1]){
			extra=temp;
			ind=i;
			arr[i]=0;
			i++;
			continue;
			}
			int x=arr[temp-1];
			arr[i]=x;
			arr[temp-1]=temp;
			
		
	}
	for(i=0;i<arr.size();i++)
	{
		if(arr[i]==0)
		miss=i+1;
	}
	return make_pair(miss,extra);
}
