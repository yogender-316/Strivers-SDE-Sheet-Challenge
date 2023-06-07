#include<bits/stdc++.h>

    bool dfs(int node,vector<int> &vis,vector<int> &pathvis,vector<int> adj[])
    {
        vis[node]=1;
        pathvis[node]=1;
        for(int it:adj[node])
        {
            if(!vis[it]){
                if(dfs(it,vis,pathvis,adj))
                    return true;}
            else
            if(pathvis[it])
            return true;
        }
        pathvis[node]=0;
        return false;
    }
int detectCycleInDirectedGraph(int V, vector < pair < int, int >> & edges) {
  // Write your code here.
   vector<int> adj[V+1];
    int m=edges.size();
    for(int i=0;i<m;i++)
    {
        adj[edges[i].first].emplace_back(edges[i].second);

    }
    
      vector<int> vis(V+1,0);
        vector<int> pathvis(V+1,0);
        for(int i=1;i<=V;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,vis,pathvis,adj))
                    return true;
            }
        }
        return false;
}