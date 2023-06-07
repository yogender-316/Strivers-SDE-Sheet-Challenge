bool dfs(int node,int parent,vector<int> &vis,vector<int> adj[])
    {
        vis[node]=1;
        for(int it:adj[node])
        {
            if(!vis[it])
            {
                if(dfs(it,node,vis,adj))
                    return true;
            }
            else
            if(it!=parent)
            return true;
        }
        return false;
    }
string cycleDetection (vector<vector<int>>& edges, int V, int m)
{
    // Write your code here.
    vector<int> adj[V+1];
    for(int i=0;i<m;i++)
    {
        int f=edges[i][0];
        int s=edges[i][1];
        adj[f].emplace_back(s);
        adj[s].emplace_back(f);
    }
    vector<int> vis(V+1);
        vis[0]=1;
        for(int i=1;i<=V;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,-1,vis,adj))
                return "Yes";
            }
        }
        return "No";
}
