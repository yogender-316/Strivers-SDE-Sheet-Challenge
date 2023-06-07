#include <bits/stdc++.h> 
void dfs(int node,int vis[], stack<int> &st, vector<int> adj[])
    {
          vis[node]=1;
          for(int i:adj[node])
          {
              if(!vis[i])
              dfs(i,vis,st,adj);
          }
          st.push(node);
          
    }
vector<int> topologicalSort(vector<vector<int>> &edges, int V, int m)  {
    // Write your code here
    vector<int> adj[V];
    for(int i=0;i<m;i++)
    {
        int f=edges[i][0];
        int s=edges[i][1];
        adj[f].emplace_back(s);
        // adj[s].emplace_back(f);
    }
     int vis[V]={0};
	    queue<int> q;
	    vector<int> ans;
	    int indeg[V]={0};
	    for(int i=0;i<V;i++)
	    {
	       for(int it:adj[i])
	       {
	           indeg[it]++;
	       }
	    }
	    for(int i=0;i<V;i++)
	    {
	        if(!indeg[i])
	        q.push(i);
	    }
	    while(q.size())
	    {
	        int node=q.front();
	        ans.push_back(q.front());
	        q.pop();
	        for(int i:adj[node])
	        {
	            indeg[i]--;
	            if(!indeg[i])
	            q.push(i);
	        }
	    }
        // for(int it:ans)
        // cout<<it<<" ";
        // reverse(ans.begin(),ans.end());
	    return ans;
}