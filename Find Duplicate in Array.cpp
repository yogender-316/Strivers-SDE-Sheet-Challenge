#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums, int n){
	// Write your code here.
	int slow=0,fast=0;
	do
	{
		slow=nums[slow];
		fast=nums[nums[fast]];
	}while(slow!=fast);
	fast=0;
	while(fast!=slow)
	{
		fast=nums[fast];
		slow=nums[slow];
	}
	return fast;

	
}
