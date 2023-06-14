#include<bits/stdc++.h>

bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.


	queue<pair<int,int>> q;
	vector<int> adj[edges.size()];
	int count=0;
	for(int j=0;j<edges.size();j++)
	{
		for(int i=0;i<edges.size();i++)
		{
			if(edges[j][i]==1)
			{
				adj[i].emplace_back(j);
				adj[j].emplace_back(i);
			}
		}
	}
	q.push(make_pair(0,0));
	vector<int> vis(edges.size(),0),col(edges.size(),-1);
	vis[0]=1;
	col[0]=0;
	while(q.size())
	{
		auto temp=q.front();
		q.pop();
		int color=temp.second^1;
		int node=temp.first;
		for(int it:adj[node])
		{
			if(!vis[it])
			{
				vis[it]=1;
				q.push(make_pair(it,color));
				col[it]=color;
			}
			else
			if(col[it]!=color)
			return false;
		}
	}
	return true;
}