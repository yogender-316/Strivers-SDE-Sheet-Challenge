void dfs(int node,int vis[],vector<int> &ans, vector<int> edges[])
{
    vis[node]=1;
    ans.emplace_back(node);
    for(int it:edges[node])
    {
        if(!vis[it])
        {
            dfs(it,vis,ans,edges);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    int vis[V]={0};
    // Write your code here
    vector<vector<int>> finals;
    vector<int> edg[V];
    for(auto it: edges)
    {
        edg[it[0]].emplace_back(it[1]);
        edg[it[1]].emplace_back(it[0]);
    }
    for(int i=0;i<V;i++)
    {

        if(!vis[i])
        {
            vector<int> ans;
            dfs(i,vis,ans,edg);
            finals.emplace_back(ans);
        }
    }
    return finals;
}