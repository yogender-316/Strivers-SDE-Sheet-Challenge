#include <bits/stdc++.h> 
void sortAdjacencyList(vector<int> adj[],int v) {
    for(int i=0;i<v;i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }
}
vector<int> BFS(int V, vector<pair<int, int>> edges)
{
    // Write your code here
    vector<int> adj[V];
    int m=edges.size();
    for(int i=0;i<m;i++)
    {
        adj[edges[i].first].emplace_back(edges[i].second);
        adj[edges[i].second].emplace_back(edges[i].first);
    }
    sortAdjacencyList(adj,V);
    for(int i=0;i<m;i++)
    {
        adj[edges[i].first].emplace_back(edges[i].second);
        adj[edges[i].second].emplace_back(edges[i].first);
    }
    int vis[V]={0};
    vector<int> ans;
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i]=1;
            while(q.size())
            {
                int node=q.front();
                q.pop();
                ans.emplace_back(node);
                for(int it:adj[node])
                {
                    if(!vis[it])
                    {
                        vis[it]=1;
                        // ans.emplace_back(it);
                        q.push(it);
                    }
                }
            }
        }
    }
    return ans;
}