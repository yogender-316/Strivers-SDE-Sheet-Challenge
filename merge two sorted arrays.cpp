#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> ans;
	int i=0,j=0;
	while(j<arr2.size())
	{
		if(arr1[i]==0)
		break;
		if(arr1[i]<arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
		}
		else
		{
			ans.push_back(arr2[j]);
			j++;
		}
	}
	
	while(i<arr1.size())
	{
		if(arr1[i]==0)
		break;
		ans.push_back(arr1[i]);
			i++;
	}
	while(j<arr2.size())
	{
		ans.push_back(arr2[j]);
			j++;
	}
	for(i=0;i<arr1.size();i++)
	arr1[i]=ans[i];
	return ans;
}