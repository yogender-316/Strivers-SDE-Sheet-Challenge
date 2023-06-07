#include<bits/stdc++.h>
void bfs(int** grid,vector<vector<int>> &vis,int i,int j, int n, int m)
    {
        vis[i][j]=1;
      //   int n=grid.size();
        vector<pair<int,int>> arr={{1,1},{1,0},{0,1},{-1,-1},{-1,0},{0,-1},{-1,1},{1,-1}};
        //{{1,1},{1,0},{0,1},{-1,-1},{-1,0},{0,-1},{-1,1},{1,-1}}
      //   int m=grid[0].size();
        queue<pair<int,int>> q;
        q.push({i,j});
        while(q.size())
        {
            pair<int,int> node=q.front();
            q.pop();
            for(auto it: arr)
            {
                int curl=node.first+it.first;
                int curr=node.second+it.second;
                if(curl>=0&&curr>=0&&curl<n&&curr<m&&grid[curl][curr]==1&&!vis[curl][curr])
                {            vis[curl][curr]=1;
                                q.push({curl,curr});
                        
                }
            }
        }
    }
int getTotalIslands(int** grid, int n, int m)
{
   // Write your code here.
    int count=0;
      //   int n=grid.size();
      //   int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                continue;
                if(vis[i][j]!=1)
                {
                    count++;
                    bfs(grid,vis,i,j,n,m);
                }
            }
        }
        return count;

}
