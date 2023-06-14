void dfs(vector<vector<int>> &image,vector<vector<int>> &vis,pair<int,int> node,int color)
    {
        
        int n=image.size(),m=image[0].size();
        int i=node.first,j=node.second;
        vis[i][j]=1;
        int val=image[i][j];
        image[i][j]=color;
        vector<pair<int,int>> arr={{-1,0},{1,0},{0,1},{0,-1}};
        for(auto it:arr)
            {
                int curl=node.first+it.first;
                int curr=node.second+it.second;
                if(curl>=0&&curr>=0&&curl<n&&curr<m&&image[curl][curr]==val&&vis[curl][curr]!=1)
                {
                    pair<int,int> p={curl,curr};
                    dfs(image,vis,p,color);
                }
            }
    }
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    // Write your code here.
    
        
        int n=image.size(),m=image[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
            pair<int,int> p={sr,sc};
            dfs(image,vis,p,color);
        
        return image;

}